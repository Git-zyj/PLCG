/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (max(((max((arr_3 [i_1 + 1] [i_1 - 1] [i_1]), (arr_3 [i_1 + 1] [i_1 - 1] [i_1])))), (((arr_4 [i_1]) ^ (max(var_10, var_0))))));
                var_12 = (((arr_3 [i_1] [14] [i_1]) + ((min((((arr_4 [i_1]) <= var_3)), (((arr_3 [i_0] [i_0] [i_1]) || -1)))))));
                var_13 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1 + 1])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] = max((arr_11 [i_2] [17] [i_1]), (((-(arr_3 [1] [i_3] [i_1])))));
                                arr_13 [i_4] [i_1] [i_1] [i_0] = (((250592200 && ((max((arr_10 [i_4] [i_3] [i_1] [i_1] [i_0]), var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = 1;
    var_15 = ((!((max(var_0, var_3)))));
    #pragma endscop
}
