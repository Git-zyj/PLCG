/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_11;
    var_17 |= var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 -= var_2;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 = (arr_2 [8]);
            var_20 = (min(var_20, (~18102494923497358332)));
            var_21 = 34685;
            arr_4 [i_0] = ((var_13 ^ 31) ? var_7 : var_12);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_22 = ((~(arr_3 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        var_23 = ((-((var_8 + (arr_9 [i_4] [8] [5])))));
                        var_24 = 0;
                        var_25 = arr_12 [6] [i_2] [i_4 + 1];

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_26 *= ((-(arr_13 [i_0] [i_0] [i_4 - 1] [7] [i_0])));
                            var_27 -= ((+((var_3 ? (arr_14 [i_0] [i_4] [i_0] [i_0]) : (arr_2 [i_0])))));
                            var_28 = ((286430779 ? 179430611 : 2));
                            var_29 ^= arr_6 [i_0] [i_0] [i_0];
                            arr_16 [i_0] [i_0] [i_0] [i_4 + 1] [i_5] |= ((var_0 ? (arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1]) : ((((arr_7 [12] [i_2] [i_2] [i_2]) ? var_15 : var_4)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_30 = ((107 ? (arr_13 [19] [9] [i_6] [i_6] [i_6]) : (arr_7 [i_0] [i_0] [i_6] [i_6])));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_31 = 36028728299487232;
                var_32 += (((arr_14 [13] [9] [i_7] [9]) / var_6));
                var_33 = ((10 / ((var_14 ? -29935 : var_11))));
                arr_21 [i_0] [i_6] [i_7] = ((~(var_2 - 286430775)));
                var_34 |= (~86);
            }
        }
        var_35 = var_3;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_24 [12] [2] = ((((((0 || (arr_7 [12] [i_8] [i_8] [i_8]))))) == (((arr_5 [i_8] [3]) ? var_8 : (arr_22 [i_8])))));
        arr_25 [i_8] [10] |= var_7;
    }
    var_36 = var_2;
    #pragma endscop
}
