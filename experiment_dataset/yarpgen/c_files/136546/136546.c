/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0 + 1]) << (var_1 - 36301)))) ? (max(var_16, var_10)) : (arr_1 [i_0 - 1]));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_18 *= (((arr_4 [4] [i_0 + 1] [4]) % (arr_4 [10] [i_0 - 2] [10])));
            arr_5 [i_0] [i_0] = (((arr_1 [i_0]) < ((((!var_3) <= (((arr_1 [i_1]) ? var_8 : (arr_4 [i_0 - 2] [i_0 - 2] [i_0]))))))));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] = (((-8500 ? (arr_3 [i_0] [i_0]) : (arr_4 [i_0 - 3] [i_0 - 3] [i_0]))));
                var_19 = (~var_0);
            }
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_20 = var_13;

            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_21 |= ((((-8500 ? (arr_4 [0] [1] [i_4]) : var_5))) ? ((var_3 ? -8500 : (arr_11 [i_0 - 2] [8]))) : var_1);
                var_22 = (arr_3 [i_0 - 2] [i_0 - 2]);
                arr_15 [i_0] [i_3] [i_0] = ((~(arr_14 [i_0 + 1] [i_0 + 1] [i_3 + 1] [i_4 - 1])));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {

                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    var_23 -= (((arr_8 [i_5] [i_0 + 1] [3]) / var_2));
                    var_24 = (arr_4 [i_0 - 2] [i_0 - 2] [i_0]);
                    var_25 = ((((var_1 ? 8500 : (arr_7 [i_0] [i_0] [i_5] [3]))) & (arr_1 [i_6])));
                }
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    var_26 = var_16;

                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        arr_27 [i_0 + 1] [i_0] [i_5] [i_7] [i_8 - 1] [i_8] = (((arr_20 [i_0] [i_0] [i_0 - 1] [i_7]) ? var_5 : (arr_20 [i_7] [i_0] [i_0 - 2] [10])));
                        arr_28 [i_7 + 1] [i_0] [i_7 + 1] [i_7 + 1] [i_0] = var_16;
                        arr_29 [i_8] [i_8] [i_8] [i_5] [i_8] [i_8] [14] |= ((~(!-8473)));
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        arr_34 [i_0 + 1] [12] [i_0] [i_7 - 2] [i_0] [i_7 - 2] = (arr_30 [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 + 3] [i_7 + 2] [i_7 - 1]);
                        var_27 ^= -18704;
                    }
                    var_28 += (~var_6);
                }
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    var_29 = -var_16;
                    arr_37 [i_0] [i_0] = var_11;
                }
                arr_38 [i_0] [i_0] [i_0] = 1787838350568092024;
                var_30 = ((var_15 ? (arr_3 [i_3 + 1] [i_0 - 3]) : var_0));
            }
        }
        arr_39 [i_0] = var_3;
    }
    #pragma endscop
}
