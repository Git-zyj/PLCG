/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 = (arr_1 [i_0 - 1]);
        var_17 = (((max(423810488, 0)) * 536341251));
        var_18 = ((((((arr_1 [i_0 - 1]) && 1616786887))) > ((((arr_0 [i_0 - 1] [i_0 + 1]) || (arr_0 [1] [i_0 - 1]))))));
    }
    var_19 = (max(((!(!var_5))), 1));
    #pragma endscop
}
