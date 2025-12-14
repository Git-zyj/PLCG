/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_2));
    var_14 = ((((9823705117752642080 ? 1 : (max(var_12, 615820397)))) * (!var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [7] [i_2] [i_3] [0] = ((((((arr_2 [i_1] [i_1 - 3]) ? (arr_11 [i_1 - 2] [i_1 - 2]) : (arr_13 [7] [i_3] [i_1 + 1] [i_1] [i_1 - 3])))) ? ((((var_10 <= (arr_13 [i_1 - 3] [i_3] [i_1 - 2] [i_1 - 3] [i_1 - 3]))))) : (arr_2 [i_1 - 1] [i_1 - 1])));
                                arr_15 [i_0] [1] [i_2] [1] [7] [i_2] = ((((!(arr_4 [i_0]))) ? (((((((-(arr_4 [i_0])))) < (((arr_0 [i_0] [1]) ? (arr_7 [i_0] [i_0] [i_3]) : (arr_1 [i_1]))))))) : (arr_2 [i_1 - 3] [i_1 - 2])));
                                var_15 = 127;
                                arr_16 [0] = (((arr_5 [5] [i_2] [i_4]) <= (arr_6 [i_2] [2] [2] [i_1 - 3])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = 121;
                    arr_18 [9] [9] = var_9;
                }
            }
        }
    }
    var_16 = (min(615820394, var_9));
    var_17 ^= var_1;
    #pragma endscop
}
