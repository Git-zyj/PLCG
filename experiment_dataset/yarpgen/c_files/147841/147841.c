/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_19 = (((-2147483647 - 1) ? 560102698 : 11864364568823136182));
        arr_3 [i_0] [i_0 - 1] = (min(6582379504886415440, (var_0 * var_0)));
    }
    var_20 = (((6582379504886415431 & ((max(var_5, var_5))))));
    var_21 = var_11;
    #pragma endscop
}
