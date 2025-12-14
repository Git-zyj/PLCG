/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_1] = var_0;
            arr_6 [i_1] [i_0] [i_0] = ((((min(9, 2147483647))) ? ((max(12, (arr_4 [i_0] [i_1])))) : 0));
            var_18 = (min(var_18, (((-(((arr_2 [i_1 - 2] [i_0 + 1]) | (17 | 29))))))));
            var_19 *= (~1663242196);
        }
        var_20 = (min(var_20, (((!(arr_3 [i_0] [i_0] [20]))))));
        arr_7 [i_0] [i_0] = (+((+(((arr_2 [i_0 - 1] [i_0 + 1]) ? -23499 : (arr_4 [i_0] [i_0]))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_21 = (-(min(2, (arr_2 [i_2] [i_2 - 1]))));
        var_22 = ((((min(1, var_16))) ? 2 : ((((min((arr_1 [i_2]), var_8))) ? (arr_8 [i_2] [i_2 - 1]) : (((arr_8 [i_2] [i_2]) ? 1 : (-2147483647 - 1)))))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((arr_9 [i_3]) ? (min((arr_12 [i_3]), 2147483647)) : (min((max((arr_12 [i_3]), (arr_11 [i_3] [i_3]))), (arr_11 [i_3] [i_3])))));
        var_23 = ((+((min((arr_11 [i_3] [i_3 + 1]), var_0)))));
    }
    #pragma endscop
}
