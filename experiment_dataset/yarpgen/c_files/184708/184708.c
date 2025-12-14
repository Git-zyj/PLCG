/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((126 ? var_1 : ((var_11 ? -17 : 12789))))));
    var_18 = var_11;
    var_19 = var_16;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = var_7;
        var_21 = (((var_13 & var_2) ? ((1 ? (14065572010005212191 % var_5) : 1)) : ((((((1 ? var_12 : 5447675396215389502))) ? 15 : 35184372088831)))));
        var_22 = (min(32758, (((8993928114076598396 ? var_0 : 87)))));
        var_23 = 16;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = ((!((((~1) ? (!55020) : var_4)))));
        var_24 = (min(((var_1 ? var_11 : 183)), (~-9)));
        arr_7 [i_1] = ((-(!553874388)));
        var_25 += ((((var_0 ? ((max(0, (-32767 - 1)))) : 16)) + (28 + 105)));
    }
    var_26 = (252 & 12833970930083276474);
    #pragma endscop
}
