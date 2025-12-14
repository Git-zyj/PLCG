/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((1 ? 9223372036854775807 : var_5));
    var_15 ^= (min(var_1, (((((1 ? 1889472504810996622 : 1))) ? var_2 : (var_9 && 5338192933126306911)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                var_16 = ((((arr_4 [i_0] [i_1]) ? 65535 : (arr_2 [i_0] [i_2]))));
                var_17 = ((+(((arr_7 [i_0] [i_1] [i_1]) ? -9223372036854775800 : -125))));
                var_18 = ((15671 ? var_11 : 1));
            }
            var_19 = (((arr_3 [i_1 - 4] [i_1 + 3] [i_1 + 1]) - var_10));
            arr_8 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_0] [i_1]);

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_20 ^= (((((arr_9 [i_0] [7]) - 240)) & (!-9223372036854775787)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_16 [i_4] = (~((1 ? 1 : 48)));
                            var_21 = (arr_11 [i_0]);
                        }
                    }
                }
                var_22 = -9223372036854775771;
            }
            arr_17 [i_0] [i_1] [i_0] = (((arr_14 [i_0] [i_1 + 1] [i_0] [i_0]) ? var_0 : (arr_2 [i_1 - 4] [i_1 + 2])));
        }
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_23 = -1170657173;
                arr_23 [i_0] [i_6] [i_6] [i_6] = var_13;
                var_24 = (((arr_2 [i_6 + 1] [i_7 + 1]) || var_7));
            }
            for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_25 += ((arr_2 [i_6 - 2] [i_8 + 2]) ? (arr_2 [i_6 + 1] [i_8 + 2]) : 15447827477781986567);
                            arr_34 [i_0] [i_6] [i_6] [i_8 + 2] [i_9] [i_10] [i_8 + 2] = var_12;
                            var_26 ^= (((arr_12 [i_9] [i_9] [i_8 - 2] [i_9] [i_9]) >> (((arr_12 [i_8] [i_6 - 2] [i_8 + 1] [i_6] [i_9]) - 2811))));
                            var_27 = var_6;
                            var_28 ^= (((arr_21 [i_6 + 1] [i_6 - 2]) - (arr_21 [i_6 + 1] [i_6 + 1])));
                        }
                    }
                }
                var_29 += 1889472504810996626;
                arr_35 [i_6 - 2] = (arr_11 [i_6 + 1]);
                var_30 = arr_0 [i_0] [i_6];
            }
            var_31 ^= ((-456997185 ? ((524256 ? (arr_21 [i_0] [i_0]) : -1)) : -9223372036854775807));
            var_32 = (((arr_6 [i_6 - 3] [i_6 - 3]) / (arr_6 [i_6 - 1] [i_6 - 1])));
        }
        arr_36 [i_0] = var_6;
    }
    #pragma endscop
}
