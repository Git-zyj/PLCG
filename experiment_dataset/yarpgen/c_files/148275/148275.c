/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!52817);
    var_21 = var_12;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_8 [3] [1] [i_2] [i_1] [i_2] = ((~(arr_6 [17] [20] [i_0 - 1] [i_0] [i_0 - 2])));
                        var_22 = 0;
                        arr_9 [i_1] [12] = ((~(arr_3 [i_0 - 1] [i_0 - 1])));
                        arr_10 [i_0] [23] [i_2] [i_1] = (((arr_3 [i_0 - 2] [i_1]) + var_3));
                    }
                }
            }
        }
        arr_11 [21] = (((arr_0 [18]) ? (((arr_3 [i_0] [i_0]) ? (arr_1 [1]) : 53798)) : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0])));
        arr_12 [i_0] [1] = (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_0 + 1] [i_0])));
    }
    for (int i_4 = 2; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = -1;

        /* vectorizable */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            arr_20 [i_5] = arr_19 [i_4] [i_5];
            var_23 = ((~(arr_4 [i_4] [i_4] [i_4] [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    {
                        var_24 = (arr_23 [19] [i_7] [i_7] [i_7]);
                        var_25 = 3185909187;
                    }
                }
            }
        }
    }
    #pragma endscop
}
