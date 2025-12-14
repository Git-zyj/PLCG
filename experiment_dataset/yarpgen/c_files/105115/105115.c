/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((1 ? ((1503470361 ? (min((-2147483647 - 1), var_6)) : 85)) : var_2)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_11 = (max(var_0, var_4));
        arr_3 [i_0] [2] = ((var_5 > ((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((-(((!(arr_14 [i_0 - 1] [i_1 + 1] [i_2 + 3])))))))));
                            var_13 &= ((((arr_8 [i_0] [16] [i_3] [i_4]) ? 2 : -2189964286137709861)));
                            var_14 |= (32636 / -4123);
                        }
                    }
                }
            }
            var_15 -= var_4;
            var_16 = (max(((0 ? (arr_1 [i_0 - 1]) : var_6)), -5));
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            arr_20 [i_0] [16] = (~-2);
            var_17 = (max(var_7, ((((min(4117, 104))) >> ((max(var_4, var_2)))))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_18 = var_9;
                var_19 = var_6;
                var_20 -= (((arr_7 [i_0 + 1] [i_5 + 1]) || var_9));
                arr_23 [i_0] [i_0] [i_5 - 1] [i_0] = ((var_0 ? ((var_9 >> (var_8 - 7901))) : -var_9));
            }
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            arr_26 [i_0] [i_0] [2] = var_5;
            var_21 = (min(var_21, ((((arr_19 [8] [8] [i_7 + 3]) - (((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7]) ? var_1 : var_6)))))));
        }
        var_22 &= (((max(var_5, var_7)) ^ ((~((-6 ? (arr_9 [i_0] [i_0] [14]) : -13))))));
    }
    #pragma endscop
}
