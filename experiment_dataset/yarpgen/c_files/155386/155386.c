/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_14 ? var_14 : var_9)) * var_13));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (min(var_19, ((((min(var_16, var_11)))))));
        var_20 += (max(((var_17 ? (arr_0 [i_0]) : var_3)), (((!((min(var_1, var_11))))))));
        var_21 = ((1 ? 18224 : 4294967295));
    }
    #pragma endscop
}
