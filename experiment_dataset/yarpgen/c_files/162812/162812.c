/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_11 = 74;
                    arr_8 [i_0] [i_1] [i_2 - 1] = (((-32028 == 42849) ? ((((arr_0 [i_1]) ? (((!(arr_2 [0] [i_1])))) : -32021))) : (min(((((arr_2 [i_0] [i_1 - 3]) ? var_6 : var_5))), (max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [1] [i_1] [i_2])))))));
                    var_12 = (max(var_12, (arr_1 [i_1] [i_2])));
                }
            }
        }
    }
    var_13 = (((((((min(var_1, var_1))) ? -10963 : ((var_5 ? 32016 : 42849))))) / var_10));
    #pragma endscop
}
