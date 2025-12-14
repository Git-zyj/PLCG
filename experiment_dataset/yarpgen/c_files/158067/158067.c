/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_13 ? (((var_12 >> (-41 + 53)))) : (max(var_18, (((-42 ? -72 : 2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = ((var_19 & ((var_15 ? var_7 : (arr_1 [i_2])))));
                    var_22 = (max(((((((173330605 ? (arr_3 [i_0] [i_0]) : 173330605))) ? var_6 : (var_12 && 449303823)))), (((((97 ? var_0 : var_2))) ? (40 + -37) : ((-2 ? 33423360 : -118))))));
                }
            }
        }
    }
    #pragma endscop
}
