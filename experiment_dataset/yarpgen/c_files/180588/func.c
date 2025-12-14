/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180588
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) var_9);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_1])) / (((/* implicit */int) var_19))));
                                var_22 = ((/* implicit */int) var_10);
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) var_0);
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((unsigned char) (-(var_12))))));
                                var_24 = ((/* implicit */int) ((unsigned char) arr_6 [i_0] [(short)5] [i_4]));
                            }
                        } 
                    } 
                }
                arr_12 [i_0] = ((/* implicit */unsigned int) var_15);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_2);
}
