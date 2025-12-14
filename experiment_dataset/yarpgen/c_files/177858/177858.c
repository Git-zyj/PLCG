/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 -= ((27886 ? 27886 : 37649));
                arr_4 [i_1] [i_0] &= (arr_3 [i_1]);
                var_21 -= (((arr_3 [i_0]) ? ((((!((((arr_2 [i_0]) ? (arr_2 [i_0]) : 105))))))) : (((arr_0 [i_0]) ? (!42766) : (arr_3 [i_1])))));
            }
        }
    }
    var_22 = (((((max(var_12, var_10)) ? 0 : var_10))));
    var_23 = (min(var_23, (((min(((var_12 ? 37649 : 579)), ((var_17 ? var_13 : 27874))))))));
    #pragma endscop
}
