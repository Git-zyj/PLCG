/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((9057866496726180787 ? 152 : (((var_11 || var_4) ? var_7 : var_1))));
    var_15 = ((var_11 & ((max((var_4 % var_1), (var_5 - 1))))));
    var_16 = (-112 - 29798);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [4] [i_2] [i_2] [i_2] [i_2] = (((arr_0 [i_3 + 2] [i_0 - 1]) ? (arr_0 [i_3 - 2] [i_0 + 1]) : (arr_0 [i_3 - 1] [i_0 + 1])));
                        var_17 = var_2;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [1] [1] [i_6] [i_5] [15] [6] [i_0] &= (((arr_14 [i_0 + 2] [i_0 + 1]) ? (arr_14 [i_0 - 1] [i_0 + 1]) : (arr_14 [i_0 - 1] [i_0 + 1])));
                            arr_20 [6] = var_4;
                        }
                    }
                }
            }
            var_18 += ((arr_1 [i_0 + 2]) && var_9);
            arr_21 [8] [8] [i_1] = var_12;
        }
        var_19 = (min(var_19, (arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])));
        var_20 = (min(var_20, ((((((arr_14 [i_0 + 1] [i_0 + 2]) ? var_0 : var_5)) >= ((min((arr_14 [i_0 + 2] [i_0 + 1]), (arr_14 [i_0 + 1] [i_0 - 1])))))))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_21 += (min(((((var_4 == (arr_23 [17] [i_7]))) ? ((9292098075089196646 ? 1 : var_9)) : -21830)), (max(var_9, 83))));
        arr_24 [i_7] = (arr_23 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_27 [i_8] = ((8232222844268556724 ? (arr_9 [i_8] [i_8] [i_8]) : var_5));

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                var_22 = var_5;
                var_23 = (max(var_23, (arr_11 [i_8] [i_9] [i_10])));
            }

            for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
            {
                var_24 = (((((14455334003849144479 ? 10214521229440994891 : 42473))) ? 127 : var_12));

                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_25 |= (var_8 || 1436553540);
                        arr_41 [i_8] [i_8] [i_9] [i_11] [i_11] [i_13] [4] = ((var_11 || (arr_15 [i_13] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12 + 1])));
                    }
                    var_26 = (((((arr_39 [i_8] [i_8] [i_11] [i_12 - 2] [i_8]) / var_9)) % ((var_6 ? (arr_28 [i_8] [i_8] [i_12 + 1]) : (arr_16 [i_12] [i_9] [i_9] [i_9] [i_9] [i_8])))));
                }
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            arr_50 [i_16] [i_15] [3] [2] [i_8] = (arr_26 [i_8]);
                            arr_51 [10] [i_9] = (arr_15 [i_8] [i_9] [i_14] [i_15] [i_16] [i_16]);
                        }
                    }
                }
                var_27 += (((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [4]) ? 104 : (arr_31 [i_8])));
                var_28 = 1;
            }
        }
    }
    #pragma endscop
}
