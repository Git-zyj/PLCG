/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_10 = var_8;
        var_11 = (min(var_11, (((((((arr_1 [2] [i_0]) & var_0))) ? (min(4135658683409568950, (max(-4135658683409568950, 36559)))) : var_2)))));
        var_12 = 25675;
        arr_2 [19] [i_0] = ((!((min((min(28996, (arr_1 [i_0] [i_0]))), var_7)))));
    }
    var_13 = ((((min(var_7, var_2))) ? var_6 : (min(var_4, (min(var_9, 36559))))));
    #pragma endscop
}
