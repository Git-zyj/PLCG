/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((9759731806095813712 ? -1507419411 : 2256670200)));
        var_17 *= ((-1607693782 ? (arr_0 [i_0] [i_0]) : 20));
        var_18 = (((((((var_8 ? var_1 : var_2))) | var_5)) <= var_9));
        var_19 += (!20);
    }
    var_20 = var_9;
    #pragma endscop
}
