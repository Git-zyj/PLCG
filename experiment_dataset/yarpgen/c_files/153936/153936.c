/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((((28915 ? (arr_0 [i_0]) : var_8)))) * 1));
        var_11 = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_2] [i_2] = ((((min((~1), 233))) ^ (-1177999110384795380 & 605117772)));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_12 = ((((((arr_8 [i_0] [i_1 - 4] [i_2] [i_1 - 2]) > (!var_8)))) <= var_8));
                            var_13 ^= -1;
                        }
                        for (int i_5 = 3; i_5 < 7;i_5 += 1)
                        {
                            var_14 = (arr_18 [i_0]);
                            var_15 = -31995;
                            var_16 -= ((((arr_16 [i_5 - 2] [1] [i_1 - 2] [i_3] [1]) ? (arr_16 [i_5 - 2] [i_5] [i_1 - 2] [6] [i_5 + 2]) : (arr_16 [i_5 - 2] [i_0] [i_1 - 2] [i_0] [i_5]))));
                        }
                        var_17 = (arr_16 [i_1] [i_1 - 1] [5] [i_1 - 2] [i_1 - 4]);
                        var_18 = (min(var_18, (357485556785315328 % 357485556785315333)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                var_19 = var_10;
                arr_26 [i_6] [i_6] [i_6] = (max(((~(arr_21 [i_6]))), 177));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_20 = 32742;
                        arr_34 [i_6] [i_6] [i_6] [i_6] [3] = (-58 / 357485556785315326);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_21 = (!-1967847386);
                        var_22 = (((arr_28 [i_6] [i_7] [i_8] [i_8]) ? (arr_23 [i_6]) : (arr_28 [i_6] [i_6] [i_6] [i_6])));
                        var_23 = (arr_35 [i_7]);
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_24 = (((arr_30 [i_7] [i_11]) ? (arr_20 [i_8]) : (~9223372036854775807)));
                        var_25 ^= ((var_9 / ((var_3 ? 17147713439578432833 : (arr_39 [i_7] [1] [i_8] [i_11])))));
                    }
                    arr_41 [i_6] [5] [i_6] [11] = 357485556785315312;
                    var_26 = (-117 == 357485556785315328);
                    arr_42 [2] |= (arr_28 [i_6] [i_6] [1] [i_6]);
                    var_27 = (((arr_35 [i_6]) ? (arr_35 [i_6]) : (arr_35 [i_6])));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    arr_45 [i_6] [i_6] [i_7] [i_12] = ((!(arr_44 [i_6] [i_7] [i_12] [i_7])));
                    arr_46 [i_6] [i_7] [i_12] [i_12] = ((~(((arr_28 [i_12] [i_12] [i_6] [i_6]) ? 65535 : (arr_43 [i_6] [i_6])))));
                    arr_47 [i_7] [i_7] [i_7] [i_6] = (arr_23 [i_7]);
                    arr_48 [i_12] [i_12] [2] [i_6] = (arr_28 [i_6] [i_7] [i_12] [1]);
                }
                arr_49 [i_6] [i_6] [i_6] = var_1;
            }
        }
    }
    var_28 = -1967847386;
    var_29 *= var_5;

    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_30 ^= ((min(var_8, (!-23952))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {
                    arr_58 [i_13] [i_14] [i_15] = var_7;
                    arr_59 [i_15] [1] [1] = (min((max((arr_56 [i_15] [i_13] [i_15] [i_13]), var_6)), ((max((arr_52 [i_13] [i_14]), (arr_52 [i_14] [i_13]))))));
                }
            }
        }
        var_31 = (((arr_50 [i_13]) ? (arr_51 [i_13]) : ((9223372036854775807 ? -117 : 18446744073709551610))));
        arr_60 [i_13] [i_13] &= (max(((~(arr_55 [i_13] [13] [13]))), ((min((arr_54 [i_13] [i_13] [i_13]), (((!(arr_57 [i_13] [i_13] [i_13] [i_13])))))))));
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
    {
        var_32 = 357485556785315325;
        var_33 = (arr_56 [i_16] [i_16] [i_16] [i_16]);
        arr_65 [2] = var_8;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                {
                    var_34 = (min((arr_55 [8] [i_17] [0]), (arr_64 [7])));
                    arr_70 [i_17] [i_17] [1] = (((min(-1, ((max((arr_57 [i_17] [i_17] [1] [i_17]), 64971))))) & -26));
                }
            }
        }
    }
    for (int i_19 = 1; i_19 < 10;i_19 += 1)
    {
        var_35 -= (~11);
        arr_73 [i_19] = var_10;
        var_36 = 58;
    }
    #pragma endscop
}
