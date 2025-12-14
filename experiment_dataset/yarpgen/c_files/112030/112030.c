/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (min((((((max((arr_2 [22] [7]), (arr_4 [i_0] [i_0])))) ? (arr_3 [i_2 - 1] [i_1] [i_0]) : (arr_6 [i_2])))), (((var_12 + var_14) ? (((max(var_5, (arr_7 [i_1] [i_1] [i_1] [i_0]))))) : (arr_1 [i_0])))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((max(((max((arr_5 [5] [5]), (arr_0 [i_0] [i_1 + 2])))), (((arr_5 [i_0] [i_2]) << (((arr_4 [i_2 + 2] [i_1]) - 14464)))))));
                }
            }
        }
    }
    var_21 = (((((max(var_16, var_3)))) ? var_0 : (max((~var_4), ((var_14 ? var_12 : var_1))))));
    var_22 = ((((max(7045, var_3)) ? ((var_4 ? var_3 : var_12)) : ((var_15 ? var_13 : var_1)))));
    var_23 = min((((var_1 ? var_0 : var_19))), (((!(((var_3 ? var_15 : -7046)))))));
    #pragma endscop
}
