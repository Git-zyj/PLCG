/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_12 ? (min((var_9 & 1615533488), ((min(111, var_3))))) : -2712321720));
    var_14 = (min(((var_4 ? 1552692747 : 2679433807)), (((!(((48655 ? var_2 : var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max((max(38897, 144044819331678208)), var_3));
                var_15 = -var_7;
                arr_7 [i_0] [i_1] = (arr_5 [i_0]);
                arr_8 [i_0] [i_0] [i_0] = ((-84 || ((((((var_11 ? var_11 : var_3))) ? ((max(var_2, (arr_1 [i_0])))) : ((144044819331678208 ? (arr_0 [i_0]) : 3454784363402110486)))))));
                arr_9 [i_0] [i_1] = (min((min(((var_0 ? var_7 : 16558)), ((3454784363402110486 ? -273812780 : (-127 - 1))))), var_6));
            }
        }
    }
    var_16 = (max((min(var_6, ((189 ? -5655114455677073188 : -2147483645)))), var_11));
    var_17 = var_2;
    #pragma endscop
}
