/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 - 2] [i_0] = (var_9 | 204);
        arr_4 [i_0 + 4] |= ((((min(109, (var_15 | 0)))) ? (((((252 ? var_12 : var_9))) ? ((var_9 ? var_2 : var_2)) : ((255 ? 9329 : var_3)))) : ((min((!14012), 4)))));
    }
    var_19 = ((((((!var_4) ? var_7 : ((max(1, 81)))))) ? ((9329 ? 16215642043866255592 : 4)) : (((0 ? var_14 : (((127 ? 22300 : 24411))))))));
    var_20 |= ((((var_18 ? (~1) : var_18)) - var_10));
    #pragma endscop
}
