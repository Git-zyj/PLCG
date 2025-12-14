/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (arr_3 [i_1]);
                    var_15 = (arr_5 [i_2 + 1] [i_2 - 1]);
                    var_16 = (arr_0 [i_2 - 1]);
                }
            }
        }
        var_17 = var_11;

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_15 [i_0] [i_3] [i_4] [i_4] = (arr_4 [i_5] [i_0] [i_0] [i_0]);
                        arr_16 [i_0] [i_3] = (((((!(arr_12 [i_3])))) >= (arr_7 [i_3])));
                    }
                }
            }
            var_18 = ((!(arr_1 [i_0])));
        }
        var_19 = ((-1 ? var_7 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_14 [14] [i_0] [i_0] [19])))));
    }
    var_20 = var_13;
    var_21 &= var_9;
    var_22 = var_4;
    #pragma endscop
}
