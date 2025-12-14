/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_10 & -var_8);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, (((~((((((3059874163 ? var_6 : var_12))) || (~11267)))))))));
        var_17 = max((~9454), ((-3394 ? ((-126 ? var_5 : 11988)) : 52)));
    }
    #pragma endscop
}
