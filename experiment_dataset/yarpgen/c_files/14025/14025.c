/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (!7425);
                var_12 = (((((min(var_9, var_6)) != var_2)) ? (((arr_3 [i_0 - 1] [i_0 + 3] [i_0 + 1]) ? var_0 : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 2]))) : var_2));
                var_13 = (arr_2 [i_0 - 1]);
                var_14 = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) != (arr_3 [i_0] [4] [10])));
                var_15 = var_2;
            }
        }
    }
    var_16 = var_11;
    var_17 = ((((min((4268676626 < var_7), (min(var_2, var_1))))) ? (((((7427 <= var_2) && (465033199 | var_2))))) : ((~((var_9 ? var_6 : var_1))))));
    #pragma endscop
}
