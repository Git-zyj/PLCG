/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (min((~7089621681890327394), var_9));
        var_13 = (((min(var_0, var_1))));
        var_14 = (~var_3);
        arr_2 [i_0] [i_0] = var_0;
        var_15 = (!var_1);
    }
    var_16 = (max(var_16, (((7089621681890327394 >= (max(var_11, (max(11357122391819224222, 7089621681890327394)))))))));
    var_17 |= -113;
    #pragma endscop
}
