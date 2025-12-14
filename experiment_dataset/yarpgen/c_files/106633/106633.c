/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, (((var_7 ? 1372517967019754705 : (((3004785542279703227 ? var_4 : var_2))))))));
        var_13 &= (min(-1084394754, (max(1084394753, (arr_1 [i_0] [6])))));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 &= ((~(var_7 / 1084394749)));
        var_15 = (min(var_15, (!var_8)));
        var_16 = ((var_9 & (!94699732)));
    }
    var_17 = (max(var_17, ((((var_7 * var_8) * var_8)))));
    var_18 = ((var_10 ? ((-1084394754 ? (1005291928492336531 != -1084394754) : 0)) : ((((~3993300844344353380) ? (var_2 | var_0) : var_3)))));
    #pragma endscop
}
