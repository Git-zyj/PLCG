/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((((arr_4 [11] [i_1]) - -var_7))) ? (((((7 + (arr_3 [i_0])))) ? (max(35184372088832, 35184372088832)) : var_3)) : 288221580058689536);
                var_16 |= (max(((var_4 ? (1442590915 | 2147483645) : (min(var_5, var_9)))), 1));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_9 [i_2] [i_2] |= (((arr_8 [i_2] [i_2]) ? 2802757472523386339 : ((var_4 ? -2147483645 : var_13))));
        arr_10 [i_2] = var_12;
    }
    var_17 = var_11;
    #pragma endscop
}
