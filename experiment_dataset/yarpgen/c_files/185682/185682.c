/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) == 123));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = ((~(arr_6 [i_0] [i_0] [i_0] [i_2])));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= (((arr_5 [i_1] [i_1]) ? (arr_9 [i_0] [i_1] [i_0] [i_3 - 1] [i_4]) : (arr_4 [i_2] [i_1])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] = (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_17 = ((var_5 >> (var_8 - 55541)));
    var_18 = ((var_4 ? var_14 : var_8));
    #pragma endscop
}
