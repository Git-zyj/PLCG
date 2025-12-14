/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = var_9;
        var_15 ^= var_3;
        arr_2 [i_0 + 2] [i_0] = (((arr_0 [i_0 + 1]) ? var_13 : ((var_13 ? (arr_0 [6]) : var_3))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                {
                    arr_12 [i_1] = var_11;
                    var_16 = (((((arr_5 [i_1 - 2] [i_1]) ^ var_9)) * ((((1118378484 > (arr_5 [i_1 - 1] [i_1])))))));

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_1] [i_2] [14] [i_3] [i_1] = (max(((((((arr_4 [i_1]) >> (((arr_4 [i_3]) - 21528))))) ? var_0 : ((1118378484 | (arr_14 [i_1]))))), ((3176588799 - (arr_5 [i_3 + 1] [i_1])))));
                        var_17 ^= ((((((arr_5 [6] [6]) ? (arr_5 [i_1 - 1] [20]) : (arr_5 [i_1 - 3] [6])))) ? ((var_12 ? var_0 : (arr_5 [i_1 + 1] [2]))) : ((min(var_3, var_3)))));
                        var_18 ^= (max((max((var_0 || 2281153909800414893), ((var_4 ? var_8 : var_13)))), (((var_7 || ((max(var_1, var_11))))))));
                        arr_17 [i_1] [i_2] [i_3 - 1] [i_4] = (max((((max(0, (arr_8 [i_1]))) & 5)), (~13552784031760794243)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 += ((~((var_0 ? 47929 : var_5))));
                                var_20 += 1;
                                var_21 = (((arr_13 [i_2] [i_1] [i_1] [i_1 - 1]) & ((var_11 ? (arr_13 [8] [i_1] [i_1] [i_1 - 1]) : (arr_11 [i_5 - 2] [i_1 - 1])))));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_1] = (((((~(arr_18 [i_1])))) ? var_9 : ((1 ^ (arr_18 [i_1])))));
    }
    var_22 += (min((min((109 == var_6), (min(-22191, var_7)))), (~var_10)));
    #pragma endscop
}
