/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((var_2 ? (((min(8191, 1)))) : (min((min(var_6, var_2)), (((var_3 ? -1617395612 : 8185)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = ((-8173 ? var_9 : ((var_14 ? (arr_2 [i_0]) : 2022188585))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_22 += (((arr_4 [i_0] [i_0]) * var_17));
            var_23 = (min(var_23, (((var_11 ? (arr_1 [i_0]) : (arr_0 [0]))))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_24 = (((arr_1 [i_2 + 1]) ? (arr_1 [i_2 - 1]) : var_11));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_25 += (arr_10 [4] [i_3 - 1]);
                            var_26 = ((var_4 ? ((1 ? var_17 : 28906)) : (arr_16 [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] [i_0] [6] [6])));
                        }
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_27 += (arr_1 [i_6]);
                            var_28 = var_16;
                            var_29 = (((((arr_10 [i_0] [4]) && 1077858678)) ? var_11 : (arr_12 [i_4] [4] [i_0] [i_4])));
                        }
                        var_30 = ((10 ? 176 : 1));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            var_31 = (min(var_31, 3970305888750165072));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] [i_10] = var_19;
                            var_32 = (min(var_32, var_5));
                        }
                        for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            var_33 = (min(var_33, (arr_18 [i_9 + 1] [i_7] [i_8 - 1] [i_7] [i_7])));
                            var_34 = (max(var_34, ((((arr_6 [i_11 + 1] [i_7 + 2] [i_0]) ? (arr_32 [i_11] [9] [i_11] [i_11] [i_11] [7] [9]) : ((var_14 ? var_10 : var_4)))))));
                            var_35 = (min(var_35, ((((((var_2 ? -68 : -1))) || 16251596077057020392)))));
                            var_36 = ((var_11 ? var_8 : 18446744073709551613));
                            var_37 = (min(var_37, 90));
                        }
                        var_38 = (max(var_38, (((var_6 ? (18446744073709551609 || var_6) : (arr_14 [i_7] [i_7]))))));
                        var_39 = (min(var_39, (arr_4 [i_7 + 1] [i_8 - 1])));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        var_40 ^= var_16;
        var_41 += (min((min((var_6 / 17241), (((arr_13 [8] [0] [i_12] [0] [0]) ? var_15 : 18446744073709551615)))), (((((min(var_12, (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12])))) && (((var_14 >> (var_15 + 24367)))))))));
        var_42 = var_13;
        var_43 = var_4;
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_44 = ((((min((arr_36 [i_13]), (arr_36 [i_13])))) ? var_13 : ((min(var_12, 16251596077057020389)))));
        var_45 = (min(((-4 ? var_6 : (arr_37 [i_13]))), (((var_14 >= ((min(var_3, 2147483641))))))));
        var_46 = (max(var_46, ((max((arr_37 [21]), var_10)))));
        arr_38 [10] [4] = var_5;
    }

    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    arr_47 [i_15] [i_15] [i_15] = (((arr_39 [i_15]) ? (max(10, 8594849008355611260)) : -8192));
                    var_47 += ((((max(-1057438621, (max((arr_36 [11]), 8))))) || (((var_2 ? 18446744073709551615 : (arr_42 [i_14]))))));
                    arr_48 [i_15] = (min(((((arr_45 [i_14]) ? (((arr_45 [6]) & -9)) : (arr_42 [i_15])))), (min((min(var_16, var_5)), (((var_13 ? (arr_39 [13]) : (arr_42 [i_15]))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 12;i_18 += 1)
            {
                {
                    var_48 += (((((arr_44 [i_18 + 3]) ? (arr_44 [i_18 + 3]) : var_18)) >> ((((max(var_11, (arr_50 [i_18 - 1] [i_18 - 1] [i_18])))) - 811))));
                    var_49 = (min(var_49, (((18446744073709551613 ? (arr_50 [i_17] [3] [i_17]) : 17808)))));
                }
            }
        }
        var_50 = (max(var_50, ((((((var_12 ? var_5 : var_17))) ? ((max(181, (arr_49 [i_14])))) : (((arr_46 [i_14] [i_14] [i_14]) + 4)))))));
        var_51 = var_12;
    }
    for (int i_19 = 2; i_19 < 15;i_19 += 1)
    {
        var_52 ^= (arr_36 [9]);
        var_53 = (min((max((arr_37 [i_19 + 1]), (arr_37 [i_19 - 1]))), (((arr_37 [i_19 + 1]) ? var_10 : var_14))));
    }
    #pragma endscop
}
