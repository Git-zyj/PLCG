/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(14979659559686151468, (min((((1511591720 ? 1511591720 : var_3))), 4920941067484083787))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min((((!((max(-74, 2783375562)))))), (max(var_3, var_14))));
                arr_5 [i_0] [i_0] = ((min(var_5, (arr_1 [i_0]))));
                arr_6 [i_0] [i_1] [i_0] = (((((arr_1 [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : (~3467084514023400147)))) ? (((arr_2 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : var_7)) : (((((min((arr_2 [i_0] [i_0] [i_1]), 2111075085513399243)) >= ((((arr_1 [i_0]) << (((arr_1 [i_0]) - 148081169))))))))));
                arr_7 [i_0] = (min(var_1, (((arr_3 [i_0] [i_1] [i_1]) * ((-27783 ? 18446744073709551611 : (arr_2 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
