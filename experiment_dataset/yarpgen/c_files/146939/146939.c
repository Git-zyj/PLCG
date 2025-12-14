/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((-((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_14 = (max(32768, var_1));
        arr_2 [i_0] [i_0] = ((~(max(var_2, (-2277174607477695563 % var_10)))));
        var_15 = ((min(-2277174607477695563, (arr_1 [i_0] [i_0]))));
    }
    var_16 = var_0;
    var_17 = (((max(238, var_10))));
    #pragma endscop
}
