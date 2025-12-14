/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_20 = (arr_1 [i_0 + 1]);
        arr_3 [i_0] = (max(-70, (min(23110, 17664))));
    }
    var_21 = -var_19;
    #pragma endscop
}
