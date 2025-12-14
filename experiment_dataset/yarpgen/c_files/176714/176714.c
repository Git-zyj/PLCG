/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = 0;
        var_19 |= (((arr_0 [i_0]) / (arr_0 [18])));
    }
    var_20 = (min((min(((min(-24486, -585203476))), ((-764515520 ? var_7 : 2348431658381587223)))), ((max(var_13, var_0)))));
    var_21 = (max(var_21, (40184676 > 7279673353373339510)));
    #pragma endscop
}
