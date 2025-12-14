/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((+(((var_1 != 64231) << ((max(var_7, var_7))))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 -= (((max((12210310809546930004 || var_11), 12210310809546930018)) != (6236433264162621584 * 0)));
        var_15 -= var_10;
    }
    #pragma endscop
}
