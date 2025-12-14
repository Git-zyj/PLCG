/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_2;
    var_18 = (var_12 ? ((var_1 ? (max(var_8, var_3)) : var_3)) : ((((var_15 < (min(17722252087562362083, var_5)))))));
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [3] [i_0] [i_0] [i_0] = min(var_3, (~-13564));
                    var_20 = min(-9189394344076042849, ((((arr_1 [11] [11]) == (min(var_2, (arr_3 [i_2])))))));
                }
            }
        }
        var_21 *= ((-(arr_2 [i_0] [i_0])));
        arr_7 [i_0] = (min((max(77, (arr_0 [i_0] [i_0]))), ((max(-101, (arr_3 [i_0]))))));
        var_22 *= ((!(((-(arr_4 [i_0]))))));
    }
    var_23 |= var_2;
    #pragma endscop
}
