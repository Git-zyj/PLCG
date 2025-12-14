/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((216982556 >> (-216982545 + 216982552))))));
        var_12 = (((min(var_3, (((var_11 ? var_9 : var_2))))) + 216982543));
    }
    var_13 = ((min(var_10, (max(var_5, var_10)))));
    #pragma endscop
}
