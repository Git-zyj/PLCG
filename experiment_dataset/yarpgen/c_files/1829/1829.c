/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, ((min(var_2, (1 ^ 7))))));
        arr_3 [i_0] = ((((min(var_13, (arr_2 [12] [i_0])))) != var_2));
    }
    var_18 = (min(var_18, var_2));
    var_19 = var_2;
    #pragma endscop
}
