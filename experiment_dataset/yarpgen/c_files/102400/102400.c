/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 255;
    var_17 = (max(1, 1));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = var_0;
        var_19 += 124;
        var_20 &= 10;
    }
    #pragma endscop
}
