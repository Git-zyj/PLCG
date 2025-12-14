/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107619
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) arr_1 [i_0] [i_1]);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_2] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [i_2 + 3] [i_0] [i_0 - 1])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 3] [i_2])), (1050570403U)))) : (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */long long int) 3353450621U)))))))));
                    var_18 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)3807))))), (((var_9) >> (((var_6) - (548002062))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)3818), ((unsigned short)3818))))))), (var_1)));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 + 2]))))), (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_9 [i_4] [i_1 - 2] [i_1 + 1] [i_1 - 2])))))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), (var_10))))));
                                arr_12 [i_3] [(unsigned short)3] [23] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -563997472))))) >> ((((~(((/* implicit */int) (short)27161)))) + (27170)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((max((max((((/* implicit */unsigned int) (_Bool)1)), (var_1))), (((/* implicit */unsigned int) var_8)))) - (((/* implicit */unsigned int) var_6))));
}
