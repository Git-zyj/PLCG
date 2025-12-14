/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_2 ? var_18 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (((((~(arr_0 [i_2] [1])))) ? ((var_1 ? ((~(arr_6 [i_2] [i_1]))) : var_3)) : (((var_2 ? (arr_1 [i_0 - 1]) : var_7)))));
                    var_22 = ((var_2 ? ((var_7 ? (arr_7 [i_2]) : var_17)) : ((((!(((var_7 ? (arr_1 [i_2]) : var_1)))))))));
                    var_23 = ((0 ? 664321664389220282 : 3230116185695498639));
                }
            }
        }
    }
    var_24 = ((!((max(-var_3, var_13)))));
    var_25 *= var_16;
    #pragma endscop
}
