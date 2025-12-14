/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_19 > (((var_10 ? var_7 : var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = 6824;
                    arr_11 [i_2] [i_1] [i_1] = ((var_8 ? (((((((241 >> (((arr_3 [i_2]) - 797824787))))) || 7511)))) : (min((((var_5 ? (arr_1 [i_2]) : var_14))), ((var_13 ? var_6 : var_12))))));
                }
            }
        }
    }
    #pragma endscop
}
