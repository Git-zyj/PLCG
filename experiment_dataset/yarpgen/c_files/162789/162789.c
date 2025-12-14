/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((8648696508522468840 / ((9798047565187082760 * (arr_2 [i_0])))));
        arr_5 [i_0] = ((9798047565187082773 ? (arr_2 [i_0]) : var_8));
    }
    var_10 = (+(max((~var_0), var_5)));
    var_11 = (max(((var_7 ? var_4 : var_2)), var_4));
    var_12 = (min(var_2, 17203503750765248351));
    #pragma endscop
}
