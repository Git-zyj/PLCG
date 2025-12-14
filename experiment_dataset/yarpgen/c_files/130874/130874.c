/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (var_8 | -0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((1 << (var_4 - 48663)));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) >= (arr_0 [i_0] [i_0])));
    }
    var_16 = (max(((min(-47, -108))), var_3));
    var_17 += ((0 ? (((var_9 || 0) + 1)) : -4489));
    #pragma endscop
}
