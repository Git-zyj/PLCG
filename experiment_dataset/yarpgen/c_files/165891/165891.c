/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max(((var_3 ? 6996474656850527205 : 21340)), (var_14 != var_9))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) != (arr_1 [i_0] [2])));
        arr_3 [i_0] [12] = (((var_6 != (max(4282824379, var_14)))));
        var_16 = (max(var_16, (((((-((var_11 ? (arr_0 [i_0]) : var_9)))) * (((!((((arr_0 [i_0]) ? var_5 : 4282824400)))))))))));
        var_17 = ((((~(arr_0 [i_0]))) << ((((~(~var_9))) + 17496))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 &= (!2394867305300920634);
        arr_6 [i_1] = (((var_2 > var_14) / var_6));
    }
    var_19 = (max((((~(min(12142882, -57))))), (((!16642) ? (min(var_14, 7602854135842117017)) : (((var_3 ? 9055590539267515245 : 65535)))))));
    #pragma endscop
}
