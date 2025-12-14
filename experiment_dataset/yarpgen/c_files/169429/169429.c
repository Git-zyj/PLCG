/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0];
        var_14 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_4 [i_0] = 220;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = (~(arr_0 [i_1]));
        arr_7 [13] [i_1] = (((arr_1 [i_1] [i_1]) < 186));
    }
    var_16 = var_13;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_17 -= (arr_9 [i_2]);
        arr_12 [i_2] = 61457;
    }
    #pragma endscop
}
