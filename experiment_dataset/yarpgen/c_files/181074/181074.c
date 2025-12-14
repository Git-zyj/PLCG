/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(0, 773099106));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min((min(-6256620235143923422, 1)), (((-((max(-712, 0)))))))))));

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0 + 1] [i_1] = max(((min(var_0, (min(-712, 711))))), (max(var_2, var_6)));
                    var_12 = ((-(min(var_7, var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] = (-(min(var_7, ((min(var_3, var_3))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = (max(((~(min(var_3, var_7)))), -var_9));
                                arr_15 [5] [5] [i_2 + 1] [i_3] [i_1] [i_3] [i_4] = (min((((max(var_8, var_3)))), ((min(-741, -3871)))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_13 ^= ((~(max(var_7, var_2))));
                    arr_20 [i_5] = -var_8;
                    var_14 = (min(var_14, var_0));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        arr_27 [i_0 + 1] [i_1] [i_6] [i_6] = (max((min(var_6, var_9)), ((max(var_8, var_8)))));
                        var_15 += (!-714);
                        arr_28 [i_0] [i_0] [i_1] [i_6] [i_6] [i_6] = (~(((!((max(var_5, var_6)))))));
                        var_16 = ((!((!((min(var_2, var_3)))))));
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        var_17 = (min(var_17, (((-(max(var_1, -var_3)))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_18 = (min(var_18, var_2));
                            var_19 = (min(var_19, -var_2));
                        }
                        arr_34 [i_0] [i_6] [6] [i_0] [i_0 - 1] = max((max(var_9, ((min(var_8, var_5))))), ((max(var_8, var_0))));

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_20 = max(-717, -707);
                            arr_38 [i_6] [i_6] [i_10] = (max(3855, 3871));
                        }
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        arr_41 [i_11] [i_6] [i_6] [i_0] = (min((min(var_5, (max(var_0, var_0)))), var_4));

                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            arr_45 [i_12] [i_12] [i_6] [i_6] [i_6] [i_1] [i_0] = max(var_5, (!717));
                            var_21 = (min(var_21, ((min((min(var_6, -var_3)), (min(var_2, var_9)))))));
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            arr_48 [i_0] [i_0] [i_0] [4] [i_6] [1] = (max(((min(-690, -741))), (max(var_2, (max(var_9, var_6))))));
                            arr_49 [i_0] [7] [10] [i_6] [i_0] = (min((min((~var_7), -var_8)), ((max(var_5, (min(var_5, var_9)))))));
                            arr_50 [i_13] [i_6] [i_6] [i_0] = (max(-var_8, (min(((max(var_3, var_5))), var_9))));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_54 [i_0] [i_0] [i_1] [i_0] [i_6] [i_14] [6] = (-(min((min(var_7, var_2)), ((min(var_3, var_5))))));
                            var_22 = (max(var_22, ((min((!var_9), -var_5)))));
                            var_23 = ((~(min(var_8, var_7))));
                        }
                        for (int i_15 = 0; i_15 < 0;i_15 += 1)
                        {
                            arr_57 [0] [0] [i_6] [8] [i_6] [0] [8] = var_1;
                            arr_58 [0] [i_1] [i_6] [i_6] [i_6] [i_6] &= (min((min(-var_2, ((max(var_5, var_3))))), (!var_5)));
                        }
                        arr_59 [i_1] [i_6] [i_6] [i_11] = (max(((max(var_2, var_0))), (max(var_9, var_1))));
                    }
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        arr_62 [i_0] [i_0 + 1] [i_0] [i_6] [4] = (min(-736, 741));
                        arr_63 [i_6] [i_1] [i_6] [i_16 - 1] = -3853;
                    }
                    var_24 += (max(((max((!618891483), (max(-715, -690))))), -var_8));
                    var_25 = (max(var_25, var_1));
                    arr_64 [i_6] [1] [i_6] [i_6] = var_8;
                }
                for (int i_17 = 2; i_17 < 9;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        arr_70 [i_1] [i_18] = (min((min(var_7, var_3)), (min(var_6, var_7))));
                        var_26 = (min(var_26, ((max(((max((max(var_4, var_8)), var_3))), var_2)))));
                        arr_71 [i_0 - 1] [i_0 - 1] [i_17] [i_0 - 1] [i_17] [i_18] = -var_6;
                    }
                    var_27 += (!((min(var_9, var_1))));

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_74 [i_0] [i_1] = (!var_1);
                        arr_75 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = (!var_0);
                    }
                }
                arr_76 [i_0] [10] = (~(max(-var_0, (!var_8))));

                for (int i_20 = 1; i_20 < 8;i_20 += 1)
                {
                    var_28 = (min(var_28, ((max((max(-731, 740)), (((!((min(var_2, var_1)))))))))));
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 10;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 7;i_22 += 1)
                        {
                            {
                                var_29 = (max(((-(max(var_7, var_8)))), ((max(var_6, var_2)))));
                                arr_84 [i_20] [i_20] = (max((max((min(var_1, var_7)), ((max(var_6, var_4))))), ((max((max(var_3, var_2)), var_2)))));
                                arr_85 [1] [i_1] [i_20] [i_21] [i_20] = ((!((min(-3871, 618891505)))));
                                arr_86 [i_20] [i_20] [i_20] [i_0] = var_1;
                            }
                        }
                    }
                }
                for (int i_23 = 2; i_23 < 10;i_23 += 1)
                {
                    var_30 *= var_3;
                    arr_91 [i_0 - 1] = var_2;
                    var_31 = (min((max(-3784498873530047380, -674)), (!4190653570369488826)));
                    arr_92 [i_0] [i_0] = max(var_2, (max(((min(var_6, var_2))), (min(var_1, var_2)))));
                }
                var_32 *= var_6;
            }
        }
    }
    #pragma endscop
}
