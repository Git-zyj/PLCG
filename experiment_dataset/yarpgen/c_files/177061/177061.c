/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~(((~1285118321) ? var_2 : (!var_3))));
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = (((arr_5 [i_0 - 2] [i_0 + 1]) & (arr_5 [i_0 - 2] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_1 - 3] [i_2] [i_3 - 1] [16] &= ((-(arr_2 [6])));
                                var_13 = (max(var_13, ((((((!(((-(arr_11 [i_0] [i_0] [9] [i_2] [i_0] [22]))))))) + ((((arr_3 [i_1] [i_1 + 4] [i_1 + 4]) == (((arr_4 [i_1] [i_1] [i_4]) << (((arr_0 [i_2]) - 235))))))))))));
                                var_14 += (min((((!((max((arr_0 [i_0 - 2]), (arr_10 [i_4] [i_2] [i_1 - 2] [i_0]))))))), ((((!(arr_2 [12]))) ? (((arr_3 [i_0 - 2] [6] [6]) / (arr_2 [1]))) : (min(-1285118348, (arr_13 [20] [1] [20] [16] [1] [i_4])))))));
                                var_15 = (arr_5 [i_4] [i_1 + 3]);
                                var_16 = ((125 + (0 / -1285118348)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_17 = (((((!(arr_14 [i_6] [i_5] [i_5] [i_5] [i_6])))) <= (arr_6 [i_6] [12] [1] [12])));
                var_18 = (max(var_18, 125));
            }
        }
    }
    #pragma endscop
}
