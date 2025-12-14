/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(((~((var_6 ? var_0 : (arr_0 [17]))))), ((~(arr_1 [i_0 + 2] [i_0 + 1])))));
        var_15 = (((arr_1 [i_0] [14]) + var_11));
    }
    var_16 = var_8;
    var_17 = (!var_12);
    #pragma endscop
}
