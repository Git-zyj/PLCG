/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_11 ? var_5 : 1706815613294964872))) / (((min((min(var_1, var_5)), var_5)))));
    var_15 = (min(var_15, (((+(((!65535) << (var_3 - 159))))))));
    var_16 = (min(var_16, var_7));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 18446744073709551615;
        arr_3 [i_0] = arr_1 [i_0];
    }
    #pragma endscop
}
