/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (max((~var_7), ((min(var_5, var_0)))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_14 *= (!var_6);
            var_15 = (!var_7);
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_16 = (min(var_1, (max(var_6, var_12))));
            arr_8 [i_0] [i_0] = ((!((min(var_0, var_10)))));
        }
        var_17 = (max(var_17, var_5));
    }
    var_18 = (max(var_18, var_7));
    var_19 *= var_6;
    #pragma endscop
}
