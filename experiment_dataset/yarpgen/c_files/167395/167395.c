/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 1;
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = arr_0 [i_0] [i_1];
                    var_20 = (max(var_20, (max(32767, 32767))));
                    arr_9 [i_0] [i_1] = (arr_0 [i_0] [i_0]);

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [13] [i_2] [i_3] [i_3] = (((~(arr_3 [i_2] [i_3 - 1]))));
                        arr_13 [i_0] [3] [3] [i_3] [3] [i_0] = -var_10;
                        arr_14 [1] = (arr_11 [i_3] [i_3] [i_3 + 1] [4] [i_3]);
                    }
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_21 = (min(var_21, (arr_11 [i_5 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_0])));
                        var_22 = ((-(arr_17 [i_5 - 1] [i_4 - 4])));
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_21 [i_0] [i_4] = var_0;
                        var_23 ^= ((!(arr_6 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                        var_24 = arr_0 [i_0] [i_1];
                        arr_22 [i_0] [i_4] [i_4 + 2] [i_4] = (arr_19 [i_4 + 2] [i_4 - 3] [i_6 + 1] [i_6 + 1]);
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_25 = -32767;
                        var_26 = (max(var_26, (arr_20 [i_4 - 3] [i_4 + 2] [i_4 - 2] [0] [0] [i_4 - 1])));
                        arr_25 [i_4] = (arr_19 [i_0] [i_1] [i_4 + 2] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_4] [i_8] [i_9] [i_1] [i_1] &= var_12;
                            var_27 = (max(var_27, (((var_2 ? (arr_11 [i_4 - 1] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 2]) : 1048)))));
                            var_28 = ((-(arr_23 [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_29 = (max(var_29, (~54)));
                            var_30 = (max(var_30, (arr_5 [i_4 + 2] [i_4 - 3])));
                        }
                        var_31 = 33538048;
                        arr_36 [2] [i_0] [i_4] [i_4] [i_0] [i_0] = arr_32 [10] [10] [i_4 - 3] [i_4 + 2] [i_4 + 1];
                    }
                    var_32 += (arr_32 [i_1] [i_1] [i_1] [i_1] [i_0]);
                }
                arr_37 [i_0] [i_0] = min((arr_32 [i_0] [i_1] [i_0] [i_0] [i_0]), ((min(-32758, var_16))));
            }
        }
    }
    #pragma endscop
}
