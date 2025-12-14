/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = 36;

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_22 = ((-8286513119103123497 ? (arr_0 [i_0]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_0])));
            arr_5 [i_0] = (((arr_1 [i_1 - 2]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 - 1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_23 = ((((((arr_9 [i_0] [i_3] [i_2]) | -1651695458))) ? ((-36 ? 36 : (arr_7 [i_2] [i_2]))) : -42));
                        arr_12 [i_0] [i_0] |= ((arr_7 [i_1 - 2] [i_1 + 2]) ? ((1 ? -1205678734 : 20642)) : (193 * -42));
                    }
                }
            }
            var_24 = (max(var_24, (((!(58500 <= var_6))))));
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            arr_16 [i_4] [i_0] [i_0] = ((95 > (arr_0 [i_4 + 1])));
            var_25 += 32767;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_26 = (max(var_26, (~var_19)));
            var_27 = (arr_2 [3] [3] [4]);

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_28 ^= 7055;
                var_29 &= (((arr_10 [i_6]) >> ((((5820 ? 3401002865422651811 : 255)) - 3401002865422651780))));
                var_30 += 62;
                var_31 &= (((arr_18 [i_0]) ? -70 : (arr_18 [i_0])));

                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    var_32 = ((-(arr_17 [i_7 - 1] [i_7 + 1])));
                    var_33 = (max(var_33, 7055));

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_27 [i_6] = ((+(((arr_9 [i_7] [3] [i_7]) ? -70 : -70))));
                        var_34 -= var_10;
                    }
                    var_35 = (min(var_35, ((((((284519030 ? -1027114462 : (arr_14 [i_6])))) ? (arr_1 [i_7 - 1]) : 1)))));
                }
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_36 = 65266;
                            arr_38 [i_0] [i_0] |= (arr_33 [i_0] [i_0] [i_0] [i_0]);
                            var_37 = (arr_7 [i_9] [i_9]);
                        }
                    }
                }

                for (int i_12 = 2; i_12 < 8;i_12 += 1)
                {
                    var_38 = (min(var_38, ((((arr_10 [i_0]) >= (arr_23 [i_0] [i_5] [i_9] [i_12]))))));
                    var_39 ^= -var_18;
                    var_40 = (((arr_15 [i_12 + 3] [i_12 - 1]) <= 32767));
                    arr_41 [i_0] [i_5] [i_9] [i_12] [i_12] = (arr_32 [i_12] [i_12] [i_9] [i_12 + 3]);
                }
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_44 [i_13] [i_13] [i_13] [i_13] = 109;
                arr_45 [i_0] [i_13] = (((arr_39 [i_0] [i_5] [i_13] [i_5]) ? var_19 : (arr_42 [i_13])));
            }
        }
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        var_41 ^= (arr_46 [i_14]);
        arr_49 [10] [i_14] = (((((arr_46 [i_14]) == (arr_48 [i_14]))) ? 284519030 : ((~(arr_46 [i_14])))));
        arr_50 [6] = var_18;
    }
    #pragma endscop
}
