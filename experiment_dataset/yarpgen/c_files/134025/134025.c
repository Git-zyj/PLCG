/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_0 [7]);
        arr_3 [i_0] = ((-(-127 - 1)));
        var_12 = (((max(((var_0 ? (-127 - 1) : 59)), ((-120 ? 56795 : (arr_2 [i_0])))))) ? (((((arr_0 [i_0]) ? 4 : var_3)))) : (var_8 / 1));
    }
    var_13 = var_4;
    #pragma endscop
}
