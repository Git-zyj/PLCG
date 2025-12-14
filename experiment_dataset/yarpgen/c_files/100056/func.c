/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100056
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
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6483))) : (2823135635U)))) ? (((/* implicit */unsigned long long int) var_7)) : (18446744073709551607ULL)))) ? (var_10) : (((/* implicit */unsigned int) (+((-(1875921232))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 2703429769U))) || (((/* implicit */_Bool) min((18446744073709551608ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551610ULL)) || (((/* implicit */_Bool) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */_Bool) var_13);
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((3158965948U), (1471831660U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-21919))))) : (((arr_8 [i_1 + 1] [i_3] [i_3 - 1] [i_3] [i_4]) * (arr_8 [i_2 - 2] [(short)7] [i_3 + 2] [i_3] [i_3])))));
                                var_23 = ((18446744073709551607ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))));
                                arr_14 [i_0] [i_0] = ((/* implicit */_Bool) (~(max((1581600299816671989LL), (-2914175092326595017LL)))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_18))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) 2823135640U);
    var_26 |= ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))), (var_3)));
}
