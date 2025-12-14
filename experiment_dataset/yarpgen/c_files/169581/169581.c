/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~(~1782097207675035982)))) && 28387));
    var_14 = (min(var_10, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) / var_4));
        arr_4 [i_0] [i_0] = (((218890070 || 7585964320681764429) && (arr_1 [i_0])));
        arr_5 [i_0] = ((49152 ? (((((arr_1 [i_0]) && 1765772801)))) : (((arr_0 [i_0] [i_0]) ? 691 : 6911936644884828570))));
    }
    #pragma endscop
}
