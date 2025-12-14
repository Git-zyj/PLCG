/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = (((((max(var_13, var_15)) - ((max(var_14, var_10))))) != var_6));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_20 *= (~0);
        var_21 = (max(var_21, ((max(((~(max((arr_2 [i_0]), var_5)))), ((-(arr_2 [i_0 - 1]))))))));
        var_22 *= (min((min((min(var_13, var_9)), ((var_2 ? var_6 : var_3)))), (((max((arr_1 [i_0 - 1] [i_0]), var_2)) + (arr_1 [i_0 - 1] [i_0 + 1])))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_23 = (min(var_23, ((min(19988, 19988)))));
        arr_5 [i_1] = ((max((((arr_2 [i_1]) / var_6)), (((var_13 ? (arr_4 [i_1] [i_1]) : var_8))))));
    }
    #pragma endscop
}
