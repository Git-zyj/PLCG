/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172664
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (unsigned short)61960))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((_Bool) (short)127));
                                var_21 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_1 - 1] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_4] [i_4] [i_0 + 2])))), (((/* implicit */int) arr_6 [i_2 - 1] [(signed char)10] [i_0 + 2]))));
                            }
                        } 
                    } 
                    arr_12 [(_Bool)1] [i_1] [i_2] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((((long long int) arr_9 [i_2 + 1] [i_0] [(unsigned short)2] [i_1 - 1] [i_0] [i_0])) << (((1029924120U) - (1029924074U))))) << (((((/* implicit */int) max((min((arr_0 [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_2 - 1]))), (var_11)))) - (49949)))))) : (((/* implicit */short) ((((((long long int) arr_9 [i_2 + 1] [i_0] [(unsigned short)2] [i_1 - 1] [i_0] [i_0])) << (((1029924120U) - (1029924074U))))) << (((((((((/* implicit */int) max((min((arr_0 [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_2 - 1]))), (var_11)))) - (49949))) + (10825))) - (11))))));
                    arr_13 [i_0] [i_2] [i_2 + 1] = ((/* implicit */short) arr_6 [i_0 + 3] [i_1] [i_1]);
                }
                var_22 = ((/* implicit */_Bool) var_10);
                arr_14 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_9 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0 - 1]))))))), (max((1029924115U), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [(unsigned char)9] [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_0]))))));
                arr_15 [i_0] [i_1 - 1] = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_14))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (3491836803848568916ULL)))));
}
