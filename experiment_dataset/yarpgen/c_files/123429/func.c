/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123429
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((-4303254329429298339LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))))))))));
    var_21 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0 + 2] = max(((unsigned char)18), ((unsigned char)223));
                    arr_8 [i_0 + 3] = ((/* implicit */unsigned char) max((max((var_0), (((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_1])), (var_1)))))), (((/* implicit */int) arr_4 [i_0 + 1]))));
                    var_22 *= var_10;
                    var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (max((arr_2 [i_0] [i_0]), (((/* implicit */int) arr_3 [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (unsigned char)0)), (0LL))), (((/* implicit */long long int) (~(var_18))))));
                                arr_16 [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_0 [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 - 2] [i_2 - 1])))), (max((((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2] [i_2]))) : (0U))), (((/* implicit */unsigned int) ((int) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */unsigned int) (unsigned char)233);
    var_25 = var_9;
}
