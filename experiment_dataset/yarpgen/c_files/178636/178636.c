/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = (max((min(var_7, ((1 ? 1431226565 : var_11)))), ((var_10 ? 1 : var_8))));
    }
    var_14 = (((1 ? (-32767 - 1) : 17419)));
    var_15 = (max(1, ((max((max(-28798, 1)), (!var_6))))));
    #pragma endscop
}
