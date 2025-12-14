/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164647
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */short) ((unsigned int) 9007199254740991LL));
    var_21 = ((/* implicit */_Bool) var_17);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_2 - 1])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_2 + 2]) : (arr_0 [i_2 + 1]))) : (min((arr_0 [i_2 + 1]), (var_8))))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) (signed char)21))))))));
                    arr_8 [i_0 - 1] [(short)8] [i_1] [i_1] |= ((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-29))))) ? (((((/* implicit */_Bool) 1478960073)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-9007199254740991LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) & (823560960))))))) : ((~(max((((/* implicit */unsigned long long int) var_18)), (var_15)))))));
}
