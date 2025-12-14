/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_11, (min((!81), (!var_9)))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((((var_8 ? -6632715008890837578 : var_5) % var_9)))))));
        arr_3 [i_0] = -6632715008890837578;
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_17 = (!0);
        var_18 = var_9;
        var_19 = (min(var_19, (((+(min((((var_3 + 9223372036854775807) >> (var_9 - 19))), -var_7)))))));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_20 = ((((max(3519624632, -119))) ? (((63 ? var_8 : var_1))) : (var_3 != var_7)));
        arr_10 [i_2 - 1] = (~var_6);
    }
    #pragma endscop
}
