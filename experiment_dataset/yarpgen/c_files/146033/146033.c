/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_4;
    var_14 = (max(var_1, var_1));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = var_9;

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] = ((((min(1286251615175495568, 1)) != (~1))));
            arr_5 [i_0] [6] = -1443149463879830163;
            var_16 ^= var_9;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_17 = -250;
            var_18 += ((2308775553 / (((-(arr_0 [i_2]))))));
        }
    }
    #pragma endscop
}
