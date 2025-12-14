/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_4;
    var_16 = var_5;
    var_17 = (min(var_17, (((((min(-659091007, 0))) || ((var_12 && ((max(var_2, var_11))))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [i_0])));
        var_19 = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_20 = ((((-32767 - 1) ? 24 : 1)));

            for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
            {
                var_21 = 50;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_15 [16] [16] [18] [i_2] [12] = (((1 ? 18446744073709551592 : (arr_10 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]))));
                            arr_16 [i_2] [i_2] [0] [i_2] [i_2] [1] [i_2] = (32766 ? (arr_1 [i_1 - 1]) : (arr_2 [i_4 + 1] [i_3]));
                        }
                    }
                }
                var_22 |= ((((arr_1 [i_0]) ? 0 : var_8)));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
            {
                arr_20 [i_5] [i_1] [i_0] = ((18446744073709551588 ? (((!(arr_17 [i_0] [i_1] [i_0])))) : (arr_14 [i_0] [i_0] [i_0] [i_0] [3])));
                arr_21 [i_0] [i_1] [i_5] |= 4294967295;
                var_23 = (arr_5 [i_1 + 1] [i_5]);
            }
        }
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_24 = (-((40099 ? (((arr_8 [i_0] [i_0] [6] [i_6 - 1]) ? var_12 : var_9)) : (arr_11 [i_0] [i_0] [i_6]))));
                var_25 = (max(((max(((~(arr_25 [11] [i_6] [i_7]))), ((~(arr_4 [i_6] [i_7])))))), (((1476831211 ? (arr_13 [i_0] [i_6] [i_0] [i_6] [i_0] [i_7] [i_7]) : (arr_23 [i_6] [i_6]))))));
                var_26 = (max((((~(arr_6 [i_6 - 1] [i_6 - 1])))), (((arr_12 [i_0] [i_6 - 1] [i_6 - 1] [i_0] [i_0]) ? (arr_12 [i_0] [i_6] [12] [i_7] [i_7]) : (arr_12 [11] [i_6] [i_6 + 1] [i_7] [i_7])))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_31 [i_6] = (arr_13 [i_0] [i_6] [i_8] [i_6] [i_8] [i_6] [i_8]);

                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    var_27 = (max(var_27, (arr_6 [i_0] [i_6 + 1])));
                    arr_34 [i_9 - 2] [i_6] [i_6] [10] |= arr_8 [i_0] [i_6] [i_8] [1];
                    var_28 = (arr_26 [i_6 + 4] [i_6 + 2] [i_9 - 2]);
                    arr_35 [i_0] [10] [i_6] [10] [i_0] &= (!18446744073709551592);
                }
            }
            var_29 = ((-(((arr_3 [i_6]) ? (arr_5 [15] [i_0]) : ((-(arr_2 [i_6 - 1] [1])))))));
        }
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] [i_10] = 30;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                {
                    var_30 = (max(var_30, ((-(min((arr_14 [15] [i_11] [i_12] [i_12 + 2] [i_11]), ((~(arr_33 [7])))))))));
                    var_31 = (max(var_31, (arr_18 [i_10 + 1] [i_10] [i_11] [i_12 - 2])));
                    var_32 = ((var_6 - (arr_11 [i_10] [i_10 + 1] [i_10])));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
    {
        arr_47 [i_13] [i_13] = 0;
        var_33 = (--7832916455569334975);
        var_34 = 1;
    }
    #pragma endscop
}
