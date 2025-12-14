/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 ^= ((!(arr_1 [i_0])));
                var_14 *= (min(var_2, (max((((arr_1 [7]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1] [i_1]))), 3237158560))));
                var_15 = (max(((-(((arr_1 [i_1]) * (arr_3 [i_1]))))), ((((arr_3 [i_0 - 1]) || (arr_0 [i_0]))))));
                var_16 = ((((arr_1 [i_0 + 1]) | (arr_1 [i_0 + 2]))) ^ ((((!(arr_1 [i_0 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_17 += (arr_5 [i_2] [i_3]);
                var_18 = (arr_7 [i_3] [i_3]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_14 [i_2] [i_3] [i_2] [i_2] = ((((((arr_4 [i_2 - 1]) / (arr_4 [i_2 - 1])))) ? (((arr_4 [i_2 - 1]) ? (arr_4 [i_2 + 1]) : (arr_9 [i_2 - 1]))) : (arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1])));
                                arr_15 [i_2] [i_5] [i_2] [i_3] [i_2] = ((((min(var_8, -125))) ? (arr_13 [4] [i_3] [11] [i_5] [i_6]) : (((-1460954443 ? (((arr_4 [10]) ? 2878052462 : var_12)) : (arr_10 [i_2] [i_2] [12] [i_5] [i_6] [i_4]))))));
                                var_19 += (min((((arr_11 [10]) ? (var_9 / 1460954444) : (((arr_12 [i_2] [1] [12] [i_4] [i_5] [i_6]) ? 15539792154649291512 : (arr_4 [i_2]))))), (arr_4 [i_6])));
                                var_20 = -var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_8 ? var_1 : ((var_9 ? ((var_11 ? var_7 : 153)) : var_7))));
    #pragma endscop
}
