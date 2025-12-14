/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_0 ? (~var_9) : ((var_15 ? ((191 ? -5916413597080529308 : 27054)) : (var_8 != 17163)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 = (((14336 != 4258) > (-27055 == var_0)));
        arr_3 [i_0] = 63266;
    }
    #pragma endscop
}
