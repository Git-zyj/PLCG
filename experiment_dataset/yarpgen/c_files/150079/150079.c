/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_9 ? var_11 : ((max((var_0 <= -775945944261242894), -var_3))))))));
    var_19 = ((~((11646466191304935742 ? (((max(var_16, var_10)))) : ((var_4 ? var_15 : var_17))))));
    var_20 = var_17;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((((7506552290701671641 ? 7506552290701671633 : 6627067755069846623))) ? (arr_0 [i_0] [i_0]) : (((((max(-3320497472574348518, var_10)) < (((arr_1 [i_0]) / (arr_0 [1] [i_0 + 2])))))))));
        var_21 = (max(var_21, (((((min(((-(arr_1 [i_0]))), ((-3004641528158538874 ? 32767 : (arr_1 [i_0])))))) && (arr_0 [i_0 + 1] [i_0 - 3]))))));
        var_22 = ((((max(11507201674324807823, 32747))) ? (arr_1 [i_0 + 2]) : (((((~(arr_1 [i_0])))) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 3])))));
        var_23 ^= (((arr_0 [i_0] [i_0 + 1]) <= ((((!((max((arr_1 [i_0]), (arr_0 [i_0 - 3] [i_0]))))))))));
    }
    var_24 = (((6089452377452548267 ? ((var_12 ? var_17 : var_4)) : var_13)) >= (var_13 <= -15186));
    #pragma endscop
}
