/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((((((var_7 ? var_11 : var_4))) ? var_4 : (max(var_11, var_0))))) ? ((max(((max(var_3, var_6))), ((var_5 ? var_0 : var_0))))) : (max(var_4, var_14)))))));
                                var_16 = (max(var_16, ((((max((max(1, var_8)), (min(2301430412037724022, 17164664295115862945))))) ? (((((var_8 ? var_1 : var_5))) ? ((var_7 ? var_8 : var_5)) : (((var_14 ? var_5 : var_9))))) : ((((max(var_6, var_9))) ? (max(var_11, var_3)) : ((var_3 ? var_4 : var_1))))))));
                            }
                        }
                    }
                    var_17 = min((min(((var_12 ? var_8 : var_0)), ((var_7 ? var_4 : var_4)))), (((((var_2 ? var_14 : var_13))) ? ((var_8 ? 1 : var_14)) : var_8)));

                    for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, (((((var_8 ? ((var_14 ? var_12 : var_0)) : (((max(var_5, var_1))))))) ? (max((((var_14 ? var_9 : var_5))), (min(8066404693718404593, 8088699664775820197)))) : var_10))));
                        var_19 &= (((((var_9 ? ((var_12 ? var_6 : var_12)) : (max(var_5, var_11))))) ? var_14 : (min((min(var_6, var_13)), var_3))));
                        arr_14 [i_5] = (((max(var_9, ((var_1 ? var_1 : var_8))))) ? (((max((max(var_3, var_2)), var_9)))) : (min(((var_3 ? var_12 : var_14)), ((var_5 ? var_0 : var_13)))));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_17 [i_0] [i_1 - 1] [i_2] [i_5] [i_5] [i_6] = var_4;
                            arr_18 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6] = var_13;
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            var_20 |= (((((var_1 ? var_5 : var_0))) ? ((var_3 ? var_4 : var_1)) : (((var_3 ? var_6 : var_5)))));
                            arr_24 [i_0] [i_1] [i_8] [4] [i_2] [i_2 - 1] [1] = var_4;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_27 [i_0] [i_9] [9] [i_7 + 3] [i_7] [i_0 + 1] = ((((var_9 ? var_2 : var_10))) ? ((var_7 ? var_10 : var_1)) : (((var_11 ? var_6 : var_7))));
                            var_21 = (min(var_21, (((1 ? 158 : 8066404693718404593)))));
                        }
                        var_22 = (((((var_3 ? var_9 : var_6))) ? var_9 : var_7));
                    }
                }
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    var_23 = (max(var_14, ((var_9 ? var_14 : (min(var_8, var_11))))));
                    var_24 = ((((((((var_8 ? var_9 : var_6))) ? (max(var_6, var_11)) : var_8))) ? (max(var_1, (min(var_1, var_8)))) : (min(var_0, ((var_9 ? var_4 : var_10))))));
                }

                /* vectorizable */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    var_25 ^= (((((var_9 ? var_8 : var_0))) ? var_4 : ((var_1 ? var_14 : var_5))));
                    var_26 = (max(var_26, ((((((var_12 ? var_0 : var_14))) ? ((var_8 ? var_9 : var_6)) : ((var_9 ? var_3 : var_5)))))));
                    var_27 = var_7;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            {
                var_28 = (min(var_10, ((max(((min(var_1, var_5))), (max(var_9, var_3)))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_29 &= (max((((((var_11 ? var_0 : var_2))) ? ((17164664295115862930 ? 0 : var_9)) : var_1)), var_2));
                            var_30 = max(((((max(var_12, var_4))) ? ((var_10 ? var_12 : var_2)) : (max(var_4, var_4)))), ((max(1, 118))));
                            var_31 = (max(var_31, ((var_7 ? (max(((var_7 ? var_2 : var_14)), (max(var_1, var_11)))) : (max(var_0, ((var_9 ? var_14 : var_2))))))));
                            var_32 = (min(var_32, ((((max((max(1, var_9)), (max(1, var_2))))) ? 95 : var_14))));
                        }
                    }
                }
            }
        }
    }
    var_33 = (((((((var_12 ? var_11 : var_11))) ? (((var_3 ? var_0 : var_1))) : ((var_2 ? var_4 : var_10))))) ? var_1 : var_14);
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            {

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        var_34 = (max(var_6, (min(var_3, ((var_3 ? var_6 : var_12))))));

                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            var_35 -= (((((var_10 ? var_3 : var_9))) ? var_7 : ((var_7 ? var_13 : var_6))));
                            arr_56 [i_16] [i_17] [i_18] [i_17] = (var_13 ? var_2 : var_4);
                            var_36 = ((var_7 ? var_5 : var_14));
                        }
                        var_37 = ((((max((max(var_13, var_0)), var_7))) ? ((((max(var_9, var_12))) ? var_14 : ((var_13 ? var_5 : var_14)))) : var_9));
                    }
                    for (int i_21 = 2; i_21 < 10;i_21 += 1)
                    {
                        arr_59 [i_17] [i_17] [i_18] [i_21 + 4] = (var_1 ? var_9 : (max(var_8, var_4)));

                        for (int i_22 = 0; i_22 < 14;i_22 += 1)
                        {
                            var_38 = var_4;
                            var_39 = max((max((((var_1 ? var_3 : var_0))), var_14)), ((var_14 ? (max(var_10, var_2)) : (((max(1, 1)))))));
                            var_40 = (max(var_40, var_3));
                        }
                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            var_41 = max((max((min(var_14, var_8)), (((var_3 ? var_1 : var_9))))), (max(var_1, (max(17164664295115862923, 1)))));
                            var_42 = (max((((((var_9 ? var_5 : var_4))) ? var_13 : (((var_10 ? var_3 : var_0))))), (((var_1 ? ((var_2 ? var_2 : var_5)) : ((max(var_7, var_0))))))));
                        }
                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 0;i_24 += 1)
                        {
                            var_43 = (((((var_0 ? var_11 : var_13))) ? var_1 : 1282079778593688721));
                            var_44 += ((var_2 ? var_4 : (((var_7 ? var_9 : var_5)))));
                            arr_69 [i_17] [i_17] = (((((var_2 ? var_8 : var_13))) ? var_4 : var_1));
                        }
                        arr_70 [i_16] [i_17] [i_17] [i_18] [i_21] = (max((max((max(var_14, var_7)), (min(var_12, var_7)))), var_7));
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 14;i_25 += 1)
                    {
                        for (int i_26 = 1; i_26 < 12;i_26 += 1)
                        {
                            {
                                var_45 = (max(((((max(var_5, var_14))) ? (max(var_12, var_2)) : (max(var_4, var_12)))), (max(((var_11 ? var_13 : var_14)), ((min(var_1, var_5)))))));
                                arr_75 [i_17] [i_25] [i_18] [i_17] = (min((((((var_12 ? var_10 : var_6))) ? var_1 : ((var_10 ? var_12 : var_0)))), (((17164664295115862904 ? -931041908101333045 : 32767)))));
                                arr_76 [1] [i_26 + 2] [i_26] [0] [i_17] = ((((min(((var_1 ? var_2 : var_10)), ((var_9 ? var_14 : var_13))))) ? var_12 : (((((var_13 ? var_13 : var_5))) ? (max(var_10, var_1)) : var_1))));
                                var_46 = (max(var_46, ((max(((var_6 ? var_3 : ((var_0 ? var_0 : var_11)))), ((max(((min(var_5, var_0))), ((var_2 ? var_7 : var_6))))))))));
                                var_47 = (min(((((max(var_6, var_12))) ? ((var_8 ? var_5 : var_14)) : var_14)), ((((max(var_2, var_12))) ? var_13 : (((max(var_1, var_2))))))));
                            }
                        }
                    }

                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        arr_79 [i_27] [i_17] [11] = var_11;
                        var_48 = max(((var_7 ? (min(var_12, var_6)) : ((var_9 ? 0 : 126)))), var_3);
                    }
                }
                /* LoopNest 3 */
                for (int i_28 = 0; i_28 < 14;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 14;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 14;i_30 += 1)
                        {
                            {
                                arr_87 [i_16] [i_17] [i_17] [1] [4] [i_30] = min(((((max(var_14, var_2))) ? var_14 : var_14)), var_2);
                                var_49 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
