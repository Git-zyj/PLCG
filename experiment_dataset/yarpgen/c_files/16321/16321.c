/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_4, var_7))) ? var_12 : -734321221147099243)));
    var_14 = (max(var_14, ((min((min((min(var_2, var_6)), ((max(8173, var_6))))), (((var_8 && var_11) ? var_2 : var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (arr_2 [5] [5]);
                    var_16 = (arr_6 [i_0] [i_0]);
                }
            }
        }
    }
    var_17 = (((!var_10) * ((var_7 ? var_11 : var_8))));
    #pragma endscop
}
