/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [9] [i_1] [i_2] [5] [21] [i_4] [1] = (arr_10 [i_4 - 1] [1] [19] [i_4 - 1] [i_4 + 1]);
                            arr_16 [i_2] = (arr_1 [i_4 + 1] [i_4 + 1]);
                            var_11 = 9223372036854775807;
                            var_12 &= (((((15 ? -9223372036854775807 : 1290964286))) ? 9223372036854775807 : (arr_10 [i_4 + 1] [16] [i_4 + 1] [i_4] [i_4 + 1])));
                        }
                    }
                }
            }
            var_13 = ((9223372036854775807 ? 4447846700843763287 : (arr_3 [i_0])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    {
                        var_14 = var_6;
                        arr_21 [i_6] = (((-9223372036854775807 ? 0 : (arr_10 [11] [1] [i_5] [1] [2]))));
                        arr_22 [16] [i_6] [8] [7] [i_6] [13] = ((arr_9 [i_6 - 3] [i_6 - 1] [i_1]) ? (arr_9 [i_6 - 2] [i_6 - 2] [15]) : (arr_9 [i_6] [i_6 - 1] [21]));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_15 = (arr_14 [i_0] [18] [i_0] [i_0] [i_0]);
            var_16 &= (((arr_5 [i_0] [i_0] [i_7]) ? var_4 : 9223372036854775789));
            var_17 = -183;

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_18 = (1 || 65535);
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_32 [14] [14] [i_7] = (((arr_23 [i_0] [i_7] [i_8]) & (-9223372036854775807 - 1)));
                            arr_33 [8] [0] [i_8] [14] [17] = (((arr_29 [i_10 - 1] [6] [i_10 + 1] [6] [i_10]) ? 98 : (arr_29 [i_10 - 1] [1] [i_10 + 1] [i_10] [4])));
                        }
                    }
                }
                var_19 = (min(var_19, (10161425640972659392 % 668)));
            }
        }
        var_20 &= (arr_25 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_36 [i_11] = (((1904409140 ? 215091632673120049 : var_1)));
        var_21 = (var_3 > 9223372036854775807);
        var_22 = (arr_24 [14] [13] [22]);
    }
    var_23 = (((((var_8 ? (~var_7) : ((var_3 ? var_10 : 242))))) ? 18231652441036431567 : (9223372036854775807 % 2147483646)));
    var_24 = ((~(var_10 - 12596907966238177986)));
    var_25 = ((((-40 || var_8) ? ((2620894941 ? var_7 : 2469900124094382931)) : 16303)));
    #pragma endscop
}
