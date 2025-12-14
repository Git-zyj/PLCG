/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, (((((var_7 ? (((arr_1 [i_0]) % (arr_0 [4]))) : (!var_1)))) ? ((min(var_5, var_8))) : (((arr_0 [4]) ? (arr_0 [12]) : (arr_1 [i_0])))))));
        var_14 &= (((((-(arr_1 [i_0])))) ? (((((var_9 ? var_10 : var_3))) ? (((arr_1 [i_0]) ? var_4 : (arr_1 [i_0]))) : ((var_0 - (arr_1 [i_0]))))) : (((var_11 + (((arr_1 [i_0]) ? (arr_0 [10]) : var_10)))))));
        var_15 = (((((max(var_10, var_3))) ? (((arr_1 [0]) ? var_2 : (arr_0 [i_0]))) : ((var_6 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_16 = ((((((~var_10) ? ((var_0 ? (arr_5 [i_3 + 1] [i_2] [i_1]) : (arr_6 [i_1] [i_2 - 1] [i_3] [1]))) : var_4))) || (~var_11)));
                    var_17 -= (((arr_3 [i_1] [i_1 - 1]) || ((((-(arr_8 [i_1 + 1] [i_1] [11])))))));
                }
            }
        }
    }
    var_18 = (((((~(var_8 | var_3)))) ? ((((max(var_1, var_9))) ? var_12 : var_6)) : (((((var_7 ? var_11 : var_0))) ? (var_10 == var_5) : -var_5))));
    #pragma endscop
}
