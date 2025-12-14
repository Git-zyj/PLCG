/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = ((1 ? (arr_12 [i_0 - 1] [i_0 - 2] [i_3]) : ((max((arr_12 [i_0 + 2] [i_0 - 2] [i_3]), (arr_12 [i_0 - 1] [i_0 - 1] [i_2]))))));
                            var_18 = (arr_9 [i_0] [i_2] [i_2]);
                            var_19 = (max(var_19, ((((65532 ? (min(5317018914281537687, (arr_4 [i_1] [1] [i_2])) : (var_13 ^ var_6))))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [1] = (max(8796090925056, ((min(1, (arr_2 [i_0 - 2] [i_0 - 2]))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_20 &= (((1 != (min(var_15, (arr_6 [i_4]))))) && (((((((arr_9 [1] [i_4] [i_4]) ? (arr_7 [1] [i_4]) : var_4))) ? ((102 ? var_0 : (arr_4 [i_4] [i_4] [4]))) : ((((arr_6 [i_4]) ? var_0 : 0)))))));
        var_21 &= ((+((min((min((arr_3 [i_4] [i_4]), 1)), 1)))));
        arr_16 [i_4] &= 13;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((var_7 ? (((((1 ? var_14 : 520888758639003049))) ? ((0 ? (arr_17 [13]) : 18)) : (((min((arr_18 [i_5]), (arr_17 [i_5]))))))) : (((~((-(arr_18 [i_5]))))))));
        var_22 += ((((((arr_17 [i_5]) != (((0 != (arr_18 [i_5]))))))) & (arr_17 [i_5])));
    }
    #pragma endscop
}
