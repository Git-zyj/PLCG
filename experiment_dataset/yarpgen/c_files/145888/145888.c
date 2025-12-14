/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_0 >= var_18) / ((min(var_7, var_2)))))) ? ((((var_9 ? var_2 : var_13)) - -var_7)) : var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((~(((var_16 || (arr_2 [i_0] [i_1 - 1]))))));
                var_21 = (((((-(arr_0 [i_1 + 1])))) ? (max(var_12, ((~(arr_1 [i_0]))))) : ((var_9 ^ (var_3 | var_13)))));
            }
        }
    }
    var_22 += ((var_1 ? ((-((max(var_3, var_3))))) : var_11));
    var_23 = ((var_14 >= (min(((max(var_2, var_2))), (max(var_15, var_15))))));
    #pragma endscop
}
