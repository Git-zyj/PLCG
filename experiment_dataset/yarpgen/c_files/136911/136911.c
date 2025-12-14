/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, ((((max((var_2 < 8), (var_5 + var_10))) | 4294967290)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_14 ^= ((17522428985299299842 - var_11) == (52790 - var_3));
            arr_7 [i_0] = -6;
        }
    }
    #pragma endscop
}
