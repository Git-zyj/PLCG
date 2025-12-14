/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((!var_14) ? ((var_8 - (arr_0 [i_0]))) : (((!(((var_14 / (arr_2 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = ((((146 == ((min(var_11, var_13))))) ? (((!var_16) ? (((((arr_6 [i_1]) && var_11)))) : ((var_12 ? (arr_10 [i_1] [2]) : 118)))) : ((((!(arr_6 [i_2 - 3])))))));
                    var_18 = var_15;
                }
            }
        }
    }
    var_19 = (max((((~(!0)))), (min(var_6, 255))));
    var_20 = ((((((((var_3 ? var_1 : var_10))) ? (max(var_16, -1689127762)) : ((var_0 ? var_4 : var_4))))) ? ((var_10 ? (var_3 * var_15) : ((var_9 ? var_8 : var_0)))) : var_8));
    #pragma endscop
}
