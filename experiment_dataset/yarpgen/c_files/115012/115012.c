/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_17 = max((((arr_8 [i_1] [i_3 - 1] [i_3 - 1] [4]) & (arr_8 [i_2] [i_3 - 1] [i_3] [i_3]))), ((~(~213490638))));
                        arr_9 [i_2] = (min(1, (min((arr_4 [i_2] [i_1] [15] [15]), (((!(arr_1 [i_3 - 1]))))))));
                        arr_10 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3 + 2] = (min(((min((arr_5 [i_3 - 2] [i_3 + 2] [i_3 + 2]), (arr_3 [i_3 - 2] [i_1])))), ((((((arr_8 [i_0] [i_1] [i_2] [i_3]) | (arr_8 [i_0] [9] [i_2] [i_3 + 1])))) ? var_3 : (arr_2 [i_3 + 3])))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_18 = (-((var_5 ? (arr_0 [i_1] [i_4]) : (arr_2 [i_1]))));
                        arr_14 [i_0] [2] [6] [i_2] [2] = (max((arr_0 [i_0] [i_1]), (((((var_15 ? 213490619 : (arr_5 [i_0] [i_1] [i_4])))) ? (arr_4 [i_1] [i_1] [10] [12]) : 213490626))));
                    }
                    arr_15 [i_2] [i_1] = (max((min((arr_8 [i_0] [i_1] [i_2] [i_2]), 0)), (((arr_0 [i_1] [i_1]) ? var_16 : ((-(arr_1 [5])))))));
                }
            }
        }
    }
    var_19 = (min(var_19, (((1 ? (((!1) - ((var_7 ? var_10 : var_3)))) : ((min((var_9 | 60891), (var_4 && var_6)))))))));
    var_20 = 15471;
    #pragma endscop
}
