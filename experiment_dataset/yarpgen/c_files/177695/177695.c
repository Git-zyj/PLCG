/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 2913265956850220772;
    var_15 = ((((-var_13 ? -4876 : ((var_0 ? 503130022 : var_0))))) ? ((((!(((-106 ? var_2 : 2865136756))))))) : var_9);
    var_16 = (max(var_16, (((150 ? (((~var_11) & var_4)) : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [11] [i_2] = (max((min(((150 ? -4879 : (arr_1 [i_0]))), ((min(907145994, 115))))), ((min((var_0 - 125), ((128 ? (arr_5 [10] [i_1] [i_0]) : var_12)))))));
                    arr_8 [i_2] [i_1] [i_2] = -1277259352;
                }
            }
        }
    }
    var_17 = ((var_1 ? ((((!(((var_13 ? var_6 : 4876))))))) : var_7));
    #pragma endscop
}
