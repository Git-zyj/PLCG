/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 473925491;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 *= ((~(((arr_3 [i_0]) >> (((arr_3 [i_0]) - 6281))))));
                arr_6 [i_0] [i_0] [i_0] = var_4;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_2] [i_2] = var_5;
            arr_14 [i_2] [i_3] = var_7;
            var_14 = (max(var_14, (((13 ? (((arr_9 [i_2 + 1]) ? var_3 : -2147483640)) : 65535)))));
            arr_15 [i_2] = (23 ? (~33561) : ((31967 ? var_5 : var_9)));
            arr_16 [i_2] = 848321405;
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            arr_20 [i_2] [8] [i_4] = (((-98 || -9163) * 25));
            arr_21 [i_2] [i_4] = (arr_18 [15]);
            arr_22 [i_4] [i_2] [i_2] = (~1155274257);
            arr_23 [1] = 15552354268281911676;
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_28 [i_5] [i_2 - 2] = (arr_9 [i_5]);
            var_15 *= (36591 != 217);
        }
        var_16 = (arr_19 [i_2 - 1]);
        arr_29 [i_2] = var_11;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_38 [i_8] [i_7] [i_6] [i_6] [i_2] = ((var_10 ? 102 : -var_6));
                        arr_39 [i_2 - 4] [i_2 - 4] [i_7] [i_8] = ((~((var_9 ? 1796731620 : 108))));
                    }
                }
            }
            arr_40 [i_2] [i_6] [18] = 93;
            arr_41 [i_2] = (var_10 <= 65519);
        }
    }
    #pragma endscop
}
