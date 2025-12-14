/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 1] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [13] [i_4] [i_0] [i_4] [i_1] [i_0] = (((((min((arr_10 [i_0 - 3]), 1)))) % -125));
                                arr_15 [i_0] [i_4] [i_4] [i_4] [i_0] [i_0] = ((((~(arr_3 [i_3] [i_2] [i_0 - 1]))) >> (min(((~(arr_10 [i_0]))), ((min(1, (arr_13 [i_4]))))))));
                                var_19 += ((~(max((min((arr_5 [i_1] [i_2] [i_3]), -1471774776703222604)), (arr_13 [i_3])))));
                                var_20 = (min(var_20, ((min(((56 ? var_3 : (arr_1 [i_4 + 3] [i_2 + 2]))), ((-(arr_1 [i_4 + 3] [i_2 - 3]))))))));
                            }
                        }
                    }
                    var_21 = ((~((((var_2 ? 6867364154675271880 : var_17)) - (((max((arr_11 [3] [i_1] [3] [i_1] [i_0] [i_0 - 1]), var_14))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 = (min(((max(1, 1))), (max((arr_12 [i_0] [2] [i_2] [i_5] [i_5] [i_5]), 5006765076034774298))));
                                var_23 |= ((~((((arr_16 [i_0 - 2] [i_6] [i_2] [i_6]) && (((1 ? (arr_17 [i_6] [i_0 - 3] [i_2 + 3] [i_5]) : 511))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 -= var_0;
    #pragma endscop
}
