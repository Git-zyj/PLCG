/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113329
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
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_8)))))), (var_7)));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_1))) == (((/* implicit */int) (short)-22692)))))) : (var_7)));
    var_13 &= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) (unsigned char)243)) ? (var_5) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_3 [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (!(arr_5 [i_1] [i_1] [i_1])))))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (_Bool)1)))) < (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_1 [i_0]))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_4);
}
