/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 10817868775613706890;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((7628875298095844705 ^ (arr_0 [5] [i_0])))));
        var_21 = (max(var_21, (arr_1 [i_0] [i_0])));
        var_22 = (((arr_0 [i_0] [i_0]) * (max((max((arr_1 [i_0] [i_0]), 287616102)), (7628875298095844702 != 0)))));
        var_23 *= 1;
    }
    #pragma endscop
}
