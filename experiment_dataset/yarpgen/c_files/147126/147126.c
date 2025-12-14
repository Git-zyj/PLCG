/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((!((((arr_1 [12]) ? (arr_5 [i_0] [i_0] [i_1]) : var_17)))))))));
                var_21 -= ((var_19 ? -14 : ((((((arr_3 [i_1]) / var_0)) > (((arr_1 [12]) ? var_16 : var_17)))))));
                arr_6 [2] [14] [i_0] = ((((((((var_19 ? var_8 : var_12))) ? var_13 : ((var_16 ? var_10 : (arr_3 [i_1])))))) || var_11));
            }
        }
    }
    var_22 = ((var_13 ? ((106 ? (var_6 % var_10) : ((var_18 ? 14 : var_18)))) : ((113 | (134 < var_5)))));
    #pragma endscop
}
