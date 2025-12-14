/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((488168069 ? var_6 : var_12)) <= ((((max(var_6, var_3))) ? (arr_0 [i_0]) : (arr_0 [18])))));
        arr_3 [i_0] [i_0] = (max(68, 59859));
    }
    var_14 = (max(2469625114, 4237366813));
    var_15 = 488168054;
    #pragma endscop
}
