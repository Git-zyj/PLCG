/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((0 ? ((min((var_9 < var_8), var_6))) : 1));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (min(var_12, (~var_4)));
        var_13 = (max(var_13, 32747));
        var_14 = arr_0 [i_0] [i_0];
        arr_3 [i_0] = (min(2094, 34901));
    }
    #pragma endscop
}
