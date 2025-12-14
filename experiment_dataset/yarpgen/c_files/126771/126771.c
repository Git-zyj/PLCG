/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((1 ? ((((~2147483647) != -5638721741381833204))) : ((((67108863 / var_12) > var_13)))));
    var_15 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = 2290991679;
        arr_4 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (!-0);
        arr_9 [1] = var_0;
        var_18 |= ((1 ? 4294967295 : 57554));
        var_19 = (min(var_19, (!2120235392)));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_20 = arr_8 [i_2];
            var_21 = (arr_6 [i_1] [1]);
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_17 [i_3] [i_3] [i_3] = ((~(arr_15 [i_3 + 1])));
            var_22 = ((!(!1)));
        }
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            var_23 = (arr_11 [i_1] [i_4 + 4] [5]);
            arr_20 [i_4] [i_4] = (((arr_12 [i_1] [i_4 + 2] [i_1]) != 1092036656));
            arr_21 [i_4] = 9223372036854775807;
            var_24 ^= (((arr_10 [i_4 - 1] [i_4 - 2]) << (((arr_10 [i_4 + 4] [i_4 + 1]) - 3164343939678165875))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_29 [i_4] [i_4 + 4] [i_5] [i_6] = var_6;
                        arr_30 [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = (!535730126);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_25 = ((~(arr_0 [i_7])));
        var_26 = (arr_23 [i_7] [i_7] [i_7] [1]);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_27 = (((((arr_24 [i_8] [i_8]) ? (-2147483647 - 1) : (arr_6 [i_8] [i_8]))) <= ((((arr_33 [i_8]) - (arr_33 [i_8]))))));
        arr_35 [i_8] [i_8] = ((~((~(arr_5 [i_8])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_28 = (arr_8 [i_8]);
                    var_29 = (~28540);
                    arr_42 [i_8] [i_10] [15] = (arr_23 [13] [13] [i_10] [i_9]);
                    var_30 = (!var_10);
                }
            }
        }
    }
    #pragma endscop
}
