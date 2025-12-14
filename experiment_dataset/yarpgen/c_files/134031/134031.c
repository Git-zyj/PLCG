/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (((var_12 && ((min(var_4, -330499684))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) + 67));
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) + (var_14 * 139)));
        var_17 = (arr_0 [i_0]);
    }
    #pragma endscop
}
