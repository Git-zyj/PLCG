/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -1614242840;
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -887364734;
        arr_3 [3] = (var_8 - 32704);
    }
    var_21 = ((var_4 ? (max(var_16, -79)) : var_1));
    #pragma endscop
}
