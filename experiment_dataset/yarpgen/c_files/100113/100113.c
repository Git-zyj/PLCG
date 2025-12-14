/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((var_7 ? (~var_4) : var_6))));
    var_18 = (max((min(((var_8 ? var_16 : var_1)), var_2)), ((((var_9 != var_9) && (!var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((arr_1 [i_1] [i_1]) >> (((arr_3 [i_0] [i_1]) - 9388774486958635174)));
                var_20 = (max(var_20, (max((((((arr_0 [2]) ? var_13 : var_1)) >> (((arr_3 [i_1] [i_0]) - 9388774486958635128)))), (var_3 >= var_15)))));
                var_21 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_22 |= ((1 ? var_0 : (max(var_1, (var_1 & var_3)))));
    #pragma endscop
}
