/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = 0;
                arr_7 [i_0] [i_0] [i_0 - 1] = 3705638895148186158;
                var_17 = 1955467721;
            }
        }
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_18 *= 1955467721;
        var_19 = 1;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_2 + 2] [i_6] [i_5 - 2] [i_6 - 1] [i_3] = 12486173883861509810;
                                var_20 = (max(var_20, 0));
                                var_21 -= 5960570189848041792;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            {
                                var_22 = 1;
                                var_23 = (min(var_23, 18446744073709551615));
                                var_24 = 1297909706;
                                arr_28 [i_2 - 1] [i_3 - 1] [i_3] [i_7] = 160;
                                var_25 = (min(var_25, 1));
                            }
                        }
                    }
                    arr_29 [i_2 + 2] [i_3 + 2] [i_3] = 11249676302129023543;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                {
                    var_26 = 73;
                    arr_39 [i_9 - 2] [i_10 + 3] [i_9] [i_10 + 2] = 73;
                }
            }
        }
        arr_40 [i_9] = 18446744073709551600;
        arr_41 [i_9] = 18446744073709551596;
        arr_42 [i_9] = 1;
    }
    #pragma endscop
}
