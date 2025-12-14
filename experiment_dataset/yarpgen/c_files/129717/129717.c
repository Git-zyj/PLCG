/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min(var_9, (max(var_2, (min(var_2, var_13))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((min(var_12, (arr_0 [i_0]))), ((min(4294967295, 7588)))));
        var_15 = (min(var_15, ((max(((max(57941, 1))), (min((min((arr_0 [i_0]), 1302)), ((min(1310, 64234))))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (-9223372036854775807 - 1);
        var_16 -= 64227;
    }
    var_17 = var_8;
    #pragma endscop
}
