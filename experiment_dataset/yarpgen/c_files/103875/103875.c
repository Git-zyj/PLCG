/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_17, (((~-141291887) ? ((var_1 ? ((~(arr_0 [1]))) : (~var_8))) : (((~(1 & 1))))))));
        var_18 = var_8;
    }
    var_19 = (min((((!var_13) % (var_10 | 3093825714))), var_7));
    var_20 = (min(var_20, (((!(!var_2))))));
    #pragma endscop
}
