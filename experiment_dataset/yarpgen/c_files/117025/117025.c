/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_9);
    var_19 |= (min(((-var_14 ? (~var_7) : (~var_6))), (var_0 | var_9)));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_1 [i_0 - 2])));
        var_21 ^= var_9;
        var_22 = (((arr_1 [i_0]) ^ (((((arr_1 [i_0]) | var_14)) | ((((arr_1 [2]) ^ (arr_1 [i_0]))))))));
    }
    var_23 = (min(var_23, var_17));
    var_24 = var_3;
    #pragma endscop
}
