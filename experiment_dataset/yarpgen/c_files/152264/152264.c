/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(var_12, (((-(~var_6))))));
        arr_4 [i_0] [i_0] = ((288212783965667328 ? (arr_2 [14]) : ((var_6 ? 255 : 2599516986))));
        var_13 *= ((var_0 ? 103334461 : (arr_1 [i_0])));
        arr_5 [1] = -103334457;
        var_14 = var_8;
    }
    var_15 = var_7;
    #pragma endscop
}
