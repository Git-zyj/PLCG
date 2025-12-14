/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((arr_0 [i_1 - 3] [i_1]) + (arr_2 [i_1 - 2] [i_1 - 2] [i_1])))) ? ((((((var_0 % (arr_1 [i_0] [i_0])))) <= (((arr_2 [4] [2] [i_1]) ? (arr_2 [i_0] [3] [5]) : 117))))) : ((((arr_3 [i_0]) || 0)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [0] [3] = arr_3 [i_1 - 4];
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((-var_13 ? (-117 - 0) : 1))), (((arr_8 [9] [i_1] [7] [i_3] [i_4]) ? ((min(124, (arr_8 [i_0] [i_1] [i_1] [i_3] [i_4])))) : ((8646911284551352320 ? (arr_7 [i_0] [i_1] [i_0] [i_3]) : 31525197391593472))))));
                                var_17 = ((2044972807341204580 ? var_0 : (((max(var_3, (arr_6 [i_3 - 2] [i_3 - 2] [i_3])))))));
                            }
                        }
                    }
                }
                var_18 = ((((((arr_8 [i_0] [i_1] [4] [i_1] [i_1]) ? var_11 : (arr_9 [i_0] [i_0] [7] [i_0] [i_0] [i_1 - 3] [i_0])))) ? ((max((arr_8 [i_0] [i_1] [i_1] [i_0] [9]), (arr_7 [i_0] [i_1] [1] [i_0])))) : (max(-9223372036854775782, 18415218876317958162))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] = (var_12 ? ((((!(((~(arr_5 [i_0] [1] [9] [i_6])))))))) : (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]) - (var_3 % var_15))));

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                var_19 = (((arr_6 [i_1 - 1] [i_5 + 1] [3]) < (arr_2 [i_1 - 4] [7] [i_1 - 4])));
                                var_20 |= ((((1024 ? (arr_25 [i_5] [i_1] [2] [4] [i_7] [i_1] [i_7]) : var_2)) << (var_16 + 45)));
                            }
                            arr_26 [0] [i_1] [i_1] [i_1] = var_7;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_10;
    var_22 = ((~(~-20)));
    #pragma endscop
}
