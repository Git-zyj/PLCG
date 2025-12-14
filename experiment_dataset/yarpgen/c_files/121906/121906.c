/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = 2209485683776923026;
                var_16 = ((((((min(1, (arr_1 [i_1])))) <= (arr_5 [i_0]))) ? (((((17265 & (arr_1 [i_0]))) > ((((arr_1 [i_0]) != var_2)))))) : ((var_1 ? (var_12 != var_1) : ((max(var_5, (arr_4 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((((((-1691704792 ? var_13 : var_0))) ? var_11 : ((min(1, (arr_3 [i_2] [i_4])))))), ((((max(-5318, 0))) ? (max(-1691704772, 0)) : ((max(4149, (arr_11 [17])))))))))));
                    var_18 &= (((((!((max((arr_16 [i_2] [i_3 + 1] [i_4]), 1)))))) ^ (((var_6 - 1) ? (arr_0 [i_2] [i_3 + 1]) : (1 * var_13)))));
                    var_19 = (((0 / 133) ? (arr_12 [i_2] [i_3 + 1] [i_4]) : ((-(arr_12 [i_2] [i_3 - 1] [i_4])))));
                }
            }
        }
    }
    var_20 = (var_6 >= ((((min(var_1, var_4))) ? var_8 : (var_10 | var_14))));
    #pragma endscop
}
