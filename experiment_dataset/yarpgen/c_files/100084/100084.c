/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = (((4080 <= 2147483647) <= (((((var_15 ? var_12 : var_9)) == 120)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (~(((((arr_5 [i_0]) && (arr_4 [i_2] [i_0]))) ? (arr_7 [i_1 + 1] [i_1] [i_2]) : ((((((arr_0 [i_0]) + 2147483647)) >> (((arr_3 [i_1] [i_2]) - 203))))))));
                    var_20 = (((((~((max((arr_2 [i_1] [i_2]), (arr_3 [i_0] [i_0]))))))) && ((((arr_5 [i_1]) | (arr_6 [5] [i_2] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_21 = (((((~(max(var_5, var_5))))) ? ((var_15 ? (~-123) : (var_12 | var_4))) : var_1));
    var_22 = ((~((-61437 ? (max(var_1, var_0)) : -var_8))));
    #pragma endscop
}
