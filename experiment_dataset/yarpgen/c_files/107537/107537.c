/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(!var_11)));
    var_21 = ((((!((min(4416, 5965153201905106479))))) ? (max(((-1401393122 ? var_11 : var_3)), (((var_6 ? var_8 : var_18))))) : var_13));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = (min(((((((var_17 ? 345408015 : -7832655405695763087))) || (((-1401393122 ? -1401393122 : (arr_3 [i_0] [0]))))))), var_15));
                arr_5 [i_0 + 4] [i_0 + 2] [i_0] = ((+(min((!var_9), (~var_5)))));
                arr_6 [i_1] = (max(((((((arr_3 [i_0] [i_1 + 1]) ? -5010 : (arr_0 [i_1])))) ? ((min((arr_3 [i_0] [i_1 - 1]), 15632))) : (min((arr_4 [10] [7] [i_0]), 2902518094509191500)))), ((((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
