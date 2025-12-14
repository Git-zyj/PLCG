/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = var_6;
                    arr_8 [i_2] [i_1] [3] = -250;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_17 = ((6559097963457865789 < (arr_0 [i_3])));
        var_18 = ((((6166286819287853243 ? (arr_9 [i_3]) : 236))) ? ((min(((-(arr_6 [i_3]))), ((min(47471, -32760)))))) : ((0 ? ((1 ? 1 : -4269185693732859792)) : (32767 > 11157))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_19 = ((((((-9053718001389485734 ? var_16 : 4294967286))) ? var_16 : (arr_11 [i_4] [i_3]))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_25 [i_3] [i_4] [8] [15] [i_6] [i_3] = (((((((var_11 ? (arr_15 [12] [12] [i_5]) : 1)) * 0))) ? ((((((min(-27668, 18))) + 2147483647)) << (9223372036854775795 - 9223372036854775795))) : var_1));
                            arr_26 [i_3] [i_6] [i_5] [6] [i_7] [i_7] [i_7] = (~var_12);
                        }
                    }
                }
            }
            var_20 = (((~(arr_19 [i_3] [i_4] [i_3] [i_3]))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_29 [i_3] [i_8] = ((((max(((~(arr_6 [i_8]))), (arr_17 [i_3] [i_8] [i_3] [i_3] [i_3] [i_3])))) ? ((-(~2264663543))) : (((var_1 >> ((1 >> (4294967295 - 4294967274))))))));
            var_21 = (min(var_21, (arr_27 [i_8])));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_33 [i_3] = ((-9223372036854775807 - 1) ? 2368567175 : 4294967292);
            arr_34 [i_3] = ((min(9, (-27294 & 26968))));
            var_22 = (max(var_22, (!78)));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_23 = (((arr_18 [i_10] [i_10] [i_10] [i_10] [i_10]) ^ (arr_18 [i_10] [i_10] [4] [i_10] [i_10])));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_24 = (max(var_24, var_16));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_25 = ((var_2 ? -26421 : var_12));
                                var_26 ^= 13354;
                                var_27 += (((((arr_24 [i_14] [i_13 - 1] [23] [i_10] [i_10]) > 13174)) && var_2));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, var_6));
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_29 = (139 + 1);
        arr_50 [i_15] = (arr_21 [15] [i_15] [i_15] [i_15]);
        var_30 = (min(8, 12));
    }
    for (int i_16 = 2; i_16 < 17;i_16 += 1)
    {
        arr_53 [i_16] = var_9;
        var_31 = ((-((((arr_11 [i_16] [i_16 + 1]) ? var_3 : 13335249801054672731)))));
    }
    #pragma endscop
}
