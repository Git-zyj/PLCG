/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-(var_5 ^ var_11))))));
    var_17 = (max(var_0, ((((min(var_1, var_2))) * 0))));
    var_18 &= (-32767 - 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 &= (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = (((arr_1 [i_0] [i_0]) ? ((var_13 ? 1 : 32745)) : (arr_1 [i_0] [i_1])));
            var_21 &= arr_2 [i_0];
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 *= (((-9223372036854775807 - 1) || 32767));
                        var_23 = ((var_13 ? (arr_6 [i_2] [i_2] [i_2 + 2]) : (arr_6 [i_2] [i_2] [i_2 - 3])));
                        var_24 = var_10;
                        var_25 *= ((!((3 != (arr_9 [9] [0] [i_2] [i_3])))));
                    }
                }
            }
            var_26 = (arr_3 [i_1] [i_0]);
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    {
                        var_27 = (((99 && 1) ? ((-32765 ? 0 : 24)) : 1));
                        arr_18 [i_0] [i_0] [i_5] [i_5] [i_6 - 1] [i_6 - 1] |= ((var_0 >> (((arr_10 [i_0] [i_0]) - 46653))));
                        arr_19 [i_0] [i_4] [i_4] [i_5] [i_4] [i_6] = (((arr_14 [16] [i_6 + 1] [16]) ? (-32767 - 1) : (arr_14 [7] [i_6 + 2] [i_5])));
                        var_28 = (((arr_6 [i_5] [i_5] [i_5]) ? var_0 : (((-32767 - 1) ^ var_9))));
                    }
                }
            }
            var_29 = var_6;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_29 [i_4] = -96;
                            var_30 += ((((0 ? -2 : -7)) - (arr_20 [i_7])));
                            arr_30 [i_0] [i_0] [i_7] [i_8] [i_9] = arr_25 [i_0] [i_0] [10] [i_0] [i_8] [i_0];
                        }
                    }
                }
            }
            var_31 = (((arr_15 [i_4] [i_4]) == (((var_12 ? var_1 : -32744)))));
        }
    }
    #pragma endscop
}
