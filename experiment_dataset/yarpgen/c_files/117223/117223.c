/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 = (arr_2 [10] [i_1]);
                    arr_8 [i_0] [i_0] [0] [i_0] = (arr_1 [i_0 + 1] [i_1 + 4]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 1] [i_3] [5] [2] = (arr_2 [i_0 - 2] [i_0]);
                                var_19 = (arr_13 [5] [i_1 + 4]);
                            }
                        }
                    }
                    arr_16 [i_2] [i_2] [i_2] = (arr_12 [1] [i_2 + 1] [i_1] [i_0] [i_0]);
                }
            }
        }
    }
    var_20 = (var_6 + 1356844312);
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                var_21 = (((arr_1 [i_5 - 1] [i_5 - 1]) / (arr_1 [i_5 - 1] [i_6])));
                var_22 = (min(((((arr_11 [1] [i_6 + 1] [1] [i_6]) << (79 - 63)))), (((arr_5 [i_6 - 1]) | (((arr_7 [i_6]) | 289078112))))));
            }
        }
    }
    #pragma endscop
}
