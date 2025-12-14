/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = 2518446465;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = 0;
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((((arr_4 [i_0 + 2] [i_0 + 2] [i_0]) ? (arr_4 [i_0] [i_2] [i_1]) : (arr_4 [i_0] [i_0 + 2] [i_0]))));
                    arr_8 [i_2] [i_2] [i_2] = ((var_4 & ((106 ? var_2 : (((min(var_3, var_6))))))));
                }
            }
        }
        var_20 = ((((max((((!(arr_2 [8] [i_0] [i_0 + 1])))), ((var_5 ? var_0 : var_10))))) ? (!var_16) : var_3));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_15 [8] [i_5] [2] [i_3] [i_0] = ((1 ? 0 : ((154 ? 3136594676306658555 : -26770))));
                        arr_16 [0] [i_4] [i_3] [1] = (min(var_14, (arr_12 [i_0] [i_3] [i_3])));
                        var_21 = (var_13 > 1);
                    }
                }
            }
            var_22 = ((((((arr_10 [i_3] [i_3] [0]) != var_15))) + -var_3));
            arr_17 [0] [8] [8] = min(54, (1978802501 >> 0));
            arr_18 [i_0] [i_0] [i_3] = ((-(arr_0 [i_0])));
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_23 = ((((min(var_17, var_9)))) == ((((min(var_2, var_8))) ? (((((arr_22 [i_6]) < (arr_21 [i_6]))))) : -var_14)));
        arr_23 [6] = ((((1 ? 0 : -2))));
        var_24 = 1;
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_25 ^= var_12;
                    var_26 |= (min(1, 3183005543));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                arr_38 [i_7] [i_9] [i_9] [i_9] [i_11] [22] [i_9] = var_13;
                                var_27 = (min((arr_36 [i_7] [1] [i_9] [1] [15]), (min((min(0, var_5)), (arr_36 [1] [i_8] [i_9] [i_8] [i_11])))));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_41 [i_9] [i_9] [16] [i_8] [i_7] [i_9] = (max(var_3, var_12));

                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 23;i_13 += 1)
                        {
                            arr_45 [i_7] [i_7] [i_7] [i_7] [11] [0] [i_9] = (((arr_33 [i_7] [i_7] [2] [i_13 - 1]) ? (arr_33 [0] [1] [11] [i_13 - 1]) : var_13));
                            var_28 = (arr_34 [i_7] [i_8] [i_9] [i_13 - 1]);
                            var_29 = (min(var_29, (((!(arr_37 [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 2] [i_7]))))));
                            arr_46 [i_7] [i_8] [i_9] [i_12] [1] [1] = var_13;
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            arr_49 [i_9] [i_8] [i_9] = (!1054499876);
                            var_30 = (arr_29 [i_9]);
                            var_31 = (min(var_31, var_13));
                        }
                        var_32 += (max(4, (((var_9 ? (arr_26 [i_7]) : (arr_26 [i_7]))))));
                        arr_50 [2] [14] [i_9] [i_8] = (arr_32 [i_9] [i_9]);
                        var_33 = ((var_16 ? (arr_35 [i_7] [i_8] [4] [i_12]) : ((min(-48, (arr_32 [i_7] [i_9]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
