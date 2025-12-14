/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_10 -= (((max(var_7, (max(var_6, (arr_2 [i_0]))))) == ((min(var_5, 35)))));
        var_11 = var_4;
    }
    var_12 += (((((~(3476539637 ^ 255)))) ? (((var_5 ? 3476539637 : var_9))) : 0));
    #pragma endscop
}
