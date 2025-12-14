/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = max((arr_0 [i_0]), -740794979);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = (((arr_2 [i_0] [i_0] [i_0]) >= var_5));
            var_16 = 9223372036854775800;
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_3] [i_0] [13] = (var_0 >= var_3);
                                var_17 = (arr_0 [i_0]);
                                arr_17 [i_0] [i_0] [i_3] [i_3] [i_5] = ((((min(183, 173))) != var_3));
                                arr_18 [i_0] [i_2] [4] [i_0] [4] [i_3] = var_6;
                            }
                        }
                    }
                    var_18 = (((max(var_12, var_1)) >= (((max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0])))))));
                }
            }
        }
        var_19 |= ((((max((var_8 ^ var_11), var_2))) && var_3));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_25 [i_7] [i_7] = ((var_4 || (arr_0 [i_7])));
            var_20 = 9223372036854775800;
        }
        var_21 -= var_3;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        arr_32 [i_10] [i_8] [i_10] = (((var_5 >= (arr_11 [i_6] [i_8]))));
                        var_22 -= var_1;

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            arr_37 [i_6] [i_6] [10] [i_10] [i_11] &= -9223372036854775800;
                            arr_38 [i_10] [i_10] [14] [i_10] [i_11] = (arr_11 [8] [i_9]);
                            var_23 = (arr_22 [i_11]);
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_24 ^= (arr_40 [i_8] [i_6] [i_8] [i_12] [i_12] [i_6] [i_6]);
                            arr_41 [i_6] [i_6] [i_10] = 9223372036854775807;
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            arr_44 [i_10] [i_10] [i_10] = (arr_11 [i_6] [i_6]);
                            var_25 *= (((arr_13 [i_10 + 1]) <= (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6])));
                        }
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_26 = (arr_39 [i_8] [14] [i_9] [i_14] [i_14] [i_9]);
                        var_27 += ((!(arr_4 [i_9] [7] [i_6])));
                        arr_47 [i_9] [i_8] [i_9] [i_9] [i_9] = ((((((arr_0 [i_6]) != (arr_7 [i_6] [i_8] [i_9] [i_14])))) >= var_5));
                    }
                    var_28 = var_10;
                }
            }
        }
    }
    var_29 = ((max(-65535, (~183))));
    var_30 = (~var_9);
    var_31 -= -var_7;
    #pragma endscop
}
