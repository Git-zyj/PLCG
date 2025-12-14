/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_8 > ((max(var_1, var_2))))) ? (13290671977433453220 > 1) : 1);
    var_12 = 13290671977433453233;
    var_13 = (((var_2 & var_3) ? (((var_1 ? var_1 : var_2))) : (!13290671977433453235)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [1] [1] = ((~(((((0 ? var_2 : (arr_2 [18] [21])))) ? (1 > var_2) : (!var_8)))));
                    var_14 = ((((~((398752839 ? 1 : var_0)))) ^ ((var_5 ? var_1 : 18446744073709551595))));
                }
            }
        }
    }
    #pragma endscop
}
