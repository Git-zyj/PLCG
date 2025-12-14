/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((-var_7 * var_10), 4153207539));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, (~-1005118013)));
        arr_3 [i_0] [4] |= (((((-731640650 ? ((((var_1 < (arr_0 [4]))))) : ((18446744073709551615 ? 119 : 9052718370758770546))))) && var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = 62;
                    arr_8 [i_1] [i_2] [i_2] [i_2] = (arr_4 [i_1] [i_1]);
                    var_15 = (((arr_2 [i_2]) << (var_10 - 209)));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_16 = 109;
                    arr_16 [i_5] [i_3] [i_3] = (+(((((arr_14 [i_0] [i_3] [i_3] [i_4] [i_5]) ? (arr_5 [18] [18] [i_4]) : var_10)))));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_17 = (min(((12 << (((arr_15 [i_0] [i_6]) - 6762)))), ((1 ? (arr_5 [9] [1] [i_4]) : (arr_5 [i_6] [i_4] [i_4])))));
                        var_18 = (1 || 9223372036854775807);
                        var_19 = (((arr_0 [i_3]) && (arr_15 [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_20 = ((var_10 ? -87 : (((arr_0 [i_0]) ? 1073741696 : -117))));
                        var_21 = (min(var_21, ((((arr_9 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_22 [i_0] [i_3] [i_4] [18] [14]))))));
                        arr_23 [i_0] [i_3] [i_4] [5] [i_7] = (((arr_19 [i_3]) | (arr_19 [i_0])));
                        var_22 |= ((((arr_0 [i_0]) ? (arr_12 [4] [i_0] [i_0] [i_0]) : var_7)));
                    }
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_26 [i_0] [i_8] [i_8] [i_0] [i_8] |= (arr_24 [i_0] [7] [i_0] [i_4] [9]);
                    var_23 ^= (((((~(arr_17 [i_0] [i_0] [10] [i_0] [i_0])))) ? -112 : 77));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_24 = var_4;
                            arr_31 [i_0] [15] [i_4] [15] [i_3] = ((4153207560 ? 1 : 3782535835));
                            arr_32 [i_3] [i_9] [17] [i_3] [i_3] = ((-(arr_0 [12])));
                            var_25 ^= 189;
                        }
                    }
                }
                arr_33 [i_0] [i_3] = var_8;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_26 = ((var_1 ? var_8 : (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_40 [i_0] [i_3] [i_4] [i_12] = ((((((22701 ? 183 : 212))) || 15)));
                        }
                    }
                }
            }
            arr_41 [i_3] = var_1;

            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                var_27 = var_6;
                var_28 = (((((arr_21 [i_13] [i_3] [17] [10] [i_3] [i_3]) ? var_4 : (arr_18 [i_0] [i_0] [1] [1] [i_0] [1] [9])))));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_29 = -29;
                var_30 |= ((-((((((22710 | (arr_14 [8] [8] [8] [13] [8])))) || (arr_15 [5] [5]))))));
            }
        }
    }
    var_31 = var_4;
    var_32 = var_1;
    #pragma endscop
}
