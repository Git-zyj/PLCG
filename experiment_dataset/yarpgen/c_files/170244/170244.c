/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_8));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 = var_6;
        var_12 = ((((max(7073432854453392232, -8560)) & 2405)));
        var_13 += (max((arr_0 [i_0 + 1]), -8119983074788074415));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                var_14 = ((((((arr_6 [1] [1]) ? (arr_6 [i_1] [i_1]) : 27983))) ? (arr_7 [i_3] [i_1 + 1] [i_3]) : (var_6 != 2274675676)));
                var_15 = (11964 >= 190820537);
            }
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_16 = (((arr_6 [i_4 + 1] [i_1 + 1]) >> (((arr_4 [i_4 + 1]) - 2464541743))));
                arr_11 [i_2] [i_4] [i_4] = (arr_10 [i_1] [i_2] [i_4]);
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        var_17 = (arr_0 [i_1]);
                        var_18 = 1147478796;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_19 |= ((var_0 ? (((24033 <= (arr_5 [i_1 + 1] [i_1 + 1] [i_1])))) : (arr_16 [i_7] [i_1 - 1] [i_1] [i_1 - 1])));
            var_20 = var_8;
            arr_20 [i_7] [i_7] = var_1;
        }
        var_21 = (((-1147478796 ^ 34061) == (((arr_1 [0]) ? 24019 : (arr_9 [i_1] [i_1] [i_1])))));
        arr_21 [i_1 - 1] = (arr_17 [i_1 - 1] [i_1 + 1]);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_22 = ((-5537 ^ ((~(arr_23 [i_8])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_23 = ((2020291619 ? 1 : (arr_28 [i_9])));
                            var_24 = var_9;
                            var_25 = (((((1 ? var_1 : (arr_27 [i_12] [i_12 + 2] [i_12] [i_12 + 2])))) ? 0 : (arr_29 [i_8] [i_10] [18] [i_9])));
                            var_26 |= ((0 ? 2147483647 : (arr_27 [i_8] [17] [i_8] [i_8])));
                        }
                    }
                }
            }
            var_27 = ((((~(((arr_27 [i_8] [i_9] [i_9 + 1] [i_8]) ^ 2377533447924188667)))) > var_8));

            /* vectorizable */
            for (int i_13 = 3; i_13 < 23;i_13 += 1)
            {
                var_28 += var_8;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_29 = (((arr_32 [i_9] [i_9] [i_13] [i_13 + 1] [i_9 + 1]) != (arr_40 [i_8] [i_8] [i_9 - 2] [i_13 + 1])));
                            arr_41 [i_9] [i_9] [i_13] [i_14] [i_15] = (((arr_25 [i_9 + 1] [i_9] [i_13 - 1]) ? (arr_25 [i_9 - 1] [i_13 - 3] [i_13 + 1]) : 7599975824062009501));
                            var_30 = ((1147478812 ? (arr_35 [i_9 - 1] [i_9 - 2]) : (arr_25 [i_9 - 1] [i_9 + 1] [i_9 - 1])));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_16 = 1; i_16 < 23;i_16 += 1)
            {
                var_31 = var_9;
                var_32 = (var_5 * (arr_38 [i_8] [i_9 + 1] [i_8] [i_9 - 2]));

                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    var_33 = (arr_44 [i_8] [i_16] [i_17] [i_16]);
                    var_34 = ((var_2 ? (((10 ? (arr_34 [i_8]) : var_4))) : (32376 & 127)));
                    var_35 = (max(var_35, ((((arr_33 [i_16]) / (arr_31 [i_17] [i_16 + 1] [i_9 - 2] [i_9 - 1] [i_9 + 1]))))));
                    var_36 ^= ((~(arr_32 [12] [i_9] [i_9] [i_9] [i_9 + 1])));
                }
                for (int i_18 = 2; i_18 < 22;i_18 += 1) /* same iter space */
                {
                    var_37 ^= var_2;

                    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
                    {
                        var_38 = (max(var_38, -0));
                        var_39 = 8543550638296204510;
                        var_40 *= (((arr_31 [1] [i_16] [i_16] [i_16 - 1] [i_16 + 1]) > (arr_35 [i_9 - 1] [i_16 + 1])));
                    }
                    for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
                    {
                        var_41 &= (((arr_24 [i_18]) ? 2414779608301437645 : (((3 ? 8559 : var_7)))));
                        var_42 = (0 + (arr_39 [i_9]));
                    }
                    var_43 *= (arr_52 [i_9] [i_9 - 2]);
                    var_44 &= (arr_25 [23] [i_9 - 1] [i_9 - 2]);
                }
                for (int i_21 = 2; i_21 < 22;i_21 += 1) /* same iter space */
                {
                    var_45 = (max(var_45, ((((arr_31 [i_16 + 1] [i_21 + 2] [i_16] [i_9 + 1] [i_9 - 2]) ? -18446744073709551610 : var_7)))));

                    for (int i_22 = 0; i_22 < 24;i_22 += 1)
                    {
                        arr_60 [i_22] [i_21 - 1] [i_9] [i_9] [i_8] = (((arr_58 [i_9] [i_9 - 1] [i_9 + 1] [i_8] [i_9]) >= (arr_58 [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9])));
                        var_46 = (arr_52 [i_8] [i_9]);
                    }
                    for (int i_23 = 2; i_23 < 22;i_23 += 1)
                    {
                        var_47 &= (var_7 == 32185);
                        arr_65 [i_9] [i_16] [i_21] [i_21] = ((~var_6) ? (arr_44 [i_21 - 2] [i_21 - 2] [i_16] [i_8]) : (arr_62 [i_9 - 2] [i_16] [i_16 + 1] [i_21 + 1] [i_23 - 2]));
                        arr_66 [i_9] = (((arr_22 [i_9 + 1] [i_8]) | -11));
                    }
                    for (int i_24 = 0; i_24 < 24;i_24 += 1)
                    {
                        var_48 = (13230939380485483504 ? 1 : 1);
                        var_49 += ((arr_40 [i_16 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1]) ? var_5 : (((8560 ? var_2 : 536870912))));
                    }
                }

                for (int i_25 = 0; i_25 < 24;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 24;i_26 += 1)
                    {
                        var_50 = 10157946502311443974;
                        var_51 = (max(var_51, (!12)));
                    }
                    for (int i_27 = 0; i_27 < 24;i_27 += 1)
                    {
                        var_52 = (((var_5 << 55) ? -45 : -20));
                        var_53 &= (-(arr_48 [i_16 - 1]));
                        var_54 = (arr_71 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_16 - 1]);
                    }
                    var_55 = 5;
                    var_56 = (arr_26 [i_9]);

                    for (int i_28 = 0; i_28 < 24;i_28 += 1) /* same iter space */
                    {
                        var_57 *= (62 ? var_0 : ((-(arr_49 [i_9] [i_16 + 1] [i_25] [1]))));
                        var_58 = ((((1 && (arr_63 [i_8] [i_8] [i_8] [i_9] [i_16 + 1] [i_25] [22]))) ? ((var_8 ? (arr_68 [i_8] [i_9 - 1] [i_9 - 1] [i_25] [1]) : var_8)) : var_7));
                    }
                    for (int i_29 = 0; i_29 < 24;i_29 += 1) /* same iter space */
                    {
                        var_59 = ((-(arr_33 [i_9 - 1])));
                        var_60 = (arr_78 [i_9]);
                        var_61 += (((arr_74 [5] [i_9] [i_16] [i_25] [i_25]) >= (((44 ^ (arr_55 [i_25]))))));
                    }
                    for (int i_30 = 0; i_30 < 24;i_30 += 1) /* same iter space */
                    {
                        var_62 = ((40177 ? var_6 : var_1));
                        var_63 -= (((arr_77 [i_9 - 1] [i_9] [i_9] [i_9 - 2]) ? var_2 : (!var_8)));
                    }
                }
                for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
                {
                    var_64 = (((~8559) == var_7));

                    for (int i_32 = 1; i_32 < 1;i_32 += 1)
                    {
                        var_65 = (max(var_65, (((!(arr_61 [i_32 - 1] [i_16 + 1] [i_16 + 1] [i_9 - 2]))))));
                        var_66 *= ((var_5 ? (var_7 - var_3) : ((-(arr_46 [0])))));
                    }
                }
                for (int i_33 = 0; i_33 < 24;i_33 += 1) /* same iter space */
                {
                    var_67 = (arr_58 [i_16 + 1] [i_16 + 1] [i_9 - 1] [i_33] [i_9]);
                    var_68 = (arr_42 [22]);
                    var_69 = (~0);
                }
                for (int i_34 = 0; i_34 < 24;i_34 += 1) /* same iter space */
                {
                    var_70 &= 39;
                    var_71 = (((((32767 ? 103 : var_5))) ? (arr_48 [i_8]) : var_2));
                    var_72 = (!-var_6);
                }
                var_73 ^= (((((56540 ? 16 : 10846768249647542103))) ? (((arr_35 [i_16] [i_9 - 1]) ? var_7 : 39)) : -8559));
            }
        }

        for (int i_35 = 1; i_35 < 23;i_35 += 1)
        {
            var_74 = (min((var_7 - 95), var_1));
            var_75 = (arr_94 [i_8] [i_35] [i_8] [i_35]);
        }
        var_76 = (max(var_76, ((((min((arr_24 [i_8]), ((max(96, (arr_33 [i_8])))))) & var_4)))));
    }
    #pragma endscop
}
