/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (((arr_6 [i_0] [i_0]) != ((-(arr_3 [i_1] [i_1] [i_0])))));
                    arr_8 [i_0] [i_1] [i_0] = 7855451756641545351;
                    var_19 = (arr_3 [i_0] [i_1] [i_2]);
                    var_20 = (min(((-(arr_5 [i_0] [i_0] [i_0]))), (arr_6 [i_0] [i_0])));
                }
            }
        }
    }
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                arr_13 [i_4] [i_3] [i_3] = (1 & 198);
                var_22 = (arr_9 [i_3]);
                arr_14 [23] = ((((((arr_11 [i_4 + 3] [i_4] [i_4 + 2]) >= 1401318037))) << (((arr_12 [i_4] [i_4 + 3]) << 1))));
                arr_15 [i_3] [i_4] [i_4] = (arr_9 [i_4]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_6] [i_6] = -0;
                arr_21 [i_6] [3] = ((~((-(arr_2 [i_6 - 1] [i_6 + 1])))));
            }
        }
    }
    #pragma endscop
}
