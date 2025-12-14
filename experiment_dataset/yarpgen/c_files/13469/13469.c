/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = ((((arr_1 [i_0 + 2]) % (arr_1 [i_0 + 2]))));
        var_17 = (max(var_17, (((((-((255 ? (arr_2 [8]) : var_9)))) ^ var_14)))));
        var_18 = var_0;
    }
    var_19 = ((!((((var_3 && var_4) | (max(var_0, var_9)))))));
    var_20 = max((!var_8), -30264631);
    var_21 = var_5;
    #pragma endscop
}
