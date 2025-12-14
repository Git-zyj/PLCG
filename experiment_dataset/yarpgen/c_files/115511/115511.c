/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (max(var_10, ((((((min((arr_1 [i_0]), (arr_0 [i_0]))) <= (arr_0 [5]))) ? ((-(27152 | var_2))) : (!148))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_11 = (min((max((max((arr_0 [i_0]), (arr_1 [i_0]))), ((max(var_6, 103))))), (min((arr_0 [i_1]), var_3))));
            var_12 = (min(var_12, ((max(((((min(1674859663, (arr_1 [21])))) ? (((max(var_0, var_6)))) : ((var_0 ? (arr_0 [i_1]) : -2147483645)))), (arr_2 [i_0] [i_0]))))));
        }
        var_13 = min(37899, (max((min((arr_0 [i_0]), 100)), ((max(4126138530, -1674859663))))));
        var_14 = arr_2 [i_0] [22];
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = ((152 ? ((max((~var_1), ((min(107, (arr_7 [i_2]))))))) : (max((((arr_0 [14]) ? (arr_1 [i_2]) : (arr_0 [i_2]))), var_9))));
        var_15 = (((((max(93, (arr_1 [20]))) >> (((min(112, (arr_3 [i_2]))) - 83)))) <= var_5));
        var_16 = (min((max((arr_1 [i_2]), ((min(var_1, 108))))), 27152));
        arr_10 [i_2] [i_2] = (max((((arr_1 [i_2]) ? 28656 : (arr_1 [i_2]))), (((arr_5 [i_2]) & (arr_1 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_17 = (~0);
        var_18 = (max(((max((-32767 - 1), ((max(103, 103)))))), ((-32765 ^ (arr_11 [i_3] [i_3])))));
        arr_13 [i_3] = 140737488355327;
        var_19 = (min((((-27152 ^ var_3) ? -32744 : ((-32744 ? (arr_12 [i_3]) : -32738)))), ((max((((var_1 >= (arr_2 [i_3] [i_3])))), (arr_3 [i_3]))))));
        var_20 |= (-32767 - 1);
    }
    var_21 -= ((var_3 ? ((((((min(-910304672, var_1)) + 2147483647)) >> ((((var_1 ? 95 : 1517859327052465390)) - 72))))) : (min(((var_7 ? var_3 : var_7)), -162))));
    var_22 += (var_6 <= var_2);
    var_23 = (max(((var_0 ? var_2 : ((min(var_3, 148))))), ((var_5 ? (!162) : -var_6))));
    #pragma endscop
}
