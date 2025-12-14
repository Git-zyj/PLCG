/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_5;
        var_17 = (min(var_9, (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = ((144114638320041984 ? (min(var_5, 53)) : 3361));
        var_18 ^= ((((((((arr_3 [i_1]) + 9223372036854775807)) << var_9))) ? (~8603043398091859491) : (~var_15)));
    }
    var_19 = var_2;
    var_20 = (~var_10);
    #pragma endscop
}
