/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));
    var_11 = var_3;
    var_12 = (max(((6049194831864939933 ? ((max(1532617033, -73))) : 0)), ((((max(11968759456138948673, 29))) ? (229949158 + 65534) : ((11968759456138948660 ? 65534 : var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0] [i_0]) || (4153 && 63111)));
        var_14 = (min(var_14, (((~(arr_0 [i_0]))))));
        var_15 = var_1;
        var_16 |= ((!(3 > -18)));
    }
    #pragma endscop
}
