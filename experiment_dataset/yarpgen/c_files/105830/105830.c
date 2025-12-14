/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((max((var_14 / var_11), var_14))), ((((min(var_13, 2984))) ? 1237735102 : ((-11759 ? 303240641 : var_10))))));
    var_21 = (min(var_21, var_12));
    var_22 = ((((((((var_15 << (var_0 - 1662981741)))) ? var_0 : (0 + var_3)))) ? (((var_0 != 3057232194) / (62552 != 0))) : var_10));
    var_23 = ((-((((3991726655 * var_16) || var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_24 = (min(var_24, var_4));
                var_25 = var_11;
                var_26 = (max((((arr_2 [i_1]) ? 58215 : (arr_2 [i_1]))), 76));
                var_27 = var_4;
            }
        }
    }
    #pragma endscop
}
