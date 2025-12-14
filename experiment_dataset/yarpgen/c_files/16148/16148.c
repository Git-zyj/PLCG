/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((arr_2 [i_1 + 1] [i_1 + 1]) ? ((((arr_0 [i_0] [1]) / 1))) : (arr_2 [i_1 - 1] [i_1 - 1])));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((((arr_5 [i_0] [1]) >= (((arr_1 [i_0]) % var_12)))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_16 = (arr_0 [i_0] [i_1]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_17 = ((arr_13 [i_2] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [14]) == ((-(arr_15 [4] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            var_18 = (((arr_11 [i_0] [i_0] [i_2] [i_0]) ? (arr_10 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]) : var_9));
                        }
                        for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_5] [i_1] [i_5] |= var_12;
                            var_19 = (min((arr_6 [i_5] [i_3] [i_2]), (max(var_11, var_9))));
                            arr_19 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] = (arr_0 [i_0] [20]);
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_6] [1] [i_2] = (arr_7 [i_0] [i_1 + 1] [i_2]);
                            arr_24 [i_2] = 32758;
                        }
                        arr_25 [i_0] [i_0] [i_2] [i_0] = arr_6 [i_2 - 1] [i_2] [i_2 - 1];
                        arr_26 [i_2] [i_2] [i_1] [i_2] = var_13;
                        arr_27 [16] [i_2 - 2] [i_2] [i_1] [16] = ((((((arr_4 [i_1 + 1]) ? -32751 : 32761))) == ((max((arr_11 [i_0] [i_0] [i_0] [0]), var_1)))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_20 ^= 2702;
                        arr_30 [i_0] [19] [i_1] [i_2] [6] [i_7] = (arr_29 [i_2] [i_1 + 1] [i_2 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_21 = (arr_7 [i_1] [i_1] [i_2]);
                        var_22 = arr_21 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] [i_2];
                        arr_34 [i_8] [i_1] [i_2 - 2] [1] [i_2] [i_1 + 1] = ((((((-6706286157047490 ? 3 : 32756))) ? 6 : 143)));
                        arr_35 [i_2] [i_2] [i_1] [i_0] [13] [i_2] = (max((arr_11 [i_0] [i_0] [12] [i_0]), (var_4 || -var_3)));
                        arr_36 [i_8] [i_2] [i_2] [i_0] = ((arr_32 [16]) < (((6706286157047511 ? 242 : (arr_2 [i_0] [i_1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
