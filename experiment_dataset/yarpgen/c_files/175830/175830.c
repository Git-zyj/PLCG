/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (+-6699);
        arr_2 [i_0] = (var_8 <= -1710);
        var_13 = arr_1 [i_0];
        var_14 = -429255261;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_15 -= (var_8 - -115);
        arr_7 [i_1] [i_1] = 252;
        var_16 |= -29211;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_17 = var_1;
        arr_10 [i_2] = (~65284);
        arr_11 [i_2] = (min(var_1, var_11));
    }

    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_18 = (((((((207 / (arr_12 [i_3]))) / 118))) ? ((18446744073709551615 / (((56 ? (arr_8 [i_3]) : 76))))) : 165));
        var_19 = ((-(arr_9 [i_3 + 2])));
    }
    #pragma endscop
}
