/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((2146959360 + var_18) * (-5 + var_12))) - (((var_18 - var_0) * (-100 * var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = ((((((var_13 | (arr_5 [i_0] [i_1])))) | (18446462598732840960 | var_14))) | ((((((arr_0 [11]) & var_3)) ^ (((arr_3 [i_0 - 1] [0] [i_0 - 1]) ^ (arr_3 [0] [i_1] [i_1])))))));
                var_22 = (((((var_13 * 8257917344236682503) / (18446462598732840960 / var_18))) * ((((((arr_5 [i_0] [i_1]) / var_19))) / (((arr_2 [i_0 - 2] [i_1]) * var_2))))));
                var_23 = ((2 + -65) * ((((var_19 / (arr_1 [i_1]))) / (((arr_4 [i_0] [i_0] [i_1]) / var_4)))));
            }
        }
    }
    #pragma endscop
}
