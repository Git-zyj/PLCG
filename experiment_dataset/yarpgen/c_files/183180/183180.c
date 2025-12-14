/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((var_12 ? var_0 : 214));
    var_17 = (((((((max(42, -69))) ? (!var_11) : ((max(110, -69)))))) ? var_10 : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, ((var_3 ? 51 : var_11))));
                        var_19 = (max(var_19, 1));
                    }
                }
            }
        }
        var_20 = ((((arr_0 [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [9] [i_0]) : var_15)));

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_21 += (!1);
            var_22 = ((var_3 ? (arr_9 [i_0] [8] [i_4] [i_4] [i_4 - 1] [i_0]) : (arr_9 [2] [i_4] [i_4] [i_4] [i_4 + 1] [i_0])));
            var_23 = (~42);
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            var_24 = (arr_0 [i_5 + 1]);
            var_25 = -147;
        }
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            var_26 &= 1;
            arr_19 [16] [16] = ((~(arr_4 [i_6 - 2] [i_6 + 1])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_27 = (min(var_27, (arr_5 [13] [i_6 - 2] [i_7])));
                            arr_26 [i_0] [i_0] [i_7] [i_0] [i_9] &= (((((5 ? var_11 : 42))) ? (arr_9 [i_9] [i_8] [i_8] [i_8] [i_6] [1]) : var_9));
                            var_28 = (!-50493154);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    {
                        var_29 *= (!(arr_27 [i_0] [i_0] [10]));
                        var_30 = (-((1 ? -2147483637 : 8)));
                        var_31 = (arr_1 [i_6 - 1]);
                    }
                }
            }
        }
    }
    var_32 = var_7;
    #pragma endscop
}
