/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(47408, 14610));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (min(((-(arr_0 [i_0] [i_1]))), (((((arr_0 [i_0] [i_1]) << (-26029 + 26043)))))));
                var_18 ^= -28;
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] = var_16;

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, var_1));
                            var_20 = (min(var_20, ((((((arr_9 [i_2]) != ((-28 ? (arr_5 [i_4] [0]) : -1525538368)))) ? (arr_0 [0] [0]) : (arr_12 [1] [1] [i_6]))))));
                            var_21 ^= (((((((var_16 ? 27 : var_7))) ? (min(199211923, 2203559104)) : (((max(var_0, var_10)))))) < (((((-14611 ? -14611 : -28)) * (3292807149866577048 && var_1))))));
                            var_22 = (((((var_12 ? (arr_18 [i_2] [i_2] [i_4] [i_6]) : (arr_18 [i_2] [i_2] [i_2] [i_2])))) ? ((var_10 ? ((65535 ? 0 : 26028)) : (arr_16 [i_5] [i_2]))) : var_9));
                        }
                    }
                }
            }
            arr_24 [i_2] = (arr_11 [i_2] [i_2]);
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    {
                        var_23 = ((~(arr_2 [i_7] [i_7] [i_9 + 1])));
                        var_24 *= (max(-7962588613774138972, (((-(~var_8))))));
                        var_25 = (!var_1);
                    }
                }
            }
        }
        var_26 = (min(var_26, (((((((((var_14 ? var_5 : var_16))) ? -var_15 : var_10))) ? 28 : (2091408191 > -15826))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_27 = (~var_4);
                        var_28 = ((!(((~(arr_44 [i_13] [i_11] [i_11] [i_11]))))));
                        arr_48 [i_10] [i_13] [i_12] [i_13] [i_13] = (((arr_40 [i_13] [i_11] [i_13]) ? (arr_42 [i_10] [i_11] [i_12] [i_13]) : (arr_42 [i_10] [i_11] [i_12] [i_13])));
                        var_29 &= var_1;
                    }
                }
            }
        }
        var_30 = var_1;
    }
    #pragma endscop
}
