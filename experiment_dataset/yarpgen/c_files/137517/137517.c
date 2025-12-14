/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2] &= (max((max((arr_3 [i_2]), ((max(var_7, var_10))))), (((84 == (max((arr_4 [i_2] [i_1]), var_13)))))));
                    var_19 = (((arr_0 [i_0] [i_0]) ? ((-(arr_1 [i_2 - 1]))) : ((((max(2576786982, -2098831787469169064))) ? ((255 ? var_0 : (arr_4 [i_1] [i_1]))) : (arr_2 [i_1])))));
                    var_20 = min(var_10, -83);
                    var_21 = (((((255 ? var_5 : var_12)) * (1 <= 1099511625728))));
                }
            }
        }
    }
    var_22 = -var_3;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_23 = (max(var_23, ((max(((((((arr_8 [i_3]) ? var_7 : (arr_11 [i_5]))) > (min((arr_11 [i_5]), var_16))))), ((~(arr_13 [i_3] [i_4] [3]))))))));
                    var_24 = (((((((var_7 ? (arr_13 [i_3] [i_3] [i_5]) : (arr_10 [i_5] [i_4])))) ? (min((arr_10 [i_4] [i_5]), var_11)) : (((min(var_9, var_18)))))) != (arr_11 [20])));
                }
            }
        }
    }
    var_25 |= ((var_14 ^ (((192 ? var_15 : -1914143158)))));
    #pragma endscop
}
