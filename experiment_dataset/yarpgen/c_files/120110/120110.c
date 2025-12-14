/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = 1;
        var_20 = (arr_3 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = max(((1 ? ((min((-32767 - 1), 1))) : (arr_2 [i_0] [i_0]))), (arr_0 [i_0]));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_21 = var_14;
        arr_7 [i_1] [i_1] = (var_4 <= var_0);
    }
    var_22 -= var_14;
    #pragma endscop
}
