/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min((((arr_2 [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0] [i_1] [i_1]))), ((((((-2 ? 14629 : (arr_2 [i_0] [i_1])))) && -1670564843817453159)))));
                var_20 = (min(var_20, ((((min(-1, -120))) ? (arr_2 [i_1] [i_0]) : 4))));
                var_21 = ((((arr_2 [i_0] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1]))));
            }
        }
    }
    var_22 = (((((var_5 ? ((max(var_0, -12))) : var_11))) ? 40 : var_16));
    var_23 = (max(var_23, ((min((((((var_6 ? var_5 : var_7))) ? ((-7 ? 3956425384176251495 : var_5)) : (-1233619015 && var_8))), -15)))));
    #pragma endscop
}
