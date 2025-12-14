/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = var_7;
                var_20 = (max(var_20, var_16));
                var_21 = var_11;
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_22 ^= 18446744073709551607;
                        var_23 = ((!(((1 ? var_16 : (arr_12 [i_5] [i_4] [i_3] [i_3 + 3] [i_2]))))));
                    }
                }
            }
            var_24 = (max(var_24, (((arr_4 [i_2]) & ((var_6 ? (arr_7 [i_3] [1] [i_2]) : (arr_7 [12] [12] [i_2])))))));
            var_25 = (arr_6 [i_3] [i_3 - 3] [i_3 + 3]);
        }
        var_26 = var_1;
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        var_27 |= var_13;
        var_28 = (min(var_28, (!13389386022197295264)));
        var_29 = var_17;
    }
    #pragma endscop
}
