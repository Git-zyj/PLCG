/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_14;
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (~(arr_1 [i_0]));
        var_19 = (1 != 16383);

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_20 = ((((!(-32767 - 1))) ? (arr_1 [i_0]) : ((-(arr_4 [i_1 - 3] [i_1 - 2])))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_21 = (~16672657769113008372);
                            var_22 = (~var_13);
                            var_23 = ((((28 < (((!(arr_12 [i_0] [i_1 + 1] [i_2] [i_3 - 1] [i_4]))))))));
                        }
                    }
                }
                var_24 = (var_9 > ((~((~(-32767 - 1))))));
            }
            var_25 = ((~(!18)));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_15 [16] [16] [i_5] = 1023;
                arr_16 [i_0] [i_0] [8] [i_5] = ((!(arr_14 [i_0] [i_0] [i_0] [i_0])));
                var_26 = (-1 != 32767);
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    var_27 = (!(arr_9 [i_0] [i_6 - 1] [i_6] [i_7]));

                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        var_28 *= (arr_14 [i_6 + 3] [i_8 - 4] [i_1 - 3] [i_7 + 1]);
                        var_29 = (min(var_29, ((((arr_5 [i_1 - 3] [i_1 - 1] [i_1 - 2]) <= var_13)))));
                        var_30 += (-154560689 ^ 2901577491);
                    }
                }
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    var_31 = (arr_13 [i_0] [i_1 + 2] [i_1 + 4] [i_9 + 2]);

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_32 = (min(var_32, (((~(arr_4 [i_0] [i_10]))))));
                        var_33 = var_14;
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] = (((arr_18 [i_6 - 1] [i_6 - 1]) ^ 32748));
                        var_34 ^= ((!(arr_12 [i_10] [21] [19] [i_1] [13])));
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        arr_34 [i_0] [i_11] [i_0] [i_11] [i_0] = (((!(arr_5 [i_0] [i_0] [i_0]))));
                        arr_35 [i_11] = -25470;
                    }
                }
                var_35 |= -32761;
                var_36 = (arr_31 [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6]);
            }
            var_37 = ((~((-(arr_4 [i_1] [i_1 + 1])))));
        }
        for (int i_12 = 3; i_12 < 23;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 4; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_38 = var_12;
                            var_39 = ((~(((arr_18 [i_12] [i_12 - 2]) ? -37 : (arr_24 [i_15] [i_14] [i_0])))));
                            var_40 = (max(var_40, (arr_19 [i_0])));
                            arr_48 [15] [15] [i_13 - 3] [i_14] [i_12 - 2] [13] [i_14] = var_3;
                        }
                    }
                }
            }
            var_41 = (arr_2 [14]);
            var_42 = (min(var_9, (arr_10 [i_0] [i_12 + 1])));
            arr_49 [i_0] [i_12] = -18;
        }
        arr_50 [i_0] = (arr_24 [12] [i_0] [12]);
    }
    #pragma endscop
}
