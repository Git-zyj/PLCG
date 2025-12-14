/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [14] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = 4444440361287418911;
                    arr_9 [2] [i_0] [i_1] [i_0] = 68;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [12] [i_0] |= ((!((max((((var_1 ? 3645095241 : 40689))), (((arr_4 [i_3] [i_4]) ? 3047781423910570779 : (arr_3 [i_0] [i_1]))))))));
                                var_18 |= ((((((((24839 ? 255 : 24846))) ? (arr_1 [i_3]) : 45833))) ? -5762639355302888229 : ((((170 ? var_12 : (arr_13 [7] [i_1 + 2] [i_2 + 2] [i_3])))))));
                                arr_16 [8] [i_1 - 1] [8] [i_1] [i_2 - 2] [i_3] [14] = ((((((arr_11 [i_1 + 1] [i_2 - 2] [i_2 + 2]) ? (((arr_14 [i_1] [i_2 + 1]) ^ 10470)) : 1))) ? (~32756) : 0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_19 = 1522457500219383993;
                var_20 = (min(var_20, (((~(((arr_19 [i_5 - 1]) ? (arr_20 [i_6]) : (arr_19 [i_5 + 1]))))))));
                var_21 = 255;
                var_22 = 0;
            }
        }
    }
    var_23 = (((~var_14) <= var_1));
    var_24 = var_3;
    #pragma endscop
}
