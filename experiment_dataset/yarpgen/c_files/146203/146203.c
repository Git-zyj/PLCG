/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (((((var_10 ? var_0 : var_4)) ? ((17592185913344 ? var_10 : var_7)) : (max(var_1, 1760892019)))));
        var_12 = (max(var_12, (!15199475241841809893)));
        var_13 = (min(var_6, var_7));
        var_14 -= var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 -= (-901489402 + -1);
        var_16 = (((((var_7 ? 1 : var_2))) ? (var_8 - var_9) : var_9));
    }
    var_17 = ((((((var_0 ? var_2 : var_4))) ? (~var_5) : (var_3 | var_4))) >> (((((((var_3 ? var_1 : var_7))) ? var_8 : var_8)) - 26580)));
    var_18 |= ((var_7 ? 1760892019 : (min((7303411244373443979 % 567792131), (!var_1)))));
    #pragma endscop
}
