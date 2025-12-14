/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, (4169507933245530244 < -var_0)));
        var_14 = (max(var_14, (((var_12 ? 11 : (~4169507933245530245))))));
    }
    var_15 = ((4169507933245530235 ? (min((var_7 >= var_11), var_12)) : (!-4169507933245530253)));
    #pragma endscop
}
