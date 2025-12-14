/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((((((min(51544, var_0)))) * ((1 ? 11 : 32)))), ((min(((var_14 ? var_7 : var_1)), var_5))))))));
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(((((var_8 - 40318) + (var_14 + 22)))), -1));
        arr_3 [i_0] = var_14;
        arr_4 [i_0] = 1;
        arr_5 [i_0] = ((var_8 & (arr_1 [i_0])));
    }
    #pragma endscop
}
