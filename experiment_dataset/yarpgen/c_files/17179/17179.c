/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(var_10, var_2)))));
    var_17 = (min(var_17, ((((((var_7 ? ((max(4289493155, var_1))) : var_13))) ? (-4289493151 - 4289493143) : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((-(((!(arr_1 [i_0] [i_1]))))));
                var_19 = 4289493151;
                var_20 = (5474127 ? (max((arr_4 [i_0] [i_0] [i_1]), (arr_1 [i_0] [i_1]))) : (arr_3 [i_0]));
                var_21 = (arr_3 [i_0]);
                var_22 |= (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_23 |= var_7;
    var_24 = (((-var_12 ? var_12 : var_10)));
    #pragma endscop
}
