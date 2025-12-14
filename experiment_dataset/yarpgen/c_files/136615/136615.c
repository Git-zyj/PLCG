/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (~5395779482711406111);
        var_12 = (max(((var_8 ? (var_7 && var_3) : var_0)), (81 >= 0)));
    }
    var_13 = (min((min(var_6, (var_8 && var_10))), (((~var_5) ? var_6 : (((max(var_4, var_0))))))));
    #pragma endscop
}
