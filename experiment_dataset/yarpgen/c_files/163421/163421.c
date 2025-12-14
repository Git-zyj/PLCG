/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((((((var_15 ? (arr_2 [i_0 - 1]) : var_6))) ? (arr_2 [i_0 + 2]) : (arr_5 [i_0] [i_0 + 1] [i_2] [i_2]))));
                    var_20 = (var_10 ? ((((!(((-5942818337073024322 ? 24551 : var_5))))))) : (~10529382284578618116));
                }
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0 + 1] [i_0] = (arr_8 [i_0] [i_0] [i_0]);

                    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_21 = ((((((arr_13 [i_4 + 1] [i_3] [i_1] [i_0 - 2]) ? (arr_5 [i_4] [i_1] [i_1] [i_0]) : var_2))) ? var_10 : (var_6 | var_7)));
                        arr_14 [i_0 - 1] = (!2129160160);
                        var_22 = ((1154655488 ? 65528 : -1761434318));
                        var_23 = (min(((112 ? (min(-1, 65534)) : (30677 || 27094))), var_5));
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0 - 2] = var_11;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_6] [i_1] [i_3 - 1] [i_5] [i_6] = -32;
                            arr_22 [i_3] [i_0 - 2] [i_3] [i_1] [i_0 - 2] = ((~((~((((arr_6 [i_0] [i_3] [i_6]) > 1098437885952)))))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_24 = ((((max(var_2, 549755813760))) ? (!var_12) : var_16));
                            var_25 = (var_16 & var_19);
                        }
                        var_26 ^= (!42);
                    }
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        var_27 = (12503636898345024603 ^ 2616992963);
                        var_28 = -0;
                    }

                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_29 = ((((max(-var_0, var_11))) ? var_9 : ((var_13 ? var_2 : var_14))));
                            var_30 *= (arr_19 [i_9] [i_1] [i_3 - 2] [i_0 - 2]);
                            arr_36 [i_0] [i_1] [i_3 - 2] [i_9 + 1] [i_10] = var_12;
                            var_31 = 19022;
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            arr_39 [i_11] [i_9 - 1] [i_1] = (!8494362167789476593);
                            var_32 = var_3;
                            arr_40 [i_11] [i_9 + 2] [i_9] [i_3 + 1] [i_3] [i_1] [i_0] = ((1184584072 ? 234881024 : 32767));
                            arr_41 [i_0 + 1] [i_9 - 1] [i_3] [i_9] [13] [13] &= var_5;
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_33 = (var_3 - var_15);
                            var_34 += 0;
                            arr_44 [i_0] [6] [i_3] [i_9 + 1] [6] = (max(39064, (((!(!var_9))))));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            var_35 = (max(var_35, (((((max(127, (arr_10 [i_0 + 1] [i_1] [i_0 + 1]))))) | (min((min(-7573920320119277015, -5790013724842030767)), ((((var_12 + 2147483647) << (56987 - 56987))))))))));
                            arr_49 [i_13] [i_13] [i_13] [i_13] = (-9223372036854775807 - 1);
                            var_36 = ((((min((-32760 / var_2), (arr_30 [i_0 - 2] [i_1] [i_3] [i_13])))) ? (arr_0 [i_9 + 2]) : (((var_12 ? var_0 : (arr_35 [i_0 + 2] [i_9 - 1]))))));
                        }
                        arr_50 [i_1] [i_3] [i_9 + 1] = (min((max((-7813862085385846741 / 1744241416), var_13)), (arr_32 [i_9] [i_0 - 1] [i_3 - 2] [i_1] [i_0 - 1] [i_0 - 1])));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        var_37 = 4445310046631187641;
                        arr_54 [i_0 + 2] [i_1] [i_1] [i_3] [i_3] [i_3] = -16571895852149077;
                        var_38 = (((-(arr_23 [i_0] [i_0] [i_1] [i_3] [10]))));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_57 [i_15] = (arr_0 [i_15]);
                            var_39 = var_4;
                            arr_58 [i_3 + 1] [i_15] [i_3] [i_14] = -var_8;
                        }
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            var_40 = var_10;
                            arr_62 [12] = 64390;
                        }
                        for (int i_17 = 2; i_17 < 21;i_17 += 1)
                        {
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((!(arr_47 [i_0 + 2] [i_3] [i_3] [i_14] [i_17] [i_3])));
                            var_41 = var_4;
                            arr_66 [i_0] [5] [i_3] [6] [1] = 115;
                            arr_67 [i_0] [i_1] [i_3 - 2] [i_14] [i_17 - 2] = (max(1, (arr_0 [i_17])));
                        }
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {
                        var_42 = (arr_16 [i_3 - 1] [i_3 - 2] [i_0 - 1] [i_0 - 2]);
                        var_43 |= 0;
                    }
                    var_44 = (min(var_44, var_18));
                }
                arr_70 [i_0] [i_1] [i_0] = -23943;
            }
        }
    }
    var_45 = ((1902255182 ? var_4 : 12288));
    var_46 = var_12;
    var_47 = var_12;
    var_48 = (min((max((((var_8 ? 199638685 : var_18))), (max(var_10, var_15)))), (min(var_6, var_16))));
    #pragma endscop
}
