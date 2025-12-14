/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, -514));
        arr_2 [7] = 1407;
    }
    var_15 = min(1095216660480, (((((max(3418084597, 255))) ? (-23977 * 0) : var_5))));
    var_16 |= var_11;
    #pragma endscop
}
