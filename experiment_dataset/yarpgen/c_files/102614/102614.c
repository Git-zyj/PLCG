/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max(9, 252));
    var_18 = (max(var_18, var_3));
    var_19 = var_13;
    var_20 = (~241);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 += 1;
        var_22 = ((((((arr_1 [i_0]) + var_14))) ? (246 % 246) : (((var_2 == (arr_1 [i_0]))))));
    }
    #pragma endscop
}
