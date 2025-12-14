/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105240
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((var_6) | (((/* implicit */unsigned long long int) 856480496)))))));
    var_19 = ((/* implicit */_Bool) max(((+((~(var_16))))), (max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)7))))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (unsigned short)27851)), (var_15))), (((/* implicit */long long int) ((int) (unsigned short)37666)))))) > (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (max((var_12), (var_13))) : (max((var_14), (((/* implicit */unsigned long long int) var_2)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                var_21 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((var_15) + (9223372036854775807LL))) >> (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (562949953421311ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (var_10)))))))));
                var_22 = (signed char)7;
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_10 [i_3 + 1])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_3 + 1])) : (((/* implicit */int) arr_1 [i_3 - 2]))))));
                                var_24 = (-((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)46)) : (856503704))))));
                                arr_12 [i_0] [i_2] = ((/* implicit */int) 576460752303423488LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
