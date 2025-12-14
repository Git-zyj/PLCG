/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_4);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_14 = -11696;
            arr_5 [i_0] = ((106107233 + (arr_0 [i_1 - 1])));
        }
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            var_15 = (min((arr_3 [i_2 + 2] [i_0]), (106107237 | 106107216)));
            var_16 -= 32767;
            var_17 = ((((((arr_0 [i_2 + 1]) + (arr_4 [i_0 + 1] [i_0 - 2])))) ? 0 : (arr_3 [i_0 - 1] [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_18 = ((((min(var_5, (arr_14 [i_4 + 1])))) ? 106107233 : 1));
                            var_19 = (arr_3 [i_3] [i_3]);
                            arr_18 [i_5] [i_4] [i_0] [i_2] [i_0] = ((-(max((((-(arr_13 [i_0] [i_2] [i_3] [i_3] [i_5])))), (arr_6 [i_4 + 2] [i_2 - 2])))));
                            var_20 = ((var_12 ? (((arr_7 [i_2 + 2] [i_4 - 2]) ? (arr_7 [i_2 + 2] [i_4 - 2]) : var_1)) : (((-(arr_7 [i_2 - 4] [i_4 - 2]))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_21 = 128;
                            var_22 = ((arr_1 [i_0 + 1]) / var_12);
                            var_23 = (((arr_15 [i_0 - 2] [i_2 - 4] [i_2 - 4] [i_4 - 1]) / var_8));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_24 = 1;
                            var_25 = ((+(((arr_7 [i_0] [15]) ? -16 : ((var_0 ? var_11 : -22389))))));
                        }
                        var_26 -= ((arr_14 [i_0 - 2]) ? (arr_3 [i_0] [i_0]) : ((((((var_1 ? (arr_10 [i_0] [i_2] [i_3] [i_4]) : 0))) ? (((~(arr_8 [i_0] [i_2] [i_2])))) : ((var_12 ? var_8 : var_8))))));

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_27 |= (arr_23 [14] [14] [14] [i_4 + 1] [i_8]);
                            arr_25 [i_3] [8] [i_3] [i_2] [i_0] = var_2;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_28 = var_5;
                            var_29 = ((var_5 ? var_11 : var_12));
                            var_30 = (max(var_30, (arr_1 [i_9])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_31 = (-(arr_0 [i_4 - 1]));
                            var_32 = var_0;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_33 = ((((arr_21 [i_0] [i_0] [i_3] [i_4 + 1] [i_11] [i_3]) + (arr_30 [i_4] [i_2] [i_4 + 2] [i_0] [i_2] [i_0]))));
                            var_34 = (min((((255 / (arr_27 [18] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])))), (((((var_3 ? var_6 : var_5))) / (arr_15 [i_0] [i_0] [i_0] [i_0])))));
                            var_35 = 21463;
                        }
                    }
                }
            }
        }
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            var_36 = (max(var_36, (arr_17 [i_0] [i_12] [i_12] [i_0 - 2] [i_12])));
            var_37 = ((((max(((var_8 / (arr_31 [1] [1] [i_12]))), 9223372036854775784))) ? var_10 : (arr_10 [i_0] [i_12 - 1] [i_12 - 1] [i_12])));
        }
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            var_38 ^= (((!((var_10 || (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_39 = var_4;
        }
        var_40 = ((-29762 ? var_6 : (max(var_8, 6))));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {

        for (int i_15 = 2; i_15 < 19;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                var_41 = (((arr_42 [i_14]) ? var_6 : 1));

                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_42 *= ((((var_7 ? var_7 : var_5)) <= (((arr_41 [i_14]) ? var_11 : -23))));

                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        var_43 = (arr_43 [i_14] [i_14] [i_14]);
                        arr_55 [i_18] [i_14] [i_15] [i_15] [i_14] &= var_11;
                        arr_56 [i_17] [18] [i_17] [i_17] [i_18] = (arr_39 [i_15]);
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
                    {
                        var_44 = (max(var_44, var_5));
                        var_45 = (((arr_46 [i_15 + 4] [i_15 + 2] [i_15 - 1] [i_15 - 2]) | (arr_46 [i_15 + 4] [i_15 - 2] [i_15 + 1] [i_15 + 2])));
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
                    {
                        var_46 += var_11;
                        var_47 = (-32767 - 1);
                        var_48 = (max(var_48, var_0));
                        var_49 = (((21 / 1) ? (var_5 / var_6) : var_4));
                        arr_65 [i_17] [i_20] = var_2;
                    }
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        var_50 = -1;
                        var_51 |= 32756;
                    }
                }
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                arr_71 [i_22] [i_15 + 3] [i_15 + 3] [i_22] = (((max(1, (((arr_61 [i_14] [i_22] [i_22] [i_22] [i_15] [i_22] [i_14]) + (arr_61 [i_14] [i_22] [i_14] [i_14] [i_22] [1] [i_14]))))) + (var_0 - 229)));
                var_52 = (min(var_52, ((((-(arr_40 [i_15] [i_15 - 2])))))));
                var_53 = var_10;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 23;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_54 = (min(var_54, var_2));
                            arr_76 [i_22] [i_15] = -var_7;
                            var_55 = (max(((!(arr_62 [i_14] [i_15 - 1] [i_22] [i_15 - 1] [i_15 - 1] [i_24]))), var_3));
                            arr_77 [6] [i_22] = var_0;
                        }
                    }
                }
            }
            var_56 = (min(var_56, (((~((max((arr_75 [i_15 + 2] [i_15 - 1] [i_15 + 4] [i_15 - 1] [i_15]), var_5))))))));
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 23;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 23;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 23;i_27 += 1)
                    {
                        {
                            var_57 = (arr_45 [i_15] [i_15 - 2] [i_15 - 2] [i_15 - 2]);
                            var_58 = var_4;
                        }
                    }
                }
            }
            var_59 = var_11;
        }
        for (int i_28 = 2; i_28 < 21;i_28 += 1)
        {
            var_60 = (arr_59 [i_28] [i_28]);
            arr_88 [i_14] [i_14] [15] = ((((((arr_84 [i_28 - 1] [i_28 - 2] [i_28 - 2] [i_28 + 2] [i_28 + 2]) + var_7))) ? 78261743 : ((((arr_74 [2] [i_28 + 2] [i_28 + 1] [i_28 + 1] [i_28 + 1] [i_28 + 1] [i_28 + 1]) ? 0 : 230)))));
            arr_89 [i_14] = (arr_41 [i_14]);
            var_61 *= ((-127 ^ ((2275769757 ? (arr_49 [i_28] [i_28 - 2] [i_28 - 2] [i_28 - 1]) : (((arr_50 [1] [i_28] [i_14] [i_14]) ? var_6 : var_0))))));
            var_62 = ((((((arr_87 [i_14]) ? (((-27069 + 2147483647) >> (22391 - 22381))) : var_5))) ? (((var_12 >> (((arr_79 [i_14] [i_14]) - 3166890535319305737))))) : ((((arr_42 [i_28 + 2]) ? -25646 : (arr_42 [i_28 - 2]))))));
        }
        arr_90 [i_14] = (((var_4 / -var_11) ? var_2 : (min((arr_52 [i_14] [i_14] [i_14] [i_14]), var_10))));
    }
    #pragma endscop
}
