/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((var_9 % (max(var_1, var_4))))) / (var_2 * 5)));
    var_14 = (min((min(6809, -22)), ((var_10 ? var_12 : (~var_3)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 += (-8517551442668308811 ? 39 : var_12);
        var_16 = var_6;
    }
    var_17 = ((-((-((max(48713, 48705)))))));
    var_18 = ((min(var_11, 15770983348849995614)));
    #pragma endscop
}
