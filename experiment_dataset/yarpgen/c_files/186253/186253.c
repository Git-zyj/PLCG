/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((--4369769383367471438) ? (((arr_1 [i_0 + 1]) ? (arr_1 [8]) : (arr_1 [i_0 - 1]))) : (((arr_3 [i_2]) ? var_9 : 122709987)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((~(((arr_4 [i_0 + 2] [i_0 + 1]) ? (arr_4 [i_0 - 1] [i_0 + 1]) : (arr_4 [i_0 + 2] [i_0 + 1])))));
                                var_16 &= (~(((!(arr_0 [i_0 + 2] [i_4 - 1])))));
                                arr_10 [i_3] [10] [7] [2] = ((arr_9 [i_4 - 1] [i_3] [i_2] [i_1] [i_0]) ? (arr_3 [i_4]) : (arr_6 [i_1] [i_2] [1]));
                                arr_11 [i_4 - 2] [i_3] [i_2] [i_1] [i_0 + 1] = (max(((((((arr_2 [i_0] [i_0] [i_2]) ? (arr_2 [i_0] [i_2] [5]) : (arr_2 [i_1] [i_3] [i_4])))) & (arr_9 [i_4] [i_3] [i_2] [i_1] [11]))), (max((arr_9 [i_4 + 2] [i_4 - 2] [i_4] [i_4 + 2] [i_4 + 2]), (arr_9 [i_4 + 2] [i_4 - 1] [i_4] [i_4] [i_4 - 3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (((((var_0 >= (max(2147483647, 122709987)))) ? ((var_8 + (min(var_8, -2147483626)))) : ((-((var_10 ? -767855369 : var_9)))))))));
    var_18 = ((((min((min(var_9, var_11)), var_11))) ? var_12 : ((-((var_4 ? var_4 : var_0))))));
    #pragma endscop
}
