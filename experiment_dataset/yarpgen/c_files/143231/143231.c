/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))));
        var_10 = var_0;
        var_11 ^= ((((min((arr_0 [1]), (arr_2 [16]))))) != var_1);
        arr_4 [i_0] = (1 < 62634);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = -5310319656219260100;
                        arr_14 [i_0] [i_2] [i_2] = var_0;
                        var_13 = (max((((var_5 || (arr_11 [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_2 + 1])))), var_8));
                        var_14 = ((((arr_9 [i_1 + 1]) % 1)));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [16] [i_0] [i_0] = 1;
                        arr_19 [i_0] [i_1] [i_0] [i_0] = ((var_5 & (1 && 83)));
                        var_15 = (((((((arr_5 [i_0] [i_0] [i_2 - 1]) <= (max(var_1, var_4)))))) < var_8));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (((~(((arr_0 [i_1 + 1]) | (arr_0 [i_1 + 1]))))))));
                        arr_22 [i_0] [i_1 - 1] [i_0] = (var_6 != var_2);
                        arr_23 [i_0] [8] [i_2] = var_7;
                        var_17 = var_9;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] = (arr_15 [2] [2]);
                        arr_27 [i_0] [i_2 - 1] [i_6] = ((~(arr_8 [i_1 + 1] [i_1 + 1] [i_2])));
                    }
                    var_18 = 3410433359210414253;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] = (min((((arr_31 [i_7]) ^ 2909)), ((min((arr_30 [i_7]), (arr_30 [i_7]))))));
        arr_33 [i_7] [i_7] = (((((var_5 / var_5) || ((var_6 < (arr_29 [i_7] [i_7]))))) ? (arr_31 [i_7]) : var_7));
        arr_34 [i_7] = ((+(((arr_29 [i_7] [i_7]) ^ var_3))));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_19 = (min(var_19, ((min((((-87 == 24578) / (62627 | 1223679766))), var_3)))));
            var_20 = (arr_36 [i_7] [i_8] [i_8]);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            var_21 -= var_9;
            arr_39 [i_7] [0] = var_0;
            arr_40 [i_7] [i_9] = var_4;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((((arr_29 [i_10] [i_7]) ? (var_2 * 1) : (arr_29 [i_7] [i_10]))))));

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_47 [i_7] [i_7] [i_11] = (((((-(arr_44 [i_11] [i_11] [i_10] [i_7])))) ? ((var_3 ? var_9 : var_6)) : var_1));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_23 = var_4;
                            var_24 *= var_2;
                            arr_56 [i_7] [i_10] [i_10] [i_7] [i_13] = (((arr_38 [i_10]) | 48));
                            var_25 = (((arr_42 [i_12 - 1]) * (arr_42 [i_12 + 1])));
                            arr_57 [i_7] [i_7] [i_7] [i_11] [i_12 + 2] [i_13] [i_7] = (((var_9 < 24678) && (arr_44 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12 + 2])));
                        }
                    }
                }
                var_26 = arr_49 [i_11] [i_11] [13] [13];

                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    var_27 = (min(var_27, 1));
                    var_28 = 82;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_29 = (max(var_29, ((((arr_29 [i_11] [i_15]) * -1)))));
                    var_30 = (arr_31 [i_11]);
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    arr_65 [i_7] = 18014261070528512;
                    var_31 = (arr_37 [i_7] [i_7] [i_7]);
                    var_32 = (!var_2);
                }
            }
            for (int i_17 = 1; i_17 < 21;i_17 += 1)
            {
                var_33 = (((arr_60 [i_7] [3] [i_17 + 1] [i_17 + 1] [i_7]) ? (arr_60 [i_7] [1] [i_17 + 1] [i_17 + 1] [i_7]) : var_3));
                var_34 = (min(var_34, (~68)));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                arr_72 [i_7] = var_5;
                arr_73 [i_7] [i_7] [i_7] = (!var_2);
            }
            for (int i_19 = 3; i_19 < 20;i_19 += 1)
            {
                var_35 = ((arr_60 [i_19 - 3] [i_10] [i_19] [i_7] [i_7]) * (!var_7));
                arr_76 [i_19] [i_19 + 1] [i_7] = (2909 || 4561);
                var_36 = (((((arr_53 [i_7] [i_19 + 2] [9] [i_19] [i_7] [i_7]) + 2147483647)) >> (((arr_53 [i_7] [i_19 + 1] [i_7] [i_10] [1] [i_19]) + 62))));
                var_37 ^= var_8;
                var_38 = (~var_5);
            }
        }
        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            var_39 = ((var_5 <= ((-13530 ? ((var_9 ? (arr_43 [i_7] [i_7] [i_7] [i_7]) : 1)) : 1))));
            var_40 |= (((80 / (arr_64 [i_7] [i_7] [i_20] [i_7] [2]))));
        }
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
    {
        var_41 = (86 * -4096);

        for (int i_22 = 1; i_22 < 1;i_22 += 1)
        {
            var_42 = (min(var_42, (arr_70 [1] [1] [i_21] [i_22])));
            var_43 = (min(var_43, 1));
            arr_83 [i_22] = (arr_62 [i_22 - 1] [9] [i_22] [11]);
            arr_84 [i_22] [i_22 - 1] [i_22 - 1] = (arr_66 [i_22 - 1] [i_22] [i_22 - 1] [12]);
            arr_85 [i_21] [i_22] = (((arr_37 [i_21] [i_22] [i_21]) || ((1 <= (arr_35 [1])))));
        }
    }
    var_44 ^= (((max(var_3, (min(1, 1)))) || var_6));
    var_45 *= -32;
    #pragma endscop
}
