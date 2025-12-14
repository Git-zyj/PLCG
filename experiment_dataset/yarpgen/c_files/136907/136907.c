/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_20 = ((~(arr_4 [i_1] [i_1] [i_1])));
            var_21 = (arr_1 [i_0] [1]);
            var_22 = (((arr_3 [i_1] [i_1] [i_0]) && var_5));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_23 = ((-((-(arr_3 [i_0] [i_0] [i_3])))));
                arr_11 [16] [i_0] = (var_3 ? (arr_6 [14] [i_2]) : 1561125519);
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_17 [i_5] = -828950443;
                        arr_18 [16] [i_5] = var_5;
                    }
                }
            }
            var_24 = (min(var_24, (((828950442 ? 828950433 : (arr_7 [11] [i_2] [i_2]))))));
            var_25 = (max(var_25, 52163));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_21 [i_0] [21] [i_0] = (!var_4);

            for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
            {
                arr_26 [i_6] [i_6] = (arr_0 [i_7 - 2]);
                arr_27 [i_7] [i_6] [i_6] = var_10;
            }
            for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
            {
                var_26 = (arr_16 [i_0] [i_0] [i_8 - 2] [i_8 + 1] [i_8]);
                arr_31 [10] [2] [10] [10] = (~-68);
                var_27 = (((arr_23 [i_8 - 1] [i_0] [i_8 - 1]) ? (arr_29 [i_8]) : var_3));
            }
            var_28 = (((arr_20 [i_0] [i_6] [i_0]) < 33712));
        }

        for (int i_9 = 4; i_9 < 20;i_9 += 1)
        {
            var_29 = (arr_24 [i_9 + 3] [i_9 - 2] [i_9] [i_9 + 1]);
            arr_35 [6] = (((arr_10 [i_9 + 1] [7] [i_9 + 2] [i_0]) % (arr_10 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_9 + 1])));
            var_30 = ((((((-2147483647 - 1) != 0))) - (arr_23 [i_0] [i_9 + 2] [1])));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_31 = -33;
            var_32 = var_8;
            arr_39 [i_10] [i_10] [i_10] = (((arr_7 [i_0] [i_10] [i_0]) > 26683));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            var_33 = (arr_41 [i_0] [i_0]);
            var_34 = (max(var_34, (-2147483647 - 1)));
            var_35 = (((var_2 / var_12) ? -var_19 : (arr_20 [i_0] [i_11] [i_11])));
            var_36 = ((var_8 ? (arr_29 [i_0]) : 2557243014));
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 4; i_13 < 21;i_13 += 1) /* same iter space */
            {
                var_37 = (min(var_37, ((((arr_25 [i_13] [i_13 - 1] [i_13 - 2] [i_13 - 2]) ? (arr_25 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1]) : (arr_25 [18] [i_13 - 4] [18] [i_13 - 4]))))));
                arr_46 [i_13] [i_0] [i_0] = 52146;
            }
            for (int i_14 = 4; i_14 < 21;i_14 += 1) /* same iter space */
            {
                arr_49 [10] [i_12] [i_12] [i_14] = (arr_4 [i_0] [i_0] [i_0]);
                var_38 = (arr_5 [i_14 + 2] [i_14 + 1] [i_14 - 3]);
            }

            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                var_39 = ((41 ? -65535 : 673418404));
                arr_53 [i_12] [i_12] [i_12] [i_12] = ((-(((arr_14 [i_0]) ? var_18 : 45982))));
                arr_54 [i_12] = -7446;
                var_40 = (-76 - var_5);
            }
            arr_55 [i_0] [i_0] [i_0] = (((68 | -1068360311) ? (arr_2 [i_0] [i_0] [i_12]) : (~var_2)));
            arr_56 [i_0] [i_0] [i_0] = (121 - 13390);
        }
        arr_57 [14] = (arr_5 [i_0] [i_0] [i_0]);
        var_41 = (min(var_41, (((var_16 | (arr_3 [i_0] [i_0] [i_0]))))));
    }
    var_42 = 68;
    #pragma endscop
}
