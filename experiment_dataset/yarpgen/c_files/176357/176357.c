/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (min((min(17, (arr_3 [i_0 - 1] [i_0 + 1] [i_0]))), (((!(arr_2 [6] [i_1]))))))));
                arr_4 [i_0] [i_0] = (((~var_12) & (~109)));
                var_21 = (max((((var_15 <= var_11) ? ((min(var_5, (arr_2 [i_1] [i_0])))) : ((min(var_18, 194))))), (((!var_9) + (arr_2 [i_1 - 3] [i_0 + 1])))));
                arr_5 [i_0] = 161;
            }
        }
    }
    var_22 &= ((var_6 >> (((((((0 << (var_4 - 131)))) ? var_6 : ((var_17 ? var_15 : var_5)))) - 53))));
    var_23 = (var_16 + -202);
    var_24 = (((!6) << (((min((var_18 & var_6), var_15)) - 42))));
    var_25 = var_5;
    #pragma endscop
}
