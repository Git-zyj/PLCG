/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [22] [2] [2] = (arr_6 [i_0 - 1] [i_2] [i_0 - 1]);
                        arr_11 [17] [i_2] [i_2] [i_3] [10] [10] = ((((arr_9 [22] [i_0 - 1] [7]) + 2147483647)) >> ((((var_14 ? var_4 : 8575863169392131878)) - 7619466615399095375)));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_17 *= (arr_2 [i_0 - 1] [i_0 - 2]);
            var_18 = var_15;
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_16 [15] [i_5] = (var_16 ? (arr_7 [i_5] [i_5]) : (arr_7 [i_5] [i_5]));
            var_19 = -62834;
        }
    }
    for (int i_6 = 4; i_6 < 13;i_6 += 1)
    {
        var_20 ^= (arr_7 [0] [0]);
        var_21 = ((!((((arr_17 [i_6 - 1]) ? (arr_6 [14] [i_6] [i_6]) : 63719)))));
        var_22 = ((-(((936791545 == (-9223372036854775807 - 1))))));
    }
    var_23 += ((var_5 ? var_5 : var_11));
    var_24 &= var_11;
    #pragma endscop
}
