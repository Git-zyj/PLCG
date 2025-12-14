/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_8;
    var_16 = (((((~var_10) * (!2695054502))) << ((((2695054503 / var_2) == 57)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 |= ((((!(var_1 % 1683620897)))));
                var_18 = (max((((~((max(var_0, (arr_3 [14]))))))), (max((arr_1 [i_0] [i_1]), 2888691558))));
                var_19 = (((var_5 ? ((((arr_0 [i_0]) / 13794))) : (773044292 / 504))));
                var_20 *= (((((!(!32762)))) << (((arr_4 [i_1]) ? (arr_2 [i_0] [i_0] [i_1]) : (((arr_3 [i_0]) >> (var_12 - 15397415747610460918)))))));
            }
        }
    }
    #pragma endscop
}
