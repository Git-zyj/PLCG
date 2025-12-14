/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 679519662885423386;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] = ((((max(var_6, (~var_3)))) ? (((var_7 * var_8) ? (255 >= var_9) : (var_5 / var_1))) : var_0));
        arr_5 [5] = (((var_9 ? var_7 : (arr_1 [i_0]))));
    }
    #pragma endscop
}
