/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((max((min(var_2, var_11)), var_7))) ? var_2 : -280081901026725634));
    var_14 = (var_9 ? 6731258688266293082 : var_9);
    var_15 = 3915886431;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_0 [8]);
        arr_2 [i_0] = (arr_1 [8]);
    }
    #pragma endscop
}
