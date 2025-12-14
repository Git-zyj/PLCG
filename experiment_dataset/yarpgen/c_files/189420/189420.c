/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_3 [i_0 - 1])));
                    var_22 = ((((!-38) ^ (min((arr_0 [i_0 - 2]), var_11)))));
                    arr_11 [8] [8] [8] [8] = ((140668768878592 ? (min((arr_4 [i_1]), (((arr_1 [i_2]) ? var_8 : var_1)))) : (~var_3)));
                }
            }
        }
        arr_12 [i_0] = var_15;
        arr_13 [i_0] [1] = (((arr_1 [i_0 - 2]) ? ((((arr_10 [i_0]) ? (arr_8 [10] [i_0] [i_0]) : (arr_9 [i_0] [i_0 - 2] [i_0] [i_0])))) : var_13));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    arr_23 [i_3] [i_4] [i_5 - 2] [10] = ((38 ? var_1 : 42678));
                    var_23 -= (!2080374784);
                    var_24 = (min((arr_20 [i_3] [i_4 - 1] [i_5 - 1] [i_5 - 1]), (arr_6 [4] [i_5 - 1] [13])));
                    var_25 = (((arr_15 [13]) ? (arr_18 [i_3] [11] [14]) : (arr_8 [i_4 - 1] [i_4 - 1] [i_5 - 2])));
                }
            }
        }
        arr_24 [i_3] = (max((arr_20 [i_3] [i_3] [i_3] [1]), var_9));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_34 [i_3] [7] [i_6] [1] [i_3] [i_3] = 17562;

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_26 = (arr_27 [8] [i_7 + 1] [i_8] [12]);
                            var_27 ^= -64;
                            var_28 -= (arr_22 [i_3] [i_6] [i_3]);
                        }

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_29 = ((((min((arr_7 [i_10 - 1]), 1608485039))) ? ((((arr_37 [i_7 - 1] [15] [i_10] [i_8] [1]) != (arr_31 [i_3] [i_10 - 1] [i_7 + 1])))) : var_9));
                            var_30 = (min(var_30, (arr_26 [11])));
                            var_31 = (max(((min(var_17, (arr_32 [i_3] [i_3] [i_6] [i_3] [i_8] [i_6])))), 0));
                            var_32 = ((var_8 ? ((((arr_16 [i_3] [9] [i_3]) > 2558283819367760766))) : (max(((var_11 ? var_17 : 64)), (arr_15 [9])))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_33 = (((arr_21 [i_6] [i_6] [i_7] [i_7 - 1]) ? var_17 : (arr_21 [i_3] [3] [3] [i_7 - 1])));
                            var_34 = (arr_18 [i_8] [i_6] [i_6]);
                            var_35 = (max(var_35, ((((arr_3 [0]) ? (arr_9 [2] [2] [0] [i_3]) : (arr_7 [14]))))));
                        }
                        var_36 = (min(var_36, var_12));
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {

            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                var_37 |= var_2;
                var_38 = var_2;
            }
            var_39 &= (arr_32 [6] [6] [i_12] [6] [i_3] [i_3]);
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            arr_53 [1] [13] [i_14] = (arr_31 [1] [i_14] [i_3]);
            arr_54 [1] = (min((arr_37 [4] [3] [5] [4] [i_14]), (((arr_8 [i_3] [i_14] [i_3]) - (arr_27 [12] [12] [i_3] [2])))));
        }
        var_40 = arr_25 [i_3] [i_3];
    }
    var_41 = ((var_3 / (((1 ? var_16 : (((32767 ? var_5 : var_18))))))));
    var_42 = (min(var_42, var_11));
    #pragma endscop
}
