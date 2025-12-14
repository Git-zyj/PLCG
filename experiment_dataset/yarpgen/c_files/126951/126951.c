/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (234 ? 234 : var_10);
    var_13 = 227;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (!2147483647);
        arr_3 [i_0] = ((!(!var_9)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (arr_1 [i_1]);
        arr_6 [i_1] [i_1] = 188;
        var_16 = ((227 ? (arr_2 [i_1]) : (((arr_2 [i_1]) ? 10675132163836667216 : (arr_4 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_1] [i_3] [i_3] [i_3] [i_4] [i_4] = (!4113178371385695594);
                        arr_17 [i_1] [i_2] [i_1] [i_3] [i_2] [i_2] = ((2 > ((var_11 ? var_8 : var_9))));
                        arr_18 [i_3] [i_3] = (arr_14 [i_3 - 1] [i_2] [i_3 - 1] [i_2] [i_3] [i_3 - 1]);
                    }
                    var_17 = (arr_2 [i_3 + 1]);
                    var_18 = -8524879339692343630;
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 = ((-(29 >= 61018)));
                                var_20 = 18431274305398046538;
                                var_21 = (((arr_21 [i_5] [i_3] [i_3] [i_1]) * (((7771611909872884399 ? 227 : var_3)))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = (arr_7 [i_1]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_27 [i_7] = 215;
        arr_28 [i_7] = var_2;
        var_23 = (arr_7 [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_7] [i_9] [i_10] [i_9] = (((arr_1 [i_8 - 1]) ? ((var_6 ? (arr_38 [i_11] [i_8] [i_8]) : (arr_4 [i_7] [i_8]))) : var_4));
                                var_24 = (arr_8 [i_8 - 1]);
                            }
                        }
                    }
                    var_25 = ((var_8 ? var_7 : 18446744073709551615));
                    arr_40 [i_8] [i_8] [i_7] [i_8] = -765863841;
                }
            }
        }
        var_26 = var_10;
    }
    #pragma endscop
}
