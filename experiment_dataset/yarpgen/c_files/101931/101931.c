/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = -969611516;
        var_20 = 202;
        var_21 = (min(var_21, -6948076699925680593));
        arr_2 [i_0] = 6948076699925680592;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 &= 0;
        arr_6 [2] = 1780888472;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_23 = 7;
            var_24 = 202;
            var_25 = 24;
        }
        var_26 = 14965;
        var_27 = (max(var_27, 13120394485182529913));
    }
    #pragma endscop
}
