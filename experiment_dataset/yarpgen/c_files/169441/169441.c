/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4095;
    var_18 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (arr_3 [i_0]);
        var_20 &= (2751560582850958963 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_21 -= (((arr_1 [i_1] [i_2]) ? (arr_5 [i_1] [i_1]) : -5269136220501549003));
            var_22 *= ((!(arr_4 [i_2 - 1] [i_2 + 2])));
            var_23 = (arr_2 [i_1]);
        }
        var_24 = ((4024284963 ? 4294967295 : 193));
    }
    #pragma endscop
}
