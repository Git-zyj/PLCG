/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, var_6));
        arr_4 [i_0] = (min(((((arr_0 [i_0 - 1] [i_0 - 2]) ? (arr_0 [i_0 + 3] [i_0 + 3]) : var_2))), var_2));
        var_17 = (min(var_17, ((-(~var_1)))));
    }
    var_18 = (max(var_18, var_14));
    var_19 = (max(-var_3, ((max(var_11, (var_12 >= 0))))));
    #pragma endscop
}
