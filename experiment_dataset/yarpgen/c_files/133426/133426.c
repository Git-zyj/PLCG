/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((((2120387553392700892 << (((arr_0 [i_0]) - 4038510442))))) ? 14618867529911568653 : (((53 << (41 - 40)))))))));
        arr_3 [i_0] [i_0] = ((var_10 ? -1805823227156339675 : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = -7445622182468196250;
        var_21 *= (((arr_5 [i_1]) >= (arr_4 [i_1] [i_1])));
    }
    var_22 = (min(var_22, ((min(60976, -60)))));
    var_23 = var_0;
    #pragma endscop
}
