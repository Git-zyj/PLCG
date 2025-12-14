/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((-305134001 ? 4294967272 : var_4))) ? ((min(2013946290, var_13))) : (max(1, var_5)))) >> (((((((var_11 ? var_14 : var_16))) ? ((24 ? var_6 : var_2)) : var_18)) - 3177936844))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((((((!(arr_0 [i_0] [i_1]))))) >> ((((((min(40132, 2985839283))) ? (arr_1 [i_2]) : (arr_7 [1] [i_1] [i_1]))) - 31980))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (((max((arr_3 [i_1]), 3)) != (arr_7 [i_2] [i_1] [i_0])));
                    arr_9 [i_2] = (max((((arr_1 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_1 [i_0]))), (max((arr_0 [i_0] [i_2]), (arr_0 [i_2] [i_1])))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (((((((-(arr_6 [i_0] [i_1] [i_0] [i_0])))) && (var_14 / var_16))) ? (((((arr_3 [i_0]) > (arr_2 [i_0] [i_1]))))) : 23));
                }
            }
        }
    }
    var_21 = ((((min(var_17, ((var_10 ? var_7 : -28489))))) ? (max((((var_16 ? 17 : var_7))), (var_9 & var_5))) : 28488));
    #pragma endscop
}
