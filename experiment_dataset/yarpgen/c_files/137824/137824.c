/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_11, 3))) ? -1089630853 : var_9));
    var_16 = 1;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((1089630847 ? ((~(-127 - 1))) : 255))) ? (max((min(18014396361998336, -15)), (!var_1))) : (((308842064 ? 255 : 1089630870))))))));
        arr_2 [i_0] = var_0;
    }
    var_18 = -var_3;
    #pragma endscop
}
