/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((758863769 ? 1 : 108))) ? ((var_16 ^ (arr_3 [i_0] [i_0]))) : (min(-18, 3025945249)))));
                arr_7 [i_0] = (max((max((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))), ((min((arr_3 [i_1 - 1] [i_0]), 1)))));
                arr_8 [i_1] [i_0] = (min(((max(var_19, (arr_1 [i_0] [i_1])))), ((var_14 ? ((10 + (arr_3 [i_0] [i_1 + 1]))) : (-1508273364 + 376479049)))));
            }
        }
    }
    var_20 = var_17;
    var_21 = ((var_5 ? (max(var_9, var_8)) : (min(((var_9 ? var_18 : 2097151)), -var_2))));
    var_22 = 26910;
    var_23 -= var_13;
    #pragma endscop
}
