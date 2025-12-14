/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = ((10189878873566839988 ? (!var_8) : ((var_1 ? var_8 : var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 ^= (((((max((-9223372036854775807 - 1), 1))) ? 1 : (arr_10 [i_2 - 1] [7] [13]))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_21 = 1;
                            var_22 = (((((((min(var_14, (arr_8 [i_4])))) ? (max(var_2, (arr_16 [i_4] [i_3] [3] [10] [i_0]))) : 6325))) ? (~var_4) : (((min(var_14, 4262))))));
                        }
                        var_23 -= (min(((829377757 ? var_7 : ((max(var_17, var_0))))), var_9));
                        var_24 = 471010633;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_25 = (arr_7 [i_0] [i_0] [i_0]);

                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_26 = -511;
                            var_27 -= 7119678678842452225;
                        }

                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_28 += (arr_20 [i_1 + 1] [i_2 - 2]);
                            var_29 = (arr_22 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1]);
                            var_30 -= 2933604410272224792;
                            var_31 = (((((-(arr_15 [i_5] [i_5] [i_2] [i_5] [16])))) ? ((var_12 ? (arr_0 [2] [i_1]) : var_9)) : (arr_7 [i_0] [i_2 + 2] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_32 = (arr_6 [i_0] [i_1 - 1] [i_2 - 2]);
                            var_33 = 518876492;
                            var_34 = (min(var_34, 9233761992317826794));
                        }
                        var_35 = (arr_5 [i_2] [i_0]);
                        var_36 = var_13;
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_37 = (max(var_7, (arr_15 [i_9] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_9])));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_38 = (arr_1 [14]);
                            var_39 = ((-((~(arr_7 [i_0] [15] [i_10])))));
                            var_40 = (arr_18 [i_9]);
                        }

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_41 = ((min(32512, (arr_15 [i_9] [1] [i_2 + 1] [i_2] [i_2]))));
                            var_42 = var_3;
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_43 += 63310;
                            var_44 = (min(var_44, (max((arr_23 [i_2 - 1] [i_2] [8] [i_12] [i_12]), (((-853892503 ? var_12 : 58962)))))));
                        }

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_45 = (min(var_45, var_6));
                            var_46 = 1;
                            var_47 = (max(var_47, (((~(arr_9 [i_2 - 1] [i_1 - 1]))))));
                        }
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_48 = var_0;
                            var_49 -= 28675;
                            var_50 |= var_14;
                        }
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_51 = ((((max(((((arr_32 [i_0] [i_2] [9]) ? -14016 : 9))), 3940649673949184))) ? (arr_20 [i_0] [i_1]) : var_3));
                            var_52 = ((max(-27944, 138)));
                            var_53 += var_6;
                        }
                        var_54 = (((arr_48 [i_0] [1] [4] [14]) ? ((((arr_14 [i_2 - 2] [i_1 - 1] [i_1] [i_15] [i_1]) ? (arr_14 [i_2 - 2] [i_1 - 1] [0] [i_15] [0]) : 4))) : 12341673166781750836));
                        var_55 = (arr_44 [i_0]);
                        var_56 += var_7;
                    }
                    var_57 += (arr_4 [2]);
                    var_58 -= (min((arr_7 [16] [i_1 + 1] [i_0]), var_14));
                    var_59 = 607566645;
                }
            }
        }
    }
    #pragma endscop
}
