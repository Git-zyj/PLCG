/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 231813009;
        var_20 ^= ((15222116284636016448 ? 4063154282 : 4063154287));
    }
    var_21 -= ((!((min(231813009, var_3)))));
    var_22 = (max((4063154287 & var_9), 6791));
    var_23 |= (32767 < 15222116284636016448);

    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_24 = ((1 ? -68 : 3458764513820540928));
        var_25 = var_13;
        var_26 = arr_0 [15] [i_1];
    }
    #pragma endscop
}
