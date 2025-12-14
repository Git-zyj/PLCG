/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+(((4620996538721457232 ^ 1257393012) ^ ((min(var_0, 3037574275)))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = 3037574284;
        arr_3 [i_0] [i_0 + 1] = ((((min(1257392992, -1608))) ? (((arr_0 [i_0]) / -1608)) : (((arr_1 [i_0 - 1] [i_0 + 2]) / (arr_1 [i_0 + 2] [i_0 + 2])))));
    }
    var_14 = (min(var_14, ((((((536805376 ? var_11 : var_7) / 50)))))));
    #pragma endscop
}
