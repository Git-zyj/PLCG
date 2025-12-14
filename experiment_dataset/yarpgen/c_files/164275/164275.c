/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((-(arr_4 [i_0] [i_0]))), ((18128743496170250257 + (arr_2 [i_0])))));
                var_11 -= ((arr_5 [i_0] [i_1] [i_0]) ? var_7 : (((arr_5 [i_0] [i_1] [i_1]) ? var_9 : (arr_5 [i_0] [i_0] [i_0]))));
                var_12 = (((max(318000577539301390, (((arr_3 [i_0] [i_0]) ? 18128743496170250257 : var_8))))) ? (arr_2 [i_1]) : (((arr_5 [i_0] [16] [i_0]) + ((var_10 ? 15615509439620594938 : (arr_0 [19] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = ((!(((arr_5 [i_0] [i_1] [i_0]) < (arr_3 [i_0] [i_0])))));
                                var_14 = var_9;
                            }
                        }
                    }
                }
                arr_13 [i_0] = arr_5 [i_0] [i_1] [i_0];
            }
        }
    }
    var_15 = 18128743496170250257;
    var_16 = (var_5 ? ((var_10 ? (var_3 / 18128743496170250259) : (var_5 / var_1))) : (((~var_9) ? 3427656416011041579 : var_9)));
    var_17 = (var_4 ? (min((max(5046942383678682921, 10829699983991285374)), 2680456756925432627)) : ((~(var_2 + 2305838611167182848))));
    #pragma endscop
}
