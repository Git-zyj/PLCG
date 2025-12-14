/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_3 [i_0]);
        var_20 = arr_1 [i_0 - 1];
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (arr_7 [i_1]);
        var_21 = ((var_5 & ((var_9 ? (arr_6 [i_1 + 1] [i_1 + 1]) : var_12))));
    }
    #pragma endscop
}
