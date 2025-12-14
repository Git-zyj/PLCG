/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133954
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1])))))) * (((arr_6 [i_1 + 1] [i_1]) % (arr_6 [i_1 - 3] [i_1])))));
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_0] [i_2])) < (min((((/* implicit */unsigned int) arr_7 [i_1])), (arr_0 [i_0] [i_0])))))) > (((/* implicit */int) (((+(arr_6 [i_1] [i_2]))) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_0])), (2098008392U)))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_2] [i_2]) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32169))))), ((-(((unsigned int) (short)-32193)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_10);
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 10443869044017535900ULL)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (short)32169)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_2))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) * (((/* implicit */int) ((signed char) var_17))))))));
}
