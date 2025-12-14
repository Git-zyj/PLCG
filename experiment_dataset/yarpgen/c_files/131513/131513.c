/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((var_4 ? (41257 < 46) : var_2))));
    var_21 = ((var_5 ? var_9 : var_8));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = ((48 ? (((arr_0 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = -41257;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 = ((((((((var_1 ? var_15 : var_8))) - (((arr_1 [10] [10]) - (arr_4 [i_2])))))) ? (min((((0 ? 54983 : 232))), (max(0, 16)))) : ((((arr_0 [i_1] [i_2]) ? (arr_8 [i_2] [11] [i_2] [i_2]) : var_11)))));
                    arr_9 [i_1] [i_1] [2] [i_1] = ((arr_1 [i_0] [i_0]) < (min(9007199254740992, ((((arr_7 [i_1] [1] [i_1]) <= 4294967295))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_24 ^= -1926986373;

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [5] = ((-(max(var_14, ((var_7 ? var_12 : (arr_16 [i_3] [i_3])))))));
            arr_18 [i_3] [i_4] [i_3] = var_19;
        }
        arr_19 [i_3] [i_3] = (79 <= -1);
        var_25 = (max(var_25, (((177 ? 50681 : 8489397936473257482)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_25 [i_5] [i_6] = (((arr_8 [7] [i_6] [i_6] [i_6]) <= (arr_11 [i_5])));
            arr_26 [i_6] [18] = (((arr_0 [i_6] [i_5]) > (!1)));
            arr_27 [i_5] [i_5] [i_5] = ((((-17 < (arr_10 [i_5] [i_5]))) ? (arr_1 [i_6] [i_5]) : (((~(arr_16 [i_5] [i_5]))))));
            var_26 = (arr_22 [i_6] [i_5]);
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_27 *= (arr_22 [i_5] [i_7]);
                    arr_33 [i_5] [i_5] [i_7] = ((-((4294967282 ? (arr_30 [1] [i_7] [i_7] [1]) : (arr_23 [i_5] [i_7] [i_5])))));
                }
            }
        }
        arr_34 [i_5] [i_5] = ((0 > (arr_10 [i_5] [i_5])));
        var_28 = (arr_23 [1] [i_5] [i_5]);
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] = (arr_22 [i_9] [i_9]);

        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            arr_41 [i_10] = min(var_17, (((((min(115, 4294967288))) && (arr_36 [i_10 + 1])))));
            arr_42 [i_10] = ((((max(16384, 1))) >> (min((arr_28 [i_9] [i_10] [1]), (~-2)))));
            var_29 = -7547197475012613380;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_30 = (arr_13 [8] [i_11]);

                for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    arr_50 [i_13] [i_13] [i_12] [i_13] [i_11] = (10 ? (arr_45 [i_13 - 1] [i_13 + 2] [i_13 - 1]) : (arr_45 [i_13 + 3] [i_13 + 1] [i_13 + 3]));
                    arr_51 [i_9] [i_9] = ((18446744073709551615 ? 2147483647 : 42));
                }
                for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    arr_55 [i_9] [1] [1] [i_14 + 1] = ((8176 ? (arr_23 [i_14 - 1] [i_14 - 1] [i_14 + 2]) : (arr_23 [i_14 + 2] [i_14 + 1] [i_14 + 2])));
                    var_31 = var_19;
                    arr_56 [15] [10] [8] [1] = (((arr_24 [19] [i_14 - 1] [0]) ? ((((arr_6 [i_9] [9] [i_14 - 1]) ? 21 : var_16))) : (arr_1 [i_14 - 1] [i_14 - 1])));
                    arr_57 [6] = (((-746511012 + 177) > var_13));
                }
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                var_32 = (((arr_59 [i_9] [i_9] [i_15]) <= (arr_16 [i_11] [i_11])));
                arr_61 [10] = var_1;
            }
            arr_62 [i_11] &= (~var_10);
        }
        arr_63 [i_9] = ((1 ? 4294967279 : 64637));
    }
    #pragma endscop
}
