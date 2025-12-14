/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (~var_11);

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        var_15 = (min(var_15, ((((arr_10 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 2]) != (arr_10 [i_2] [i_2] [i_2] [i_2]))))));
                        var_16 = (min(var_16, ((-(arr_3 [6] [i_0 + 2])))));
                    }
                    var_17 = (min(var_17, ((((arr_2 [4]) != ((1 ? (arr_2 [4]) : (arr_2 [2]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_18 = (max((0 & 1), (((~(var_11 && var_6))))));
                            var_19 = (min(var_19, (((((((((arr_2 [i_7]) ? 1 : (arr_2 [i_7]))) >> (((~var_9) + 7))))) ? ((((min((arr_15 [i_4]), var_7))) ? (arr_16 [i_6] [i_6 + 2] [i_6]) : var_9)) : (arr_5 [i_4]))))));
                            arr_20 [i_7 - 2] [16] = 1;
                        }
                    }
                }
                var_20 = ((var_8 ? ((var_9 ? (arr_1 [i_5] [i_4]) : 3916192953)) : (((((((arr_10 [6] [i_5] [i_5] [i_4]) ? var_11 : -5352))) ? (arr_6 [12] [i_5] [i_4] [16]) : (((arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) - var_1)))))));
            }
        }
    }
    #pragma endscop
}
