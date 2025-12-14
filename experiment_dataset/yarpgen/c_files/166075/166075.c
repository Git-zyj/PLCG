/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_8 ? (max(var_3, var_1)) : 0)), (-1 | 1)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = (max(var_11, (1 + 10396)));
        var_12 = (min(var_1, (~47787)));
        var_13 = (min(var_13, (var_5 * 5997847305589207987)));
        var_14 = (max(var_14, (((min(-24, 3438602706))))));
    }
    var_15 = (min((var_6 && -6), var_1));
    #pragma endscop
}
