/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_19 ^= (((((arr_0 [i_0]) ? (arr_1 [i_0 - 1] [i_0]) : var_2))) && ((var_16 && (arr_0 [i_0 + 1]))));
        var_20 = (min(var_20, (arr_0 [i_0])));
        arr_2 [i_0 - 1] = (~15115283268590577280);

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_7 [1] [i_1] = (((~(-32767 - 1))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [9] = ((((arr_1 [i_2] [i_2 - 1]) * (arr_14 [i_0] [i_0 + 1] [i_0] [0]))) % (((((arr_9 [i_0] [i_0]) >= var_17)))));

                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            var_21 = (((arr_3 [i_0 + 2]) ? var_3 : (var_1 % var_4)));
                            var_22 = ((((var_17 ? (arr_10 [i_4] [6] [i_4 + 1] [8]) : (arr_6 [i_0] [i_0] [i_0]))) << (var_0 - 6363083301863866074)));
                            var_23 = (((arr_0 [i_0 - 1]) ? var_1 : (arr_0 [i_0 + 2])));
                        }
                        var_24 = var_5;
                    }
                }
            }
        }
    }
    var_25 -= ((var_18 ? ((min(var_9, var_14))) : (((var_12 ? var_16 : var_11)))));
    var_26 = var_11;
    #pragma endscop
}
