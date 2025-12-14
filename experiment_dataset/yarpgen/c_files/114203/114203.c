/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = max(((max(1, (arr_1 [i_0])))), (((arr_1 [i_0]) | (arr_0 [i_0]))));
        var_20 &= 3;
        arr_3 [i_0] = (((0 & -1) << (var_7 - 19015)));
        var_21 = (min(var_21, (((max((min(1924134124512822767, (arr_0 [i_0]))), -1))))));
    }
    var_22 = 0;
    var_23 |= ((((var_6 ? var_11 : var_9))));
    var_24 *= var_15;
    #pragma endscop
}
