/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((-247 < (~-871797987))))) * (max(var_9, (var_0 != 53874)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (-2147483647 - 1);
        var_13 = (((((18121 ? 5 : 1))) ? var_1 : ((((14628 | -646139251) == var_4)))));
    }
    var_14 = 60;
    var_15 = var_1;
    #pragma endscop
}
