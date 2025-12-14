/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((var_7 ? -7445756771804265086 : var_1))), var_9));
    var_11 = (min(1, (!1588295623)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((-7445756771804265086 ? 1017322996703596616 : 1588295623)));
        arr_3 [i_0] [i_0] = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
    }
    #pragma endscop
}
