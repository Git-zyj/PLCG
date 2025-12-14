/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [5] [i_1] [i_2] [i_2] = 1;
                    arr_9 [i_1] [i_1] [i_2] = (arr_3 [2] [i_1] [i_2]);
                    var_20 &= ((13133220864263856503 <= (((min(var_0, (arr_0 [i_1])))))));
                }
            }
        }
        var_21 -= var_7;
        var_22 = (arr_7 [i_0]);
        var_23 -= (min(((!(arr_1 [5]))), var_5));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_13 [19] [i_3] |= var_17;
        var_24 &= arr_10 [i_3] [i_3];

        for (int i_4 = 3; i_4 < 24;i_4 += 1)
        {
            var_25 *= var_0;
            arr_17 [i_3] [i_4] = (arr_16 [i_3] [i_4] [i_3]);
            var_26 = (min(var_26, (arr_12 [i_3] [i_4])));

            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                var_27 = (arr_20 [11] [i_4] [i_5]);
                var_28 = (min(var_28, (arr_19 [8] [i_3] [i_4] [8])));
                var_29 = var_6;
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_30 = (+-464303575);
                var_31 = var_0;
            }

            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_32 = (min(var_32, var_16));
                var_33 += (233 != var_10);
                var_34 -= ((1708049698 | (arr_26 [1] [i_3] [1] [i_4 - 2])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_35 = var_2;
                var_36 = (min(var_36, (((-(arr_12 [i_4 - 2] [11]))))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_37 -= ((arr_11 [i_4 - 2] [i_4 - 3]) ? (arr_11 [i_4 - 2] [i_4 - 1]) : (arr_11 [i_4 - 3] [i_4 - 3]));
                arr_35 [i_4] = (arr_12 [i_3] [i_4]);
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    arr_41 [i_11] [i_4] [i_4] [i_3] = var_10;

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_38 = (min(var_38, (((var_13 ? ((var_10 ? var_8 : var_1)) : 0)))));
                        var_39 = (min(var_39, (arr_44 [i_3] [12] [i_10] [7] [16] [i_12])));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_47 [i_4] [i_4] = -464303575;
                        var_40 = (~var_0);
                        var_41 = (min(var_41, (2324305777 / var_9)));
                    }
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        var_42 -= (((arr_22 [i_4 - 3] [i_4]) | ((6 << (arr_15 [i_3] [i_3] [15])))));
                        arr_52 [i_4] [i_11] = (((arr_27 [i_14] [i_14 + 1] [i_14]) ? 247 : (arr_39 [i_3] [i_3] [i_4 - 3] [i_14])));
                        var_43 &= 245;
                        arr_53 [i_3] [i_4] [i_4] = 15749332792555683867;
                        arr_54 [i_4] = ((((((arr_38 [i_10]) >= (arr_15 [i_4] [18] [i_4])))) + (arr_16 [13] [i_4] [4])));
                    }
                }
                for (int i_15 = 4; i_15 < 22;i_15 += 1)
                {
                    arr_57 [i_3] [i_4] [i_10] [i_15] = 1825877420;
                    var_44 = var_1;
                    arr_58 [i_4] [15] [15] [2] [21] = 1;
                    arr_59 [i_15] [i_4] [i_10] [i_10] [19] = ((((arr_55 [i_3] [i_3] [i_3] [i_3]) == 14)));
                }
                for (int i_16 = 2; i_16 < 23;i_16 += 1)
                {

                    for (int i_17 = 3; i_17 < 23;i_17 += 1)
                    {
                        var_45 = (arr_36 [0] [10] [i_10] [i_10]);
                        var_46 = (min(var_46, 12039098382915212245));
                        var_47 = (max(var_47, (((-((1 ? var_13 : var_1)))))));
                        var_48 = -464303575;
                        var_49 *= (((arr_11 [i_4 + 1] [i_4 + 1]) <= (~1)));
                    }
                    var_50 = (arr_43 [i_16] [i_4] [i_10] [i_16] [i_10] [i_4] [i_3]);
                    arr_64 [i_3] [i_3] [i_4] [i_3] [i_3] [1] = (~var_13);

                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        var_51 = arr_22 [i_4 - 2] [i_16];
                        var_52 = (((((14963756882251534184 ? (arr_33 [i_4] [i_10] [1] [i_18]) : 4234210066092820316))) * 0));
                    }
                    arr_67 [i_3] [i_4] [i_3] [i_3] = (arr_45 [21] [i_4] [i_10] [23] [21]);
                }
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    var_53 = ((var_3 > (255 <= 18446744073709551612)));
                    arr_71 [i_3] [i_4] [4] [i_4] = (((arr_12 [i_19] [10]) ? -1926892467 : (arr_32 [i_4 - 2] [i_4] [i_4])));

                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        arr_74 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] = var_5;
                        arr_75 [i_4] [i_4] [i_10] [19] [18] = ((-(arr_15 [i_4 - 3] [i_4 + 1] [i_4 + 1])));
                        var_54 = (((arr_12 [i_3] [i_3]) ? (arr_68 [i_3] [21] [i_4 + 1] [11]) : (18446744073709551612 - var_13)));
                    }
                    arr_76 [i_3] [16] [i_3] [i_19] |= var_12;
                    arr_77 [i_4] [6] [i_19] = 1;
                }
                arr_78 [i_4] = 1;
                arr_79 [20] [18] [i_4] [i_10] = ((var_8 ? (((((arr_12 [i_3] [i_4 - 2]) <= (arr_69 [i_3] [i_4] [i_10] [i_3] [i_4]))))) : (arr_12 [i_4 - 2] [i_4])));
            }
        }
        var_55 = (min(var_55, (((~(arr_34 [i_3] [i_3] [i_3] [i_3]))))));
    }
    for (int i_21 = 3; i_21 < 17;i_21 += 1)
    {
        var_56 = (min(var_11, (arr_16 [i_21] [16] [i_21])));
        var_57 = ((((((arr_81 [11] [i_21]) ? 42 : ((min(var_0, var_2)))))) ? (arr_80 [i_21]) : (min((max(1, 3)), (arr_20 [i_21 - 3] [i_21 - 1] [i_21 - 1])))));
        var_58 = (max(var_58, ((max(-var_14, (max(((1 ? 275368665 : var_2)), (((var_16 ? var_8 : (arr_26 [1] [3] [i_21] [1])))))))))));
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 17;i_22 += 1)
    {
        var_59 = (max(var_59, ((((arr_25 [i_22] [14]) ? ((var_6 ? 18446744073709551612 : var_2)) : var_17)))));
        arr_84 [12] = (arr_21 [7]);
    }
    var_60 = -32648;
    var_61 = var_17;
    #pragma endscop
}
