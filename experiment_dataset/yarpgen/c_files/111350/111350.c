/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 << (97 - 76)));
    var_17 = ((((min(var_9, var_15))) ? (6508631181608648074 & 15690) : ((min((min(var_4, 0)), var_10)))));
    var_18 = (min(((max(var_9, ((8306737243882374544 ? -15690 : -972578813))))), 10140006829827177072));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_10 == (max((arr_1 [i_0]), ((127 ? -13 : 19))))));
        var_19 = 127;
    }
    var_20 = var_10;
    #pragma endscop
}
