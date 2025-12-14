/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((25610 ? (max((~25610), (~-25618))) : ((min(-25624, 114))))))));
    var_13 = var_1;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 += (arr_2 [i_0 + 2]);
        arr_4 [i_0] = (332321544 >= 25590);
    }
    var_15 = (((var_9 ? (min(-4630, 332321576) : (var_8 & -32744)))));
    var_16 = var_1;
    #pragma endscop
}
