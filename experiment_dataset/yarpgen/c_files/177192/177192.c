/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 ^ var_7);
    var_11 = (max(((((min(var_6, var_7)) & var_7))), (max(((min(240, var_4))), ((var_8 ? var_8 : var_5))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_12 |= (arr_0 [i_0 + 4]);
        var_13 = (((((+(max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_0])))))) ? ((var_5 ? (~var_7) : (((max(-234, (arr_0 [5]))))))) : 18366));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_2 [i_1] [i_1]);
        var_15 = ((~(max((arr_3 [i_1 + 1] [i_1 + 2]), 6835277884960391499))));
    }
    var_16 = var_0;
    #pragma endscop
}
