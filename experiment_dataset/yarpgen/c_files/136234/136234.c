/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_17 = arr_2 [i_0] [i_0];
    }
    var_18 = -6033063701869048817;
    var_19 = 201326592;
    #pragma endscop
}
