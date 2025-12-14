/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(((var_3 ? var_5 : var_6)), var_12)) >> var_11));
    var_15 = ((!((((15715209926598155898 * var_11) + (((var_8 ? var_11 : var_7))))))));
    var_16 = (((((!var_6) != var_0)) ? (((((min(var_11, var_9)) < (var_10 < var_7))))) : (((!var_7) ? (max(var_2, var_13)) : 175))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = var_0;
                var_18 = (max(((max(((var_8 ? 1908435247 : (arr_0 [i_0]))), var_1))), ((var_3 ? ((((var_5 < (arr_1 [i_0]))))) : ((var_2 ? (arr_0 [4]) : var_9))))));
                arr_6 [i_1] = max((((arr_1 [i_0]) ? (arr_0 [i_1]) : (((1 ? var_5 : -18899))))), (((!(((-62 ? 1 : var_12)))))));
                var_19 = ((max(var_4, (arr_1 [i_0]))));
            }
        }
    }
    #pragma endscop
}
