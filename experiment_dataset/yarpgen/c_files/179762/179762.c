/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (min(var_19, 32));
        var_20 = (max(var_20, (((!(((((((arr_1 [i_0] [i_0]) ? 135 : var_10))) ? (205 * 1) : ((((arr_1 [i_0] [i_0]) <= var_4)))))))))));
        arr_3 [i_0] = ((!((((arr_0 [i_0]) ? 54 : (arr_0 [i_0]))))));
        var_21 ^= -9223372036854775797;
        var_22 = (arr_2 [0]);
    }
    var_23 |= (((((~-1938010532675180193) / ((max(264241152, 135))))) / (var_9 + var_0)));
    #pragma endscop
}
