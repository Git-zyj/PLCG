/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_21 = (min((((min(var_5, (arr_5 [i_2]))) - ((((!(arr_5 [i_1]))))))), (min(((((arr_4 [i_1]) ? (arr_4 [i_1]) : var_8))), ((7936 ? var_12 : var_15))))));
                var_22 = ((((max(249, 7936))) ? ((0 ? (((arr_5 [i_1]) ? (arr_3 [2] [2]) : 0)) : ((1123 ? (arr_3 [i_2] [i_2]) : (arr_6 [i_1] [i_1] [i_1]))))) : (arr_5 [i_1])));
                var_23 = (min(var_23, ((max(((min(var_9, var_9))), (max(1, ((8 ? var_10 : (arr_4 [i_1]))))))))));
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
