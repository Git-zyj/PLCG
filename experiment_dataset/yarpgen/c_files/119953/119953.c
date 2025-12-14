/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (!-8407526455116808403);
        arr_4 [i_0] = (min(var_14, 2197461090920602454));
        var_20 ^= -5100811289170742464;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = (arr_6 [i_1]);
        arr_7 [i_1] = 1135168332;
        var_22 = (min(var_22, 2345710781));
        var_23 &= ((!((min(852253671, -18453)))));
    }
    #pragma endscop
}
