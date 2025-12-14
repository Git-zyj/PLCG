/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_10 ^= 872159153;

            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                var_11 = (arr_4 [i_0]);

                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    var_12 = (arr_9 [i_3] [i_3]);
                    var_13 = var_7;
                    arr_10 [10] [10] [10] [10] [i_0] |= (((arr_5 [i_3] [i_3 - 1] [i_2 - 1]) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_3 - 3]) : var_7));
                    var_14 += -116;
                    var_15 = ((13220640541537945084 ? 18446744073709551615 : 115));
                }
                var_16 = (min(var_16, (((2416946779 ? (arr_1 [2]) : (arr_8 [i_1] [i_1] [i_2 + 2] [i_2] [4] [i_1]))))));
            }
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_17 = ((!((((arr_0 [14]) / (arr_17 [i_0] [i_1] [i_1] [7] [i_5] [i_6]))))));
                            var_18 = ((~(arr_3 [i_0] [i_6])));
                            var_19 += (arr_7 [i_4 - 2] [i_4 + 2] [i_4 - 1]);
                            var_20 = 55472;
                        }
                    }
                }
                var_21 = (arr_2 [i_4] [i_1]);
                var_22 = ((65535 ? ((var_0 ? 2694393701 : (arr_13 [i_0] [3] [i_0]))) : 29474));
                var_23 = (0 << (5441527103617189713 - 5441527103617189703));
            }
        }
        var_24 = 1;
        var_25 = var_0;
    }
    var_26 = ((var_2 != ((-1173893929 ? -123 : 1523471763))));
    #pragma endscop
}
