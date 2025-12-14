/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(0, (min(var_3, -var_3))));
    var_16 = ((min(var_14, (max(var_6, var_5)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = (5 ? 60009 : -2);
        var_18 = ((!((min(1060, 1061)))));
        arr_2 [i_0] = ((((((arr_0 [i_0]) + (arr_0 [i_0])))) + 3619900451));
        var_19 = 239;
    }
    #pragma endscop
}
