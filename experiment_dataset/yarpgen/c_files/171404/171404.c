/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = ((var_14 ? ((((18446744073709551606 / 255) && (var_4 && 2)))) : ((min(255, (!var_1))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((max(var_7, (arr_0 [16] [i_0]))));
        arr_2 [19] [4] = (!var_1);
    }
    #pragma endscop
}
