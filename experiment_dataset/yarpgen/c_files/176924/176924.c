/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(~var_7)));
    var_19 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0]) * 37916));
        arr_2 [i_0] = (((arr_1 [1]) <= 6626788668843285109));
        var_21 = ((1 ? 1 : 27620));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (max(33950, 37930));
        arr_6 [i_1] [i_1] = ((63 ? 8 : (35332 <= 37920)));
    }
    var_22 = var_12;
    #pragma endscop
}
