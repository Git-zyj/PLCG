/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [0] [i_2] [10] = (arr_3 [i_0] [1] [0]);
                    arr_9 [i_0] [i_0] [i_2] = -69;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_14 [2] [i_4] = 1;
                arr_15 [i_3] [i_3] = ((0 ? (min(-6171562156670914243, -5)) : ((max((((var_6 ? (arr_10 [i_3 + 2] [i_3]) : -19156))), (((arr_13 [i_4]) ? 1 : 1048171326)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_18 [10] = 3830229676;
        arr_19 [i_5] = ((~(arr_17 [i_5])));
    }
    #pragma endscop
}
