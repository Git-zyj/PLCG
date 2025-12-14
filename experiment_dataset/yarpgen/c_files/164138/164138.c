/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-var_5, var_9));
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = arr_4 [i_0] [i_2];

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [6] = (arr_5 [i_1] [i_3] [i_4]);
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = (((arr_3 [9]) * var_10));
                            var_18 = 19;
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_1] [i_2] [i_1] [i_1]);
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] = (-21203 | var_11);
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (2556183224 > var_14);
                            arr_21 [i_0] [i_0] [i_3] = ((var_0 <= (arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
                        }

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_2] [i_2] [3] = (((arr_10 [i_0] [i_1] [i_2]) + (arr_11 [6] [i_1] [i_2] [i_2] [10] [i_6])));
                            arr_26 [i_0] [i_0] [i_2] [i_3] [1] = 126;
                            var_19 = 65525;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_20 = var_6;
                            var_21 = var_12;
                            var_22 = ((-(arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])));
                        }
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = (arr_28 [i_0]);
                        var_23 = var_7;
                    }
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        arr_37 [i_9] [i_9] [i_9] [i_9] [i_9 - 3] = (arr_4 [i_9 + 1] [i_9 - 2]);
                        var_24 = (var_15 ? (arr_3 [i_1]) : (arr_0 [i_1]));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_41 [i_10] [i_10] [i_10] = 65525;
                        var_25 = (116 || 13489804004912948883);
                    }
                    var_26 = 121;
                }
                var_27 = ((8388352 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 10));
                var_28 = (min(10, (10 << 12)));
            }
        }
    }
    #pragma endscop
}
