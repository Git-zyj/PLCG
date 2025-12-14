/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((17636437673855590674 ^ ((max(16479419127171457749, var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 -= (~(arr_1 [i_0]));
        var_19 += var_4;
        var_20 += (((arr_0 [i_0]) << (var_13 - 4188069875849975556)));
        arr_3 [i_0] = (~-2335371414380482603);
    }
    var_21 = (min((((var_7 == (((var_6 ? -1 : var_5)))))), (((((var_8 ? var_1 : var_10))) ? (var_5 != var_0) : ((var_7 ? var_15 : var_6))))));
    var_22 &= var_10;
    var_23 = 1612008013892566304;
    #pragma endscop
}
