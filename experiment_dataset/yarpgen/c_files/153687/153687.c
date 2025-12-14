/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 ? ((~(min(var_9, -8)))) : var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [5] = ((((min((((arr_3 [i_0] [i_1]) ? var_18 : (arr_1 [i_1]))), -6700))) ? (min((!var_11), (max(var_16, var_6)))) : ((((((65 ? 136 : (arr_1 [i_1]))) >= (arr_3 [i_0] [16])))))));
                arr_5 [i_1] [i_0] = (((arr_1 [i_0]) >= -0));
            }
        }
    }
    var_21 = -3903583178581941973;
    var_22 = (max(((-251722865 ? var_14 : ((var_13 ? var_5 : 0)))), (((((0 ? var_10 : var_0)) & (13799 && var_7))))));
    var_23 = ((var_11 ? var_7 : ((min(var_5, ((max(var_8, var_13))))))));
    #pragma endscop
}
