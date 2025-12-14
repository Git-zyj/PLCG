/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max(((-1927954662 ? var_12 : var_3)), (((2402485634 ? var_7 : var_13))))), var_0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (((min(11, 2634275704)) % -6853));
        arr_4 [i_0] = (((575579907 || ((max(1, 3358385303))))) ? -12896 : ((var_14 ? 65515 : (max(4274437606, 19716)))));
    }
    #pragma endscop
}
