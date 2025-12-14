/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((-((var_1 ? var_9 : var_10)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, (((81 - (((var_12 ? var_16 : var_16))))))));
        arr_3 [0] |= ((~(((!(arr_2 [i_0]))))));
        var_19 = (-4831713034327179548 <= 9223372036854775807);
        arr_4 [i_0] = (((~(min((arr_0 [i_0]), var_7)))) == ((var_8 ? (min((arr_1 [i_0]), (arr_0 [i_0]))) : var_7)));
    }
    var_20 = (min(var_20, ((1128327392 * (((9223372036854775799 ? var_14 : -51)))))));
    var_21 = (!var_11);
    var_22 = var_7;
    #pragma endscop
}
