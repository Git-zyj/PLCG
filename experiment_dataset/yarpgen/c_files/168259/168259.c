/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (min(-var_2, -8489));
        arr_3 [i_0] [2] = ((-38 ? (82 + 82) : (((-8466 || 73) ? (((~(arr_2 [i_0])))) : -var_4))));
    }
    var_21 = var_5;
    var_22 = (min(30271, 158));
    var_23 = (((((((-108 ? -13 : -178133081)) - var_17))) ? var_16 : 9139));
    #pragma endscop
}
