/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 -= (arr_1 [i_0] [i_0]);
        arr_2 [13] = 93;
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        var_16 = -26326;

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_1] [1] [i_1] &= (((-73683977 - 163) ? (1567859780 - 13713478868906129123) : (((-73683977 ? (arr_7 [i_1] [i_2 - 1]) : (arr_4 [i_1 - 3]))))));
            var_17 ^= (117 ? 0 : 12);
        }
        var_18 = 44371;
        arr_10 [i_1] = ((((123 ? (((15838512788337265134 ? 117 : 93))) : 9146436066708601703)) << (((((((139 - 0) - 1645782876026242134)) + 1645782876026242055)) - 54))));
    }
    var_19 = var_8;
    #pragma endscop
}
