/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_19 = (~-2105003030);
            arr_4 [i_0] [i_1] = var_13;
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_20 = ((!(arr_1 [i_0])));
            var_21 = var_8;
            var_22 &= ((((min((~var_2), (arr_3 [i_2] [1] [i_0])))) ? ((((arr_3 [i_2 + 1] [i_2] [i_2 - 2]) - var_2))) : var_14));
            arr_7 [i_0] [i_2] [i_2] = (16777088 ? 7806098370080854018 : -7806098370080854021);
            var_23 = ((!(15138 && 2254008201)));
        }
        var_24 = ((var_3 ? (arr_1 [i_0]) : (7806098370080854033 % 16317)));
        var_25 = max((((arr_0 [i_0]) ? ((-(arr_6 [6] [5] [i_0]))) : (arr_5 [i_0] [i_0]))), var_13);
        arr_8 [i_0] [i_0] = (max(((((arr_5 [i_0] [i_0]) != (arr_2 [i_0] [i_0])))), ((((var_8 << (((arr_0 [i_0]) + 20925)))) + var_12))));
    }
    var_26 = ((var_3 ? (max(((var_18 ? var_1 : var_18)), var_16)) : 7806098370080854034));
    #pragma endscop
}
