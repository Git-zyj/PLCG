/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((~var_7) ? (arr_0 [i_0]) : ((((max(var_2, var_7))) ? var_8 : ((23168 ? (arr_0 [i_0]) : -531616184))))));
        var_10 = (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) ^ (arr_0 [i_0])));
    }
    var_11 = (min(var_11, var_3));
    #pragma endscop
}
