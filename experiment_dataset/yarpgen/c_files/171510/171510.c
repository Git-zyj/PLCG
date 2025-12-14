/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= ((((((arr_0 [i_0]) ? var_6 : (arr_0 [i_0])))) * (((arr_0 [i_0]) ? 0 : var_4))));
        var_14 = ((-(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, 1));

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_16 = (max(var_16, -32764));
            var_17 = (max(var_17, 1228195738));
            var_18 = (((arr_4 [i_2 - 1] [i_2]) ? var_1 : (((arr_0 [i_1]) ? 130 : (arr_5 [i_2])))));
            arr_7 [i_1] [i_1] [i_1] = 1;
        }
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_19 = 26;
            arr_10 [i_1] [i_1] &= (((!-23) ? var_8 : (((((arr_1 [i_3]) && var_12))))));
            arr_11 [i_3] [i_3] = -1206051800;
        }
        arr_12 [i_1] = -196;
        var_20 = 118;
        arr_13 [i_1] [i_1] = (((arr_6 [i_1]) <= (arr_6 [i_1])));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_4] [i_5] [i_4] [i_7] [i_7] [i_8] [i_8] = ((!(((min((arr_19 [i_7]), (arr_26 [i_7] [i_7] [i_8] [i_4] [i_4])))))));
                            arr_28 [i_8] [i_8] = ((-(arr_3 [i_8])));
                            var_21 *= (((((arr_1 [i_7]) ? var_4 : var_13))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_9] [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_18 [i_7] [i_6]) % (arr_18 [i_4] [i_7])));
                            var_22 |= (((((arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) & (arr_19 [i_6]))) == (((arr_19 [i_4]) ? (arr_6 [i_4]) : (arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))));
                            var_23 ^= (((min(42, 150))));
                        }
                        var_24 = (min(var_24, var_9));
                        var_25 ^= ((((min(5408222045916024737, (arr_9 [i_4] [i_5] [i_5])))) ? 12704065498559193627 : (min((arr_1 [i_4]), (!var_5)))));
                        arr_32 [i_4] [i_5] [i_5] = min(((((arr_19 [i_4]) ? (arr_19 [i_6]) : var_6))), (arr_18 [i_4] [i_6]));
                    }
                }
            }
        }
        var_26 ^= (max(1, (((var_13 && var_2) % var_8))));

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_27 = (max(var_27, 5742678575150357996));
            arr_35 [i_4] [i_4] [i_10] = ((((max(((min(14, (arr_17 [i_10])))), (arr_34 [1] [1])))) ? ((-6216291955725901587 ? (arr_0 [i_10]) : ((-(arr_21 [i_4] [i_4] [i_4] [i_4]))))) : ((~(arr_24 [i_4] [i_4] [i_4] [i_10])))));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    {
                        var_28 &= (arr_37 [i_12] [i_10] [i_10] [i_4]);
                        arr_41 [i_11] [i_11] = (arr_33 [i_11 - 2] [i_12 - 2] [i_12 + 1]);
                        var_29 = (!(~0));
                        var_30 = ((var_6 ? ((~(!var_5))) : ((-(arr_17 [i_4])))));
                    }
                }
            }
            arr_42 [i_4] [i_4] [i_4] = var_5;
        }
        for (int i_13 = 3; i_13 < 15;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    {
                        arr_54 [i_13] = (((((((arr_1 [i_14]) >= (arr_5 [i_4]))) && 1)) || (((-(((arr_26 [i_4] [i_13 - 3] [i_13] [i_14] [i_15]) ? var_7 : -6227868597135881762)))))));
                        var_31 = ((+((((((arr_33 [i_4] [i_4] [i_4]) ? (arr_48 [i_4] [i_13]) : 13038522027793526855)) > var_6)))));
                    }
                }
            }
            var_32 = (max(var_32, (((!((((arr_40 [i_4] [i_4] [i_13] [i_13] [i_13] [i_13]) ? -20 : var_8))))))));
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 15;i_16 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_33 = (((var_4 ? 8160397633138441785 : -1)) <= (((152 ? -16384 : 154))));
                            var_34 = var_12;
                        }
                    }
                }
            }
            var_35 ^= 0;
        }
        for (int i_20 = 3; i_20 < 15;i_20 += 1) /* same iter space */
        {

            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                var_36 ^= (min((arr_21 [i_20 - 3] [i_20 + 1] [i_20 + 1] [i_21]), (arr_0 [i_4])));
                arr_69 [i_4] [i_4] [i_21] = ((1 <= ((((arr_0 [i_20 - 1]) >= (arr_49 [i_20 + 1] [i_20 - 2] [i_4] [i_20 - 2]))))));
            }
            for (int i_22 = 1; i_22 < 12;i_22 += 1)
            {
                var_37 = (max(-1022, ((min((arr_9 [i_22] [i_22] [i_22]), 1)))));

                /* vectorizable */
                for (int i_23 = 1; i_23 < 15;i_23 += 1)
                {
                    var_38 = (max(var_38, ((((((-(arr_58 [i_4] [i_4] [i_22])))) || var_4)))));

                    for (int i_24 = 0; i_24 < 16;i_24 += 1)
                    {
                        arr_79 [i_4] [i_22] [i_20] [i_22] [i_23 + 1] [i_20] [i_22] = 1377156818865796910;
                        var_39 = var_12;
                        arr_80 [i_22] = (~var_1);
                        var_40 = ((!(arr_45 [i_20 - 1] [i_22 + 3] [i_23 + 1])));
                    }
                    for (int i_25 = 1; i_25 < 14;i_25 += 1)
                    {
                        arr_85 [i_22] [i_20] [i_20] [i_22 - 1] [i_20] [i_25] = (~var_0);
                        var_41 = (max(var_41, var_0));
                    }
                    for (int i_26 = 0; i_26 < 16;i_26 += 1)
                    {
                        var_42 ^= (arr_39 [i_22 - 1]);
                        var_43 = 4294967295;
                        arr_88 [i_4] &= ((66 ? (arr_52 [i_20] [i_20 - 2] [i_22 + 2] [i_23 + 1]) : (arr_52 [i_4] [i_20 + 1] [i_22 + 4] [i_23 + 1])));
                        var_44 = var_12;
                    }
                    for (int i_27 = 2; i_27 < 13;i_27 += 1)
                    {
                        var_45 = ((var_3 - (arr_77 [i_4] [i_4] [i_23])));
                        var_46 = (arr_83 [i_20 + 1]);
                    }
                }
                for (int i_28 = 2; i_28 < 12;i_28 += 1)
                {
                    arr_94 [i_22] = (var_13 + 1);
                    var_47 = (max(var_47, ((((((arr_23 [i_4] [i_22 + 4] [i_28 + 1] [i_28 + 1] [i_20 - 1] [i_22 - 1]) >= (arr_15 [i_20 + 1]))) ? (arr_15 [i_20 - 3]) : (((max((arr_23 [i_4] [i_22 + 3] [i_28 + 3] [i_28 + 3] [i_20 - 1] [i_4]), (arr_23 [i_4] [i_22 + 4] [i_28 - 2] [i_28 - 2] [i_20 - 2] [i_4]))))))))));
                    var_48 = (min(var_48, -var_2));
                    var_49 = (((~(-32767 - 1))));
                }
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 16;i_29 += 1)
                {
                    for (int i_30 = 1; i_30 < 14;i_30 += 1)
                    {
                        {
                            arr_99 [i_4] [i_4] [i_4] [i_4] [i_22] = ((-(((((arr_50 [i_20] [i_20]) ? var_6 : (arr_36 [i_4] [i_4] [i_4] [i_4])))))));
                            arr_100 [i_4] [i_22] [i_4] [i_22] [i_4] [i_4] [i_4] = ((((min((arr_74 [i_20] [i_20 - 1]), (arr_0 [11]))))) | (arr_57 [i_4] [i_4] [i_4]));
                        }
                    }
                }
            }
            var_50 -= (((arr_68 [i_20 - 1] [i_20 - 1] [i_20 - 1] [1]) || 7782316874943179827));
            var_51 = (((max((var_1 >= var_9), (((arr_6 [i_20]) ? 8604 : (arr_45 [i_4] [i_20] [i_20 + 1]))))) < (((arr_58 [i_4] [i_4] [i_20 + 1]) / (arr_36 [i_20] [i_20] [i_20] [13])))));
            var_52 = (max(var_52, (min((((var_9 ? (arr_20 [i_20 - 3]) : (arr_20 [i_20 + 1])))), (min((max(13065464619419142209, (arr_44 [i_4] [i_4]))), (min(var_1, 13065464619419142221))))))));
        }
        var_53 -= ((-(arr_19 [i_4])));
    }
    for (int i_31 = 0; i_31 < 16;i_31 += 1) /* same iter space */
    {
        var_54 = (!var_13);
        var_55 ^= ((~(!30338)));
        arr_105 [i_31] = -22089;
        arr_106 [1] [1] = -3191766703013555985;
    }
    var_56 = var_12;
    var_57 = (!var_10);
    #pragma endscop
}
