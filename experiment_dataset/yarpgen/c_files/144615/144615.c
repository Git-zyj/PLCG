/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((!3792333378) ? 22117677 : 4999865716454811052));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (min(var_13, (((-110 ? ((359987001 ? 3934980271 : 0)) : ((((arr_6 [i_1] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_0 [i_0])))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 &= ((!(arr_1 [i_3 + 1])));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [15] [i_3] |= (var_1 ? -213 : (arr_11 [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 2] [11]));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = (arr_7 [i_0] [i_1] [i_1]);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_15 = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >= var_3));
            arr_18 [i_0] = (((arr_7 [i_0] [i_0] [3]) ? (arr_7 [i_0] [1] [i_4]) : (arr_7 [i_0] [i_0] [i_4])));
            var_16 = (7074 | 7384825539319466779);
        }
        var_17 ^= ((-(arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_18 = (min(var_18, (((((min((arr_4 [1] [i_5] [i_5]), var_4))) ? 1672768397 : ((-(~var_6))))))));
        var_19 = (((arr_6 [i_5] [i_5] [i_5]) << var_1));
        arr_23 [i_5] [i_5] = var_7;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_20 = (min(((min(var_2, 1))), var_3));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_21 = -var_11;
            var_22 = ((-6871665130852417983 ? 359987001 : ((min(359987026, (~1))))));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_23 = ((((arr_34 [i_8] [i_8]) ? var_3 : (arr_34 [7] [i_6]))));
            arr_35 [i_6] [i_6] = min(((3934980271 ? var_12 : (arr_2 [i_8 - 1]))), (min(((min(var_6, 65535))), 0)));
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            var_24 = ((-(min(3433288499619671050, -2141235833))));
            arr_40 [i_6] = ((var_7 < (arr_0 [i_9 - 1])));
        }
        var_25 = (min(var_7, 3));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_26 = (~var_2);

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        var_27 &= (arr_28 [1]);
                        var_28 = 359986983;
                        arr_52 [i_10] [i_10] [4] [i_12] [i_13] = ((~(arr_41 [i_10] [1])));
                    }
                }
            }
            var_29 = 124;
        }
        arr_53 [i_10] = -var_0;
    }
    var_30 = var_5;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 3; i_15 < 21;i_15 += 1)
        {
            {
                arr_59 [i_15] = (~-var_11);
                arr_60 [i_15] [i_15] = ((!((!(arr_46 [i_15 + 1] [i_15] [i_15 + 1] [i_15 + 1])))));
            }
        }
    }
    var_31 = var_9;
    var_32 = (min(var_32, var_11));
    #pragma endscop
}
