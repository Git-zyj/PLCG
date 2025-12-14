/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (min(var_17, var_13));
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_19 = var_0;
        var_20 += (((arr_1 [7] [i_0]) - -1921472811));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_21 = min(((max(var_5, (0 && 0)))), (max((235 >= var_2), (((arr_5 [i_1]) / (arr_1 [i_1] [i_2]))))));
                        var_22 = (((max(var_9, (arr_5 [i_2 - 1]))) & 7));
                    }
                }
            }
        }
        var_23 = (arr_6 [i_1]);
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_19 [i_5] = 0;
        arr_20 [i_5] [14] = (((((arr_16 [19]) >= (arr_18 [i_5])))) * ((((arr_18 [i_5]) || (arr_17 [i_5])))));

        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            arr_23 [i_6] [i_6] = (((arr_21 [i_5] [i_6]) ? (arr_21 [7] [i_6]) : (arr_21 [i_6 - 1] [i_6])));
            arr_24 [i_6] [17] [i_6] = ((2147483626 ? (((var_10 ? (arr_22 [i_6]) : (arr_17 [7])))) : (arr_21 [i_6] [i_6])));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_24 *= (((arr_16 [i_7 - 1]) ? (arr_22 [i_5]) : (arr_16 [i_5])));
            var_25 = (((arr_25 [2] [i_7]) ? -2 : (-117 - 2104415449)));
            var_26 = var_13;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_29 [i_5] [i_8] [i_5] = (0 ? (arr_28 [i_5]) : 0);
            var_27 = (((arr_27 [i_5] [i_8]) ? (arr_27 [i_5] [i_8]) : (arr_27 [13] [i_8])));
            var_28 = ((((((arr_25 [i_5] [i_8]) ? var_8 : 496))) ? ((~(arr_26 [i_5]))) : (arr_27 [i_5] [i_5])));
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_29 *= (((arr_32 [i_5] [i_9] [i_10]) >= (arr_35 [i_5])));
                        arr_38 [i_5] = (((arr_36 [i_5] [i_9] [3] [i_10 + 1]) || (arr_36 [i_5] [i_9] [i_10] [i_5])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        arr_43 [i_12] = ((65041 ? (arr_36 [8] [5] [i_12] [i_12]) : (arr_1 [1] [i_12])));
        var_30 = (((113 || 492) >> (arr_12 [i_12] [1] [i_12] [i_12])));

        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
        {
            var_31 += (((((arr_40 [i_13] [5]) ? var_12 : (arr_10 [i_12] [9]))) << (((arr_40 [i_12] [i_13]) - 2345670480))));
            var_32 = ((~(arr_14 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])));
            arr_47 [i_12] = (arr_14 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
            var_33 = (((arr_32 [i_13] [i_13] [i_12]) ? (arr_39 [i_13]) : (~106)));
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_34 = (arr_13 [i_12] [i_12] [i_12] [i_14]);
            var_35 = arr_45 [i_12] [i_14] [i_14];
            var_36 = (arr_26 [i_14]);
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            arr_54 [i_15] [1] = ((~(arr_48 [i_12] [i_12] [i_12])));
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 6;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        var_37 = ((-(arr_45 [i_16 + 3] [i_16 + 4] [i_16 - 1])));
                        arr_60 [i_12] [i_17] [i_15] [4] [i_12] [i_17] = (arr_28 [i_12]);
                        var_38 = (((arr_10 [i_16 - 2] [2]) ? (arr_10 [i_16 - 1] [i_15]) : (arr_10 [i_16 - 2] [i_15])));
                        var_39 = (min(var_39, (-127 - 1)));
                    }
                }
            }
            arr_61 [9] [i_15] [9] = var_12;
            arr_62 [0] [i_15] = (((((-127 - 1) + 2147483647)) >> (arr_57 [i_12] [5] [0])));
        }
        var_40 -= ((-2104415440 || (arr_44 [i_12])));
        arr_63 [i_12] [i_12] = 504;
    }
    for (int i_18 = 2; i_18 < 22;i_18 += 1) /* same iter space */
    {
        arr_66 [i_18] = (((~(arr_64 [i_18 + 2] [4]))));
        var_41 = max(2162538161, 680042572);
        var_42 = var_0;
        var_43 -= (((~680042565) ? var_4 : (arr_65 [i_18 + 2])));
    }
    for (int i_19 = 2; i_19 < 22;i_19 += 1) /* same iter space */
    {
        var_44 = (min(var_44, ((((((arr_65 [15]) > (arr_67 [i_19 + 3]))) ? (((2162538161 ? 8387584 : 2162538161))) : (arr_64 [i_19 + 1] [i_19]))))));
        var_45 = ((+(((var_0 | var_6) ? (((arr_68 [1]) ? 8387583 : 504)) : (((arr_68 [i_19]) ? 8387583 : (arr_64 [i_19] [i_19])))))));
    }
    #pragma endscop
}
