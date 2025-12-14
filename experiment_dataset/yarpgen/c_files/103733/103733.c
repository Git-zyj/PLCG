/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        var_14 = (max(var_14, (8 | 127)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [1] [i_2] = ((((((!var_9) || ((max((arr_6 [i_0]), var_0)))))) & (arr_0 [i_1] [i_0])));
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (max((max((((arr_3 [i_0] [i_0]) + (arr_10 [i_0]))), (arr_1 [i_0]))), (18 - 4294967282)));
                    }
                }
            }
        }
        var_15 -= (arr_5 [i_0]);
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_18 [17] [i_4] = 13;
        arr_19 [i_4 + 1] = 12687382976064248109;
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] = (4294967285 * 4294967280);
                                var_16 = (min(var_16, (max(var_3, (max((var_8 ^ -7652709006923060874), var_13))))));
                                arr_34 [i_5] [5] [i_7] [i_6] [i_5] = ((-1280891783 ? (min(var_7, (arr_29 [3] [3] [i_7 - 1] [i_8]))) : ((max(6097, 7652709006923060886)))));
                            }
                        }
                    }
                    var_17 = (max((arr_22 [22] [i_6]), ((255 ? 169 : -2147483642))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_40 [5] [i_6] [5] [i_10] [i_11 + 1] [i_5] = (16836 ? 4294967295 : 59);
                                arr_41 [i_5] [i_5] = (arr_27 [i_10] [i_7 + 1] [i_6] [i_5 + 2]);
                                var_18 = arr_36 [i_6];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                arr_47 [13] [i_7] [i_5] = (arr_36 [i_7]);
                                var_19 = ((((((arr_35 [i_5 + 1] [i_5 - 1] [i_13] [i_13] [i_13] [i_13]) - (arr_35 [6] [i_5 - 1] [i_13] [i_5 - 1] [i_13] [i_13])))) ? (arr_35 [i_5 + 2] [i_5 - 1] [i_6] [i_5 + 2] [i_5 + 2] [i_5 + 2]) : (((max((arr_43 [20] [i_5 - 1] [i_13] [i_5] [i_13]), (arr_27 [i_5 + 2] [i_5 + 2] [i_7] [i_12])))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_20 = ((!((((arr_42 [i_5] [i_14] [i_5] [i_14]) | (arr_24 [i_14] [i_5 + 1]))))));
            var_21 ^= (max(227, 8419130463992389583));
            arr_50 [i_5] [i_5] = (var_1 ? ((((((-(arr_37 [i_5] [i_5 + 2] [i_5]))) == ((((arr_17 [8] [8]) ? var_1 : var_0))))))) : (max(var_6, (arr_46 [i_5] [i_5] [i_5] [i_14]))));
            arr_51 [2] |= max(-2372458710207591091, 315091032);
        }
        arr_52 [i_5] = (max((~4432197463265328450), (-29 && 48)));
    }
    var_22 ^= (((-5067621130433134232 | 4294967294) != var_6));
    var_23 = (var_11 || var_12);
    var_24 = var_5;
    #pragma endscop
}
