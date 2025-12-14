/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 245;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = var_1;
                    var_13 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = 125;
                                arr_15 [6] [i_0] [6] [i_0] [i_4] = (((arr_3 [i_4] [i_3]) ^ var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            {
                arr_22 [i_5 - 1] [i_6] = 1495369616;
                var_14 = ((min((max(152, -7163676168714065341), (14832 / var_6)))));
                arr_23 [i_5] |= ((!(arr_6 [i_5] [i_5] [2])));
            }
        }
    }

    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        arr_27 [i_7 + 2] = (715537183 ^ 14842);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_15 = ((~(max(-35850655687513544, (arr_25 [i_8 + 1])))));
                        var_16 = (max(var_16, var_1));
                        arr_35 [i_7] [i_7] [i_7] [i_7] = (128 != 11789);
                        arr_36 [i_7] [i_10] = (-127 - 1);
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_17 = 106;
                        arr_41 [i_11] [i_7] [i_9] [i_7] [i_7] &= (((1 & (arr_38 [i_8] [i_9]))));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_12] [i_9] &= (min(var_1, (max((arr_29 [i_12]), var_1))));
                        var_18 &= (max((arr_28 [i_7 + 2]), var_10));
                    }
                    arr_45 [i_7 + 3] [i_8] = ((35 << ((((var_7 ? (arr_29 [i_7 + 1]) : -1495369616)) - 13547))));
                }
            }
        }
        var_19 = -5;
        var_20 |= -122;
        arr_46 [i_7] = ((95 != (!var_4)));
    }
    #pragma endscop
}
