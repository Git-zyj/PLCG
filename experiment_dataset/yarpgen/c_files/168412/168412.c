/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((((arr_3 [i_0] [i_0] [i_1 - 1]) ? (arr_3 [6] [6] [i_1 - 1]) : -1))) ? (((arr_3 [i_0] [i_1] [i_1 - 1]) + -7)) : (((arr_3 [i_0] [i_0] [i_1 - 1]) * (arr_3 [i_0] [16] [i_1 - 1]))))))));
                var_14 = ((var_10 + (min(((var_9 ? (arr_3 [i_0] [i_1] [i_1]) : (arr_0 [i_0]))), var_11))));
                arr_5 [i_0] [9] = (((~-3567649864089227878) ? (((((228 + 38682) == (arr_3 [i_0] [i_0] [i_0]))))) : (170 & -2835503839492461432)));
                arr_6 [11] [16] [i_0] = ((1 ^ ((((((arr_3 [4] [i_1] [i_1]) / 57207))) ? (((arr_1 [i_0]) ? 86 : 55441)) : 144))));
            }
        }
    }
    var_15 ^= var_7;
    var_16 = 2784686404593422838;
    #pragma endscop
}
