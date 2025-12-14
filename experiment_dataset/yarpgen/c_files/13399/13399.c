/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_17 ? (min(((var_16 ? var_17 : var_13)), (~var_17))) : ((((var_6 >= (!var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = ((((arr_1 [i_2] [i_1]) - ((var_3 + (arr_5 [i_2]))))));
                    var_21 = max((arr_0 [i_1] [i_0]), (((((var_15 ? (arr_3 [i_2]) : (arr_0 [i_0] [i_1])))) ? (((var_7 / (arr_0 [i_0] [i_1])))) : (min(var_1, var_7)))));
                }
            }
        }
    }
    var_22 = var_8;
    var_23 = var_7;
    #pragma endscop
}
