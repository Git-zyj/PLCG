/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!(((((536870912 ? 2132120924 : -19420))) == ((2162846379 ? 18446744073709551615 : 3758096366)))));
        var_11 = (min(var_11, 18446744073709551615));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_12 ^= (arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_13 = 6;
                                var_14 = (min(var_14, 4294967295));
                                arr_18 [i_3] = (max((min(var_6, (arr_15 [i_3] [i_5]))), ((((arr_15 [i_3] [i_2]) > var_8)))));
                                var_15 = ((((max(((2162846372 + (arr_12 [i_1] [i_3] [i_1] [i_1]))), (((var_6 ? -7 : 2132120932)))))) || (((2162846371 ? (arr_1 [i_1]) : (((arr_17 [i_3] [i_3] [i_3]) ? var_0 : 6)))))));
                                var_16 = (max((((arr_14 [i_3] [i_3]) ? -1 : ((min(var_1, (arr_16 [8] [i_1] [i_3] [2] [4])))))), (max(((min(var_8, (arr_12 [i_1] [i_1] [i_1] [i_1])))), (arr_0 [i_3])))));
                            }
                        }
                    }
                    var_17 = (((arr_5 [i_3]) ? (784474430 + var_7) : (!784474416)));
                    arr_19 [i_3] [i_3] = 6;
                }
            }
        }
        var_18 = (min(((((min(536870940, 0))) | ((var_2 ? -2108723604695440236 : var_8)))), -14));
        arr_20 [i_1] = (min(2162846371, 2013167018));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_19 = var_2;
        var_20 = (min(var_20, 1));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_21 = (min(var_21, -0));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_33 [i_8] [i_8] [i_8] = (arr_9 [i_8] [i_8]);
                    var_22 ^= (var_0 && 7);
                    var_23 = (max(var_23, 4294967295));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_24 = 63;
                        arr_37 [i_8] [i_9] = ((arr_7 [i_7] [i_8]) ? 0 : -5280);
                        var_25 += -8;
                        var_26 ^= ((0 ? (arr_7 [i_8] [i_7]) : (arr_7 [i_8] [i_9])));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_27 = (((arr_12 [i_7] [i_7] [i_9] [i_11]) != (arr_12 [i_7] [15] [15] [i_9])));
                        var_28 = (max(var_28, (-2147483647 - 1)));
                    }
                }
            }
        }
        var_29 *= (((~var_10) ? ((((arr_0 [i_7]) ? var_5 : (arr_11 [i_7])))) : ((var_10 ? var_3 : 2134760607))));
    }
    var_30 = var_6;
    var_31 &= (min((((var_2 >> 1) - var_0)), var_2));
    var_32 = 1;
    var_33 = (max(var_33, var_2));
    #pragma endscop
}
