/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = (((var_6 ? var_6 : var_0)));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_15 ^= 1;
                            arr_10 [13] [i_1 + 1] [i_0] [10] [i_4] [i_4] [i_4] = ((var_3 ? (((var_0 ? var_9 : var_0))) : (~var_5)));
                            var_16 = ((49102 > (arr_1 [i_3])));
                            var_17 ^= 1;
                        }
                    }
                }
                arr_11 [i_0] [i_1] = (~21);
                arr_12 [i_0] [i_1] [5] = (arr_3 [i_1 - 1] [i_1 + 1]);
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_18 = (-2147483647 - 1);
                            var_19 = ((((((arr_16 [i_0] [i_0]) / 1))) ? var_11 : (var_11 - var_2)));
                            var_20 = -114;
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_1] = ((var_12 / (arr_9 [i_5] [i_5] [i_5] [i_1 - 1] [i_0] [i_0 + 2] [3])));
            }
            var_21 = (max(var_21, -2760601331351003999));
            var_22 -= (var_1 > 3482752143);
            arr_20 [i_0] [i_0] [4] = -var_9;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_23 = (min(var_23, (((((arr_8 [i_0 + 1] [1] [i_8] [i_8] [10]) > var_2))))));
            var_24 = (52 / -28990);
        }
    }
    #pragma endscop
}
