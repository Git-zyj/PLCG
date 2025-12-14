/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [8] = (arr_1 [7]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [4] [11] = ((-(arr_6 [4] [i_1])));
            var_15 = (((arr_2 [12] [12]) * var_12));
        }

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [1] = (((arr_5 [i_0] [i_2]) ? ((((var_5 == (arr_8 [9] [12]))))) : var_6));

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                arr_15 [1] [i_3] [i_3] [12] = (arr_4 [i_0]);

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_16 = 1;
                    var_17 = var_10;
                }
                arr_18 [i_3] = var_13;
                arr_19 [1] [i_3] [1] = -56;
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_18 = (((((arr_11 [i_2] [2] [4] [1]) - var_3)) + ((var_3 ? var_6 : 2147483647))));
                arr_22 [8] [13] [6] [14] = ((~(arr_21 [i_0] [0] [2])));
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_26 [7] = ((~((-(arr_12 [i_0] [4] [8] [i_0])))));
            var_19 = (arr_6 [12] [1]);
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            arr_31 [3] [9] [9] = (arr_6 [i_7 + 1] [10]);
            var_20 = 2147483647;
            var_21 = (var_2 / (arr_11 [i_0] [i_7 - 2] [i_7 - 1] [1]));
        }
        arr_32 [2] = ((var_12 == (arr_14 [i_0] [2] [1] [10])));
        var_22 = (~var_7);
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_23 = (arr_35 [18]);
        arr_37 [17] [1] = (((arr_36 [i_8]) == (arr_34 [19] [7])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_41 [4] [5] = (((arr_34 [i_9] [i_9]) - var_7));
        arr_42 [9] = (~var_6);
        var_24 = (arr_34 [13] [10]);
    }
    var_25 = var_7;
    #pragma endscop
}
