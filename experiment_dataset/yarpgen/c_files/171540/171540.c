/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_17, (max((arr_1 [i_0]), -69837258))));
        var_18 *= ((var_6 / (max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_19 = ((min((min(var_9, (arr_0 [i_0]))), (((arr_0 [13]) ^ (arr_1 [5]))))));
        var_20 *= ((((((arr_0 [i_0]) * (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 ^= ((((((arr_2 [i_1]) > (arr_2 [6])))) - var_13));
        var_22 = (((((-(arr_3 [i_1])))) != (((arr_0 [1]) ? ((((arr_1 [7]) ? 1 : (arr_2 [i_1])))) : (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_23 = (arr_2 [i_1]);

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_24 += 1099720102;
                arr_10 [0] [i_3] [i_3] [i_1] = (((arr_6 [i_1] [11] [i_3 - 1] [i_3]) ? (arr_4 [i_3 + 1]) : (arr_4 [i_3 + 1])));
                arr_11 [11] [i_2] [i_2] [i_3] = (arr_2 [i_3]);
            }
            var_25 = (max((max(((((arr_7 [i_1] [12]) != (arr_6 [4] [10] [i_1] [i_1])))), (arr_1 [i_1]))), (arr_3 [i_2])));
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                arr_16 [i_1] [i_5] [7] [i_1] = 1250465137;
                arr_17 [i_5] [i_5] [i_5] = (53134 || var_16);
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_24 [i_7] [1] [i_4] [11] = ((!((max((((arr_2 [i_4]) ? (arr_15 [i_1]) : (arr_23 [7] [i_6 + 2]))), (arr_8 [i_1] [i_7 + 1] [i_6 - 1] [i_1]))))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_8] [6] [2] [7] = 53127;
                            arr_28 [i_8] [i_6] [12] [2] [i_6] = arr_23 [i_1] [11];
                            var_26 ^= 13739104102976202290;
                            var_27 = max(((((arr_25 [8] [i_1] [i_4 + 1] [i_7 + 1]) < (arr_25 [i_1] [i_4 + 3] [i_4 + 1] [i_7 - 3])))), var_10);
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_28 = 13739104102976202290;
                            arr_31 [i_1] [6] [12] [i_1] [12] [8] = (min((arr_19 [i_6 + 1] [i_7 - 1]), (max(2147483647, 2992425277143062588))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_34 [i_10] [i_10] = (arr_1 [i_1]);
            arr_35 [i_10] [i_10] [i_1] = (arr_4 [i_1]);
            var_29 = (arr_2 [i_1]);
            var_30 ^= (arr_15 [i_1]);
        }
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_31 = (((arr_33 [12]) - 1));
        arr_39 [i_11] [i_11] = arr_5 [i_11] [i_11];
        var_32 ^= (max(12409, ((7366 ? ((max((arr_22 [3] [8] [i_11] [i_11] [9] [i_11]), var_2))) : (min((arr_25 [i_11] [3] [4] [12]), (arr_5 [i_11] [7])))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = -var_0;

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                arr_49 [i_12] [i_12] [11] [i_12] = (!0);
                var_33 = (arr_37 [i_14]);
            }
            var_34 ^= (arr_43 [i_13]);
            arr_50 [i_12] = (((arr_4 [i_13]) * -28729));
            arr_51 [i_12] = ((+(((arr_30 [i_12] [i_12] [i_12] [i_12] [i_13]) ? var_2 : var_10))));
            var_35 ^= (arr_26 [i_12] [i_12] [i_12] [i_12] [i_12]);
        }
    }
    var_36 = var_5;

    /* vectorizable */
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        var_37 += (arr_52 [i_15]);
        var_38 = arr_52 [7];
        arr_54 [i_15] = (arr_53 [i_15]);
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
    {
        var_39 = 53127;
        var_40 &= (!1522884431);
        arr_57 [i_16] = ((((arr_56 [i_16] [i_16]) < ((((arr_56 [i_16] [21]) || 1522884434))))));
        arr_58 [i_16] [i_16] = 2777864595;
    }
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        var_41 = (min(var_41, (arr_59 [i_17] [i_17])));
        arr_63 [1] [0] = (arr_59 [i_17] [19]);
        arr_64 [i_17] [i_17] = ((~(~53127)));
        arr_65 [i_17] = var_3;
    }
    #pragma endscop
}
