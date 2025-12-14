/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min(var_6, var_9))) == var_8)) && (var_4 - var_0)));
    var_20 = ((var_6 ? (min(var_18, ((max(var_5, var_7))))) : (((var_10 >> ((((var_12 ? var_1 : var_18)) - 223)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (min(var_21, var_15));
        var_22 = (((((var_18 ? var_4 : (((var_5 ? var_13 : (arr_0 [i_0]))))))) ? ((+(min((arr_0 [i_0]), var_3)))) : (1 ^ 1)));
        var_23 = (((((var_9 ? var_3 : ((((arr_1 [i_0]) > var_7)))))) ? (((((min((arr_0 [i_0]), var_1))) ? (((var_16 <= (arr_1 [i_0])))) : var_12))) : (min((((~(arr_0 [i_0])))), (((arr_0 [i_0]) ? var_0 : var_10))))));
        var_24 = (min(var_15, (max(((var_14 ^ (arr_1 [i_0]))), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3] [i_4 - 1] [i_5] = (((((~((8778 ? 117 : 192))))) ? (((arr_8 [i_1]) ? (arr_6 [i_4] [i_1] [i_3]) : (((var_8 ? var_1 : var_16))))) : ((((((var_8 ? var_7 : var_11))) ? ((min(var_10, (arr_7 [i_1] [i_1] [i_1])))) : (arr_10 [i_1] [i_2] [i_1] [i_4 + 1]))))));
                                var_25 = (min(((max((((arr_4 [15]) ? var_9 : var_1)), var_12))), ((var_2 ? var_17 : (((var_2 ? var_11 : var_3)))))));
                                arr_17 [i_1] [i_3] [i_4] [i_5] = ((((min(-23470, 29824))) ? ((((arr_14 [i_4] [i_2 + 4] [i_2 + 4] [i_4 - 1] [i_5] [i_2]) >> (((arr_11 [i_1] [i_2 - 2] [i_3] [i_4 - 3] [i_5] [i_3]) - 2745))))) : (((arr_10 [i_1] [i_2 - 3] [i_2 - 3] [i_4 - 1]) ? var_18 : (arr_14 [i_4] [i_2 - 3] [i_3] [i_4 + 1] [i_5] [i_5])))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2] = var_17;
                }
            }
        }
        var_26 = ((((max(var_2, var_3))) ? var_18 : ((var_13 ? ((var_16 ? var_17 : var_10)) : (((max(var_10, (arr_12 [i_1] [i_1] [i_1] [i_1])))))))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((~var_6) ^ var_11));
        arr_24 [i_6] = ((((((((arr_22 [i_6]) << (arr_20 [i_6] [i_6])))) ? var_1 : (((arr_20 [i_6] [i_6]) ? (arr_21 [i_6] [i_6]) : (arr_22 [i_6])))))) ? (((arr_20 [i_6] [i_6]) ? (((var_15 << (arr_20 [i_6] [i_6])))) : (max((arr_19 [i_6] [i_6]), var_14)))) : var_15);
        arr_25 [i_6] [i_6] = (max((((arr_21 [i_6] [i_6]) ? (arr_21 [i_6] [i_6]) : var_15)), ((max(var_9, var_12)))));

        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_27 = var_18;

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_28 = (max((max(var_0, (arr_22 [i_7 - 1]))), ((((arr_21 [21] [i_8]) ? ((var_3 << (((arr_26 [i_8]) - 14570610782435538022)))) : ((220 >> (54 - 25))))))));
                arr_31 [i_6] |= var_8;
            }
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                arr_34 [i_6] [i_7] [i_9 + 2] = var_13;

                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_38 [i_10] [i_10] [i_9] [i_9] = var_17;
                    var_29 = ((var_2 ? var_6 : var_17));
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    arr_43 [i_6] [i_7] [i_7] [i_9] [i_9] = ((((((max(var_15, var_18)) | (((min((arr_20 [i_9] [i_9]), (arr_32 [i_6] [18] [i_9] [i_11])))))))) ? (var_10 > var_8) : (max((~var_3), (arr_37 [i_6] [i_9] [i_9] [i_11])))));
                    arr_44 [i_6] [i_6] [i_9] [i_11] = (max((((((var_17 ? var_12 : var_5))) ? var_11 : ((var_7 ? (arr_22 [i_9 + 3]) : var_0)))), var_9));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    var_30 = (min(var_30, var_6));
                    arr_47 [i_6] [i_6] [i_7 + 1] [i_6] [4] [i_6] = (((((4094 ? ((max(-12145, 60066))) : 202))) ? ((var_5 & ((max(var_2, (arr_39 [i_6] [i_6] [i_9 + 2] [i_9] [i_12])))))) : ((((((var_3 ? var_17 : var_9))) && var_18)))));
                    var_31 = (max((((var_15 ? var_1 : (arr_21 [i_7 + 1] [i_9 - 1])))), (max(((var_1 ? var_16 : var_18)), ((min(var_16, var_9)))))));
                    arr_48 [i_6] [i_6] [i_7] [10] [i_12] = (var_13 ? (((!(((var_10 ? var_17 : (arr_29 [i_6] [i_9] [i_9]))))))) : (arr_20 [i_7 - 1] [i_9 - 1]));
                }
            }
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                arr_53 [i_13] [i_6] [i_7] [4] = ((4 && ((min(148, 195)))));
                arr_54 [i_13] [i_13] = ((var_13 >> (var_9 + 43)));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            arr_61 [i_6] [i_7 - 1] [i_13 + 1] [i_7 - 1] [i_14] |= ((~(var_11 ^ var_2)));
                            arr_62 [i_15] [i_15] [i_14] [i_13] [6] [i_7 + 1] [i_6] = var_14;
                            var_32 = var_3;
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    arr_66 [i_13] = (((max(((var_6 && (arr_60 [i_13]))), (!var_6))) ? ((((min(61440, 10190))) | var_7)) : (arr_21 [i_7] [i_13])));
                    var_33 = (((max(((max(var_16, var_4))), ((var_10 ? var_8 : var_0)))) & (((min((arr_64 [i_6] [i_7 - 1] [i_16] [i_13]), (arr_64 [i_6] [i_7 + 1] [i_7 + 1] [i_13])))))));
                }
                /* vectorizable */
                for (int i_17 = 2; i_17 < 23;i_17 += 1)
                {
                    var_34 = (max(var_34, ((((arr_42 [i_7 - 1] [8] [i_7] [i_7] [i_7]) ? (arr_42 [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_6]) : var_0)))));
                    var_35 = ((((((arr_57 [i_6] [i_7 - 1] [i_13] [i_7 - 1] [i_17]) ? var_3 : var_12))) ? var_1 : (var_10 == var_14)));
                    arr_70 [i_13] [i_7] [i_17] = var_13;
                    var_36 = arr_39 [20] [20] [i_7 + 1] [i_7 - 1] [1];
                    arr_71 [i_6] [i_7] [i_7] [i_6] [i_13] = var_17;
                }
            }
            arr_72 [i_6] [i_6] [15] |= var_16;
        }
        for (int i_18 = 1; i_18 < 20;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 21;i_20 += 1)
                {
                    {

                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            arr_83 [i_6] [i_6] [i_6] [i_6] [i_6] [i_18] = var_13;
                            arr_84 [i_6] [i_6] [i_18] [i_6] [i_6] = var_6;
                        }
                        for (int i_22 = 1; i_22 < 21;i_22 += 1) /* same iter space */
                        {
                            arr_87 [i_18] [9] = ((((min((((var_17 ? (arr_68 [i_18] [i_20 + 1] [i_22 + 1]) : var_15))), (max(var_18, var_9))))) ? var_1 : ((((!(arr_69 [i_6] [i_18] [i_6] [i_6] [i_20] [i_22 + 1]))) ? (var_13 == var_13) : var_3))));
                            var_37 = (((arr_45 [i_18]) + (min((((var_18 ? var_10 : var_12))), (((arr_67 [i_6] [4] [i_19] [i_18] [i_22]) + var_16))))));
                            arr_88 [i_22] [i_18] [i_19] [i_18] [i_6] = (((((((var_3 ? var_16 : var_3)) - ((min(var_1, var_1)))))) ? (((arr_35 [3] [i_18 + 1] [i_19] [i_20]) ? var_3 : (max(var_4, var_13)))) : (arr_81 [i_18 + 2] [i_18 + 2] [i_20] [i_20] [i_20 + 2])));
                            arr_89 [14] [i_18 + 4] [i_18] [i_18 + 4] [23] = var_7;
                            var_38 = (var_7 - var_17);
                        }
                        for (int i_23 = 1; i_23 < 21;i_23 += 1) /* same iter space */
                        {
                            var_39 = (max((arr_29 [i_23] [i_18] [i_18]), var_13));
                            var_40 = (((arr_30 [i_20 + 2] [i_23] [i_23] [9]) / (min((min(853, 14305367912676740947)), ((max(var_16, var_5)))))));
                        }
                        var_41 = (arr_79 [i_6] [i_6] [i_6] [i_19] [i_19] [i_20]);
                    }
                }
            }
            var_42 = ((var_4 ? ((var_18 ^ (((var_10 ? var_1 : var_16))))) : ((((var_13 ^ var_14) ? (arr_85 [i_18 + 1] [i_18 + 4] [i_18] [i_18] [i_18 - 1] [i_18] [i_18]) : (var_4 | var_11))))));
            arr_94 [i_18] = ((((var_14 != (arr_50 [i_6] [i_18 - 1] [i_18] [i_18 - 1]))) ? ((~(arr_36 [i_6] [10] [i_18] [0]))) : (((((max(var_11, (arr_36 [i_18] [18] [16] [5])))) > ((var_12 ? (arr_41 [i_6]) : var_5)))))));
        }
        for (int i_24 = 2; i_24 < 23;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 21;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 22;i_26 += 1)
                {
                    {
                        var_43 = (arr_74 [i_6] [i_24 + 1] [i_25]);
                        var_44 = (((((((max(var_1, (arr_41 [22])))) ? (arr_41 [i_6]) : (arr_92 [i_6] [i_6] [i_6])))) || (((~var_1) <= (1 * 22)))));
                        arr_101 [i_6] [i_6] [i_24] = ((var_1 ? var_4 : (((((57344 ? 64708 : 6144)) + var_5)))));
                        arr_102 [i_24] = ((((min(((min(var_15, (arr_55 [i_6] [i_6] [i_25] [i_25] [i_25] [i_26 + 2])))), -var_3))) ? (min((((arr_41 [i_6]) ? var_16 : var_13)), (arr_98 [i_6] [i_24] [6]))) : ((var_2 ^ (((arr_26 [i_25]) ? (arr_74 [i_6] [i_24] [i_24]) : (arr_22 [i_24])))))));
                        var_45 = var_8;
                    }
                }
            }

            for (int i_27 = 2; i_27 < 22;i_27 += 1)
            {
                var_46 = ((var_13 && ((((max((arr_56 [i_6] [i_6] [i_6]), var_14)) / var_15)))));
                var_47 = (max(var_47, ((((arr_56 [i_27] [4] [8]) ? ((((((((arr_56 [i_6] [i_6] [i_27]) ? var_9 : var_5))) <= (var_4 % var_6))))) : ((var_0 ? var_13 : var_14)))))));
                arr_106 [i_6] [i_24] = (arr_100 [i_6] [5] [1] [4]);
            }
        }
        var_48 = (min((arr_82 [5] [i_6] [i_6] [i_6] [i_6]), ((((2584565486 ? 8205 : 1)) + var_6))));
    }
    var_49 = (((((var_18 ? var_1 : (min(var_17, var_2))))) ? ((max(var_9, var_11))) : var_13));
    #pragma endscop
}
