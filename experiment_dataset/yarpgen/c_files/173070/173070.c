/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_18 *= ((var_6 ? (((arr_0 [i_0 - 1]) / (arr_1 [i_0 + 1]))) : var_13));
        arr_2 [i_0] [i_0] |= -2147483647;
        var_19 += ((((max(1089872414, var_14)) + (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = 0;
            var_20 = (min(var_20, var_1));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_21 = ((~(arr_1 [i_2])));

            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_0 - 1]);
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_22 = ((!((!(arr_1 [i_3])))));
                            arr_20 [i_5] [i_4] [i_3 - 2] [i_2] [i_5] = (arr_6 [i_3] [i_0] [i_0]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_28 [i_2] [i_6] [i_8] = (arr_16 [i_8] [i_6] [i_6] [i_0]);
                            var_23 &= (((((arr_16 [i_0 - 1] [i_7] [i_0 + 1] [i_0 - 1]) + 2147483647)) >> (((arr_16 [i_0 - 1] [i_6] [i_0 + 1] [i_0]) + 45))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    {
                        var_24 = (min(var_24, (arr_19 [i_0] [i_2] [i_9 - 2] [i_9 - 2] [i_9 - 2])));
                        var_25 += (arr_23 [i_0] [i_2] [i_0] [i_10]);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                arr_41 [i_0] [i_11] [i_12] = ((((((arr_39 [i_0 - 1] [i_0 + 1] [i_0 + 1]) | var_13))) < (arr_23 [i_0] [i_11] [i_11] [i_11])));
                var_26 = (min(var_26, (~var_7)));
                var_27 ^= ((var_6 ? (arr_11 [i_0] [i_11] [i_12] [i_0]) : (min((arr_39 [i_0 - 1] [i_0] [i_0]), var_14))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_28 = (var_3 == -72);
                            arr_47 [i_0 - 1] [i_0 - 1] = (((min((arr_6 [i_14] [i_0] [i_0]), var_2))));
                            var_29 = (((min(30, (arr_0 [i_12])))));
                            var_30 = (min((((-((-(arr_31 [i_0] [i_11] [i_14])))))), (max((min(-12080, 16081683395409813975)), ((min(var_9, var_1)))))));
                        }
                    }
                }
                arr_48 [i_0 + 1] [i_0] [i_0] = (max(var_17, (((arr_24 [i_0] [i_11] [i_11] [i_12]) ? (arr_31 [i_0] [i_11] [i_12]) : (arr_30 [i_0 - 1])))));
            }
            for (int i_15 = 2; i_15 < 24;i_15 += 1)
            {
                arr_53 [i_15] [i_11] [i_0] = (min(54043195528445952, -1));
                arr_54 [i_0] [i_0 - 1] [i_11] [i_15] &= max(((max((arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1])))), (min(((max(9594, var_17))), (min(1, 498854774)))));
                var_31 &= (((arr_24 [i_0 + 1] [i_15 - 1] [i_15] [i_15]) - -var_7));
            }

            for (int i_16 = 1; i_16 < 22;i_16 += 1)
            {
                var_32 ^= (((1659215642 & 4055411164728687354) <= (arr_9 [i_16 + 1])));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 22;i_18 += 1)
                    {
                        {
                            var_33 = (((min(48, 528642645469731825)) == (arr_25 [i_18] [i_18] [i_18 + 2] [i_18 + 3] [i_18 + 2] [i_18 - 2])));
                            var_34 &= 29298;
                            var_35 = (arr_23 [i_0] [i_11] [i_16 + 3] [i_18]);
                            var_36 += (arr_0 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 3; i_19 < 24;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        {
                            arr_67 [i_0] [i_11] [i_16 + 2] [i_19] [i_20] = ((~(!var_14)));
                            arr_68 [i_0] [i_11] [i_11] [i_11] [i_16] [i_19] [i_11] &= 13642;
                        }
                    }
                }
            }
            var_37 = (max(var_37, (arr_51 [i_0] [i_0] [i_0 - 1] [i_11])));

            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        {
                            var_38 = (max(var_38, var_11));
                            var_39 = var_17;
                        }
                    }
                }
                arr_75 [i_0] [i_0] [i_0] &= ((((-(arr_46 [i_0] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));

                for (int i_24 = 0; i_24 < 25;i_24 += 1)
                {
                    var_40 = ((((min((arr_18 [i_11] [i_0] [i_11] [i_0] [i_24] [i_24]), (var_5 == var_1)))) ? (((((-(arr_11 [i_0] [i_0] [i_0] [i_24])))))) : ((~((-13649 ? 4294967295 : 3796112522))))));
                    var_41 += (arr_58 [i_0] [i_0] [i_11] [i_21] [i_0] [i_11]);
                    arr_79 [i_24] [i_21] [i_11] [i_0 + 1] [i_0] [i_0] = var_2;
                }
            }
            var_42 = (min(924536699, (arr_52 [i_0])));
        }
    }
    /* LoopNest 3 */
    for (int i_25 = 1; i_25 < 19;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 21;i_26 += 1)
        {
            for (int i_27 = 1; i_27 < 20;i_27 += 1)
            {
                {

                    for (int i_28 = 1; i_28 < 19;i_28 += 1)
                    {
                        arr_91 [i_26] [i_27] = var_2;
                        var_43 = (!142);
                        arr_92 [i_25] [i_26] [i_27 - 1] [i_28] &= ((-(((-(arr_29 [i_26] [i_26] [i_26]))))));

                        for (int i_29 = 1; i_29 < 20;i_29 += 1)
                        {
                            var_44 = (max(var_44, var_4));
                            var_45 = (min(var_45, ((min(3678461010, 7361706192658445078)))));
                            arr_96 [i_25 + 2] [i_26] [i_26] [i_28] [i_25 + 2] = ((-(arr_58 [i_25] [i_26] [i_25] [i_25] [i_26] [i_28])));
                            arr_97 [i_25 - 1] [i_26] [i_27] [i_27] [i_28] [i_29] = (-(arr_86 [i_25] [i_25] [i_25] [i_25]));
                        }
                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 21;i_30 += 1)
                        {
                            var_46 = (~8979);
                            var_47 += (((arr_40 [i_25] [i_26] [i_25] [i_28]) ? (!var_9) : var_15));
                            arr_100 [i_25] [i_25] [i_25] = ((arr_55 [i_25] [i_25 + 1] [i_25]) >> (14222111 - 14222098));
                            var_48 += (arr_58 [i_27 - 1] [i_27 - 1] [i_27] [i_27 + 1] [i_27 + 1] [i_27]);
                        }
                    }
                    var_49 = (arr_44 [i_27] [i_27]);
                }
            }
        }
    }
    var_50 = var_11;
    #pragma endscop
}
