/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (!var_9);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [7] [10] [i_3] = 1;
                        var_17 ^= (arr_10 [i_0] [i_1] [i_1] [2] [12]);
                        arr_13 [i_3] [i_1] [i_2] [21] = (arr_2 [i_0] [i_1] [13]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] = (((arr_14 [i_4 - 2] [i_4 - 3]) ? (arr_8 [5] [i_4 - 2] [9]) : (((var_15 == (arr_6 [i_4 - 1] [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        var_18 = (1 - 28907);
                        arr_28 [i_4] [i_6] [i_5] [i_4] = ((-(arr_2 [i_4] [i_4] [20])));
                    }
                }
            }
        }
        var_19 = (((arr_24 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 + 1]) * -17597));
        var_20 = (((arr_22 [i_4 - 3] [i_4 + 2] [10]) ? 126 : (arr_7 [i_4 + 2] [i_4] [i_4] [16])));
    }
    var_21 = ((-(~var_6)));
    var_22 = var_8;
    #pragma endscop
}
