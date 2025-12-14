/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (~var_2);
        arr_2 [i_0] = (((arr_1 [i_0]) == ((max(var_11, (arr_1 [i_0]))))));
    }
    var_15 = (~((var_0 ? (var_7 != 1) : ((max(0, 1))))));
    var_16 |= (var_7 == (!0));
    var_17 = var_6;
    #pragma endscop
}
