/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_6;
        var_21 ^= (max(4294967295, var_7));
        var_22 |= 3497542771775709095;
    }
    var_23 &= var_10;
    #pragma endscop
}
