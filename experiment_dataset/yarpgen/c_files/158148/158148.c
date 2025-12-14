/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = ((+(((!(((arr_10 [7] [i_1]) < (arr_9 [i_0] [i_0] [i_0]))))))));
                    arr_11 [14] = (((-(arr_10 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [4] [i_4] = ((((((arr_9 [15] [i_1] [i_0]) ? (arr_9 [i_0] [i_0] [i_2]) : (arr_9 [i_1] [i_1] [i_1])))) ? ((min((arr_12 [i_0] [i_1] [i_2] [i_2] [i_4]), (arr_9 [i_4] [i_3] [i_0])))) : ((104 / (arr_1 [i_1])))));
                                var_12 = (min((arr_2 [i_0] [8]), (8275434310228873785 < 512)));
                                var_13 = (((((-19781 * var_4) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) : (~2080742742))) - var_7));
                                var_14 = ((~(((arr_2 [4] [i_4]) ? var_6 : 26596))));
                            }
                        }
                    }
                    arr_17 [i_0] = 200;
                }
            }
        }
    }
    #pragma endscop
}
