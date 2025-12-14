/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 ^= var_9;
                                var_16 = (min(var_16, (((max(((~(arr_12 [i_0] [i_0] [i_0] [20] [i_4] [i_0] [i_0]))), var_10))))));
                            }
                        }
                    }
                    var_17 = (max(var_17, (min((max((arr_6 [i_2] [i_1] [i_0]), (arr_11 [10] [i_1] [i_2] [1]))), ((((arr_11 [i_0] [i_0] [i_2] [i_0]) - var_2)))))));
                    var_18 = (min(var_18, (!-var_3)));
                    var_19 = (((((4294967295 ? ((max(-1, 4294967272))) : (max(var_12, 4294967262))))) ? (((arr_5 [i_0] [i_1] [i_1] [6]) ? (arr_11 [i_0] [i_2] [i_2] [i_0]) : (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (arr_8 [i_1] [16] [i_2] [i_1] [i_1] [i_1]) : 13939550974248658953)))) : (((min(13939550974248658931, var_12))))));
                    var_20 += 13939550974248658955;
                }
            }
        }
    }
    #pragma endscop
}
