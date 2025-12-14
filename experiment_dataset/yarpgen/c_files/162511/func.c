/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162511
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))) & (((arr_4 [i_0]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [(unsigned short)5] [i_1] [i_2])))))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) min((((/* implicit */unsigned char) var_5)), (max((arr_5 [i_2] [i_1]), (((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4 - 2] [i_4 - 1]))))) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_2] [i_3])) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_4] [13LL] [i_2] [i_1])) : (((var_6) - (((/* implicit */int) var_4))))))));
                                arr_16 [i_2] [i_1] [(short)16] [i_2] [i_4] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [(signed char)5] [i_3] [(signed char)5]), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) << (((((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_4 - 3])) - (119))))))))) : (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [(signed char)5] [i_3] [(signed char)5]), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) << (((((((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_4 - 3])) - (119))) - (84)))))))));
                                var_13 = ((((/* implicit */_Bool) min(((~(825245223U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_2])))))))) ? (((-735938062) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_7);
}
