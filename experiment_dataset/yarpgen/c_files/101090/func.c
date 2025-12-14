/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101090
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
    var_20 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((arr_0 [i_1] [11ULL]) || (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (var_19))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) <= (arr_3 [i_1] [(signed char)22] [i_0])))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((1325530417U) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (min((var_1), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [(short)22])))))), (((/* implicit */unsigned long long int) ((short) 18446744073709551615ULL)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_17);
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-12337)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_2 + 2] [i_0]))) : (arr_5 [i_1] [i_2 + 2] [i_4]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_2 + 2] [i_1])) * (((/* implicit */int) arr_0 [i_2 - 1] [i_2 + 1])))))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-12356))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-12324)) + (12333))))) << (((((/* implicit */int) arr_6 [i_1])) - (26232))))) / ((+(((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [i_0]))))))));
                arr_16 [i_0] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_6 [i_1])) << ((((((+(((/* implicit */int) (short)-12324)))) + (12353))) - (17)))))));
            }
        } 
    } 
}
