/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((((!(var_6 && var_8)))), (~355146843107134351));
    var_14 = ((!((max(var_4, (!var_1))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [11]);
        var_16 = ((!((((var_3 - var_9) ? ((min(var_6, var_8))) : (var_3 > 4294967289))))));
        var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
