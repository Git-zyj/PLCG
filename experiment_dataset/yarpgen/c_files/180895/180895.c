/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2694;
    var_21 = 1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_22 = ((1 << ((((6715192892558413329 ? ((~(arr_1 [i_0] [19]))) : -3374)) + 1725580559149180390))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = var_14;
        arr_8 [i_1] = ((0 ? (arr_5 [i_1]) : (arr_5 [i_1])));
        var_23 = (min(var_23, (arr_5 [22])));
    }
    #pragma endscop
}
