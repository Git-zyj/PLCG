/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3923418476;
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_3 [2] [2] |= var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((var_5 ? (((var_3 ? var_3 : var_1))) : 760475826));
                    arr_10 [i_2] |= (((arr_7 [i_0] [i_0 + 3] [i_0 + 3]) ? (arr_4 [i_0 - 1] [i_0 + 3]) : (!var_5)));
                }
            }
        }
        arr_11 [i_0] [i_0] = (arr_4 [i_0] [10]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = var_1;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [0] [i_4] [i_3] = (((arr_13 [i_4] [i_6]) ? var_3 : (arr_12 [3] [8])));
                        arr_25 [1] [i_3] [i_5] [i_6] = (((arr_14 [i_6]) ? 371548820 : 31523));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_15 = (((arr_26 [i_7]) ? (arr_26 [i_8]) : var_0));

            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                var_16 = var_2;
                arr_33 [i_7] [3] [i_9] [i_9] = (((arr_22 [i_9] [13] [i_9 - 1] [i_9] [i_9] [i_9 + 1]) ? 294932748 : var_3));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_17 = ((760475814 ? 4107027062 : (arr_14 [i_10])));
                arr_37 [i_7] [i_8] [i_7] = ((-(arr_18 [i_8])));
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {

                for (int i_12 = 2; i_12 < 13;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_48 [i_7] [i_7] [10] [9] [i_7] = (((arr_35 [i_7] [7]) ? var_0 : var_4));
                        var_18 = (((arr_32 [i_12 + 2] [i_12] [i_12] [i_12 - 2]) % 974482147));
                    }
                    var_19 = 1286315680;
                    var_20 = 1;
                    arr_49 [i_7] = (((arr_44 [i_12 + 3] [i_12 + 2] [i_12 + 2] [1] [i_12 + 4] [i_12 + 3]) ? (arr_44 [i_12 + 3] [i_12] [i_12 + 3] [11] [i_12 + 4] [i_12 - 1]) : (arr_17 [i_12 + 4] [i_12 - 2])));
                    var_21 = (~var_3);
                }
                var_22 = (arr_28 [i_11]);
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            var_23 -= ((-((var_5 ? 4294967295 : var_10))));
                            var_24 = arr_41 [16] [16];
                            arr_59 [i_7] [i_7] [i_7] [i_7] [i_7] [3] [5] = 18526;
                        }
                    }
                }
            }
        }
        var_25 = (min((min(var_5, 3320485148)), ((((arr_42 [i_7] [i_7] [i_7] [i_7]) + (((var_9 ? (arr_40 [i_7] [i_7] [i_7] [i_7] [7] [i_7]) : -720014751))))))));
        var_26 = (min(var_26, ((min(1, var_7)))));
        var_27 = ((3534491454 ? ((~(arr_39 [i_7]))) : (max((arr_27 [i_7] [i_7]), var_6))));
        arr_60 [i_7] [12] |= ((-(((!(arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
    }
    #pragma endscop
}
