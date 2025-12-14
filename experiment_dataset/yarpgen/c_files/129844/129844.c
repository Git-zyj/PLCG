/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = ((~(((-2147483647 - 1) ? 120 : 140737488355327))));
                    var_13 = (min((max(32767, 34359738367)), 47161));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [14] [10] [1] [1] [6] |= ((max(18446744073709551615, var_8)));
                                var_14 ^= 4294967295;
                                var_15 ^= (min(-var_8, (min(var_7, var_9))));
                                var_16 = (max(var_16, (((-111 ? (max(140737488355327, (~4623))) : ((min(((min(var_3, -20205))), var_3))))))));
                            }
                        }
                    }
                    arr_15 [4] [1] = ((!var_11) ? (max(var_11, var_1)) : ((max(var_10, var_0))));
                    arr_16 [10] [1] [1] [18] = (max(-var_10, (-32767 - 1)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_17 = 0;
                                arr_29 [16] [11] = (max(88, 21304));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_35 [3] [9] = ((255 ? var_0 : ((min(((-5732 ? var_9 : var_3)), var_3)))));
                                var_18 ^= ((41337 ? (~13415333244795145539) : ((min(1248, ((-6231 ? var_9 : var_11)))))));
                                var_19 = (max((max(var_5, (((var_2 ? var_7 : -24))))), (max(var_0, (max(var_5, var_4))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_20 ^= var_3;
                                var_21 = (min(var_21, var_3));
                            }
                        }
                    }

                    for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        arr_44 [3] [0] [12] [8] [1] = ((!(((32767 ? var_9 : var_4)))));
                        var_22 ^= 1;
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        arr_48 [8] [18] [11] = ((var_7 ? ((var_1 ? var_0 : var_7)) : 244616295));
                        arr_49 [12] [10] [8] [8] = 41587;
                        arr_50 [8] [12] [10] [23] [4] [12] = 1;
                    }
                }
            }
        }
        arr_51 [0] = (~-3182585018560583462);
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 21;i_15 += 1) /* same iter space */
    {
        var_23 = -var_2;
        arr_55 [1] = (~var_7);
        var_24 ^= 14042301629285808659;
    }
    for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
    {
        var_25 ^= var_7;
        var_26 |= 1496512187;
        arr_58 [18] = ((!((max(var_4, var_6)))));
        arr_59 [7] = (min(242, (max(var_6, -4404442444423742957))));
        var_27 = (~var_10);
    }
    var_28 = (min(var_28, var_0));
    #pragma endscop
}
