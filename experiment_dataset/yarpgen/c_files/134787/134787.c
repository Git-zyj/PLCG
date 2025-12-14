/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? (~8351243214429227956) : 1));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 = 3406165099463714360;
        arr_3 [i_0] = 1;
    }
    var_12 = 120;
    #pragma endscop
}
