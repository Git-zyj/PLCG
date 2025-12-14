/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_11, var_0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_20 = (arr_9 [i_2 + 2] [i_2 + 1] [i_3 - 1]);
                            var_21 = (((((arr_5 [i_3 + 1]) == var_15))) / (40 & var_9));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_18 [i_5] [i_2] [i_2] [i_2] [i_0] = (arr_9 [i_0] [i_0] [i_0]);
                            arr_19 [8] [i_3 - 1] [i_3 - 1] [i_2] [i_3 - 2] = var_13;
                            var_22 = (~15723225052786768307);
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_0] = (((((arr_7 [i_2 + 2] [i_3 + 1] [i_3 - 1]) + 2147483647)) >> (var_11 + 69)));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_23 = -var_17;
                            var_24 = (~-28);
                            var_25 = ((-1833 ? (arr_9 [i_2 + 1] [i_3 + 1] [i_6]) : ((~(arr_21 [i_2] [i_1] [i_1] [i_1] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_26 = (max(var_26, var_4));
                            var_27 ^= (((var_18 + (arr_5 [i_0]))));
                        }
                        var_28 = ((!(arr_21 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_30 [i_2] [i_2] = (((1023 / -40) ? var_12 : ((-2147483630 ? var_9 : (arr_9 [i_0] [6] [6])))));
                        var_29 ^= (arr_11 [i_2 + 1]);
                    }
                    var_30 += (((((-(arr_28 [i_0] [i_2] [i_2 + 1] [i_0])))) == (arr_0 [i_1])));
                    arr_31 [i_0] [i_2] = var_6;
                }
            }
        }
        var_31 = -var_0;
    }
    #pragma endscop
}
