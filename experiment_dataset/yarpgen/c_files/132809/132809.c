/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((arr_0 [7] [i_1 + 1]) == (((max((arr_1 [6] [i_1]), (arr_2 [i_1]))) - (arr_3 [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (max(41687, (((arr_9 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 - 1]) % (arr_9 [i_1 + 2] [i_1] [i_1 + 3] [i_1 - 1])))));
                                var_19 = ((7 ? ((-(((arr_7 [i_0] [6] [i_2]) - (arr_12 [i_0] [i_0] [8] [7] [8]))))) : 2575369506));
                            }
                        }
                    }
                }
                var_20 = min(((+((((arr_9 [6] [i_1 + 2] [6] [i_0]) != (arr_2 [i_0])))))), (((!(arr_9 [i_1] [i_1 - 1] [1] [10])))));
            }
        }
    }
    var_21 = var_14;
    var_22 ^= var_4;
    #pragma endscop
}
