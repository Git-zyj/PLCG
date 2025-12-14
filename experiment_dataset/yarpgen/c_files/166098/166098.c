/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(min((min(65510, var_0)), (arr_0 [i_0] [i_0])))));
        var_21 = (~65511);
        var_22 ^= ((((max(-1, (max(var_11, (arr_1 [4] [1])))))) ? ((min(-3, var_12))) : var_13));
    }
    var_23 = (max((max(((var_19 ? var_18 : var_15)), (max(var_13, 0)))), (((!((min(var_0, var_16))))))));
    var_24 = (((max(1, var_19)) % (~var_5)));
    #pragma endscop
}
