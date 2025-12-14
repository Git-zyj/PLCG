/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((max(-12, var_8))) ? (((var_3 ? var_2 : var_8))) : ((var_7 ? 13793782440725514851 : var_9)))) >> (112 - 90)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_11 ^= (((arr_2 [6]) ? (arr_1 [i_0]) : ((1 ? (var_3 + var_9) : ((max(2220274607, (arr_2 [12]))))))));
        arr_3 [i_0] = ((-((1 ? (~125) : (((1 == (arr_1 [i_0]))))))));
    }
    var_12 = var_2;
    var_13 = (((~var_6) ? var_1 : ((((var_4 ? var_8 : var_7))))));
    var_14 = 64007;
    #pragma endscop
}
