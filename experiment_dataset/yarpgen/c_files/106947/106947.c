/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] = ((!((((((var_11 ? var_7 : var_6))) ? var_4 : ((-68 ? var_10 : var_8)))))));
    }
    var_14 = ((((4647085823925795088 ? 9116537681910494697 : 0)) - var_5));
    #pragma endscop
}
