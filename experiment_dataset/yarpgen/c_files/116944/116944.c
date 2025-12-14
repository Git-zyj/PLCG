/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = ((-((((min(206692379, 0)) != (1 > var_4))))));
        var_18 = (~1);
    }
    var_19 = var_6;
    #pragma endscop
}
