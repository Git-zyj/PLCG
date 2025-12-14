/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = 2586;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(((2792937312 ? 2792937312 : 238)), var_2));
        var_14 = (max(var_14, 1502029960));
        arr_3 [14] |= (arr_0 [10]);
    }
    #pragma endscop
}
