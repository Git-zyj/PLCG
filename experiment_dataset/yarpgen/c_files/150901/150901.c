/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_19 = (min(var_19, (((~(((!(arr_1 [6])))))))));
        arr_2 [i_0] = var_5;
        var_20 = (!65521);
    }
    var_21 = var_7;
    var_22 = ((-(((!36) ^ (max(var_6, 0))))));
    #pragma endscop
}
