/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(var_2, ((var_3 ? var_13 : var_3)))), (max((((var_5 ? var_0 : var_12))), ((var_8 ? var_15 : var_1))))));
    var_18 = ((~(~var_10)));
    var_19 = ((32760 ? -var_3 : var_1));
    var_20 = (max(var_20, ((max((17725257784699383773 >= var_16), (var_1 > var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [13] [i_0] [i_1 - 2] = ((~(!var_6)));
                var_21 = var_9;
            }
        }
    }
    #pragma endscop
}
