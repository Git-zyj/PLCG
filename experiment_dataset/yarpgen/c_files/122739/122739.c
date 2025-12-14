/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(((var_1 ? var_4 : var_7)), (var_7 && var_6)))) ? ((-(max(var_7, var_0)))) : var_2));
    var_11 = ((~(~-20217)));
    var_12 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max((arr_4 [i_1]), (((!((!(arr_4 [i_1]))))))));
                var_14 = 3362303492;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (min(var_9, ((max((arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]), (arr_0 [i_4 + 1]))))))));
                                var_16 ^= var_7;
                                var_17 += (((min((16140901064495857664 <= 1), (((arr_10 [22] [i_1] [i_1] [3] [9] [i_4]) & 26395)))) >= -26407));
                                var_18 = (((((var_7 << ((((var_6 >> (((arr_8 [10] [i_3 + 3] [15] [i_3] [i_0 - 1]) + 113)))) - 105))))) | ((~((var_9 ^ (arr_11 [i_1])))))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    arr_16 [i_1] = (!var_3);
                    arr_17 [i_0] [i_1] [i_0] = var_5;
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    var_19 = (((~(arr_10 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0]))));
                    var_20 = (((var_6 ? 288195191779622912 : 26380)));
                }
            }
        }
    }
    #pragma endscop
}
