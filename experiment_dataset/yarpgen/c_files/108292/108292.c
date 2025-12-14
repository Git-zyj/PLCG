/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 26;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = (min(var_18, (((-((var_9 ? 31 : var_5)))))));
            var_19 = 31;
            arr_5 [12] = (arr_2 [i_1] [i_0] [13]);
            arr_6 [2] = (arr_4 [i_0] [i_1]);
            arr_7 [0] [5] [i_0] = (arr_1 [i_1]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 = 17;
            arr_12 [18] = (min((min((((var_3 ? var_12 : 128))), var_3)), var_10));
            var_21 = ((23 ? (arr_4 [i_0] [i_0]) : (min(var_12, (arr_8 [i_2])))));
            var_22 = ((((((7 ? 8 : var_16) < (arr_9 [i_2] [i_2] [i_0]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        var_23 = var_8;
                        arr_20 [i_5] [i_3] [i_4] [18] = (arr_8 [i_5]);
                        arr_21 [i_0] [i_5] = var_11;
                    }
                }
            }
            arr_22 [6] [i_3] [i_0] = (var_2 ? ((var_15 ? 127 : var_12)) : (((arr_13 [1]) % var_1)));
            arr_23 [i_0] = (arr_19 [i_0] [4] [1]);
            var_24 = (-127 - 1);
        }
        var_25 = var_14;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_26 = (((var_10 + 2147483647) << (((min(((var_11 ? var_7 : -1)), ((248306385 ? (arr_3 [i_7]) : var_1)))) - 930397961))));
                arr_32 [i_6] = (-((var_0 ? var_0 : (arr_17 [i_0] [i_7]))));
                var_27 = (min(var_27, (arr_17 [i_6] [i_7])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_28 = (min(var_28, var_5));
                            arr_38 [i_0] [7] [i_9] [16] [i_9] = -426314112;
                        }
                    }
                }
                arr_39 [i_0] [1] [i_0] [4] = (-30 ? ((~(arr_8 [i_0]))) : (arr_25 [4] [i_6] [i_6]));
            }
            var_29 |= (min(1194220223, (~1)));
        }
    }
    var_30 = (((~(1856525489 / var_5))));
    #pragma endscop
}
