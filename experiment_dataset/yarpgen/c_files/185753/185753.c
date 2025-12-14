/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_12 = ((3943917185313505248 >> ((((-3943917185313505253 ? 132 : 33554431)) - 109))));
                    arr_7 [i_2] [i_2] = (((((var_0 ? ((var_9 ? var_0 : var_7)) : var_2))) ? (min((28407 / var_7), var_1)) : ((((var_6 ? 39706 : var_7))))));
                    arr_8 [i_1] [i_2] = -594192201;
                }
            }
        }
    }
    var_13 = ((var_5 ? var_4 : ((3943917185313505261 ? (((1 >> (var_0 - 113895754687118798)))) : -1811529757))));
    var_14 = var_9;
    #pragma endscop
}
