/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = ((((((-(arr_1 [i_0]))) + 2147483647)) >> (((arr_0 [i_0]) - 8483))));
        arr_3 [i_0] = ((var_16 ? ((min(var_3, (arr_2 [i_0] [i_0])))) : ((((arr_2 [i_0] [i_0]) == var_6)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (arr_0 [i_1 + 2]);
                    arr_9 [i_0] [10] [10] = (var_11 == var_4);
                }
            }
        }
        var_19 += var_11;
    }
    var_20 = ((((min(32765, -118))) ? 20 : var_14));
    var_21 = (((((var_4 ? ((var_15 ? var_2 : var_7)) : var_5))) ? var_16 : var_12));
    #pragma endscop
}
