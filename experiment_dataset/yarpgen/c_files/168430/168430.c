/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] = (58696 ? 7475872083407897316 : 62585);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_10 = 58691;
                    arr_10 [i_1] = (arr_3 [i_1] [i_1] [i_1]);
                }
                var_11 = (arr_2 [i_0] [i_1]);
                var_12 = (max((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]), ((((arr_7 [i_1] [i_1 + 1] [i_1 - 1] [13]) || (arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_13 = (max((arr_15 [i_5 + 3] [i_5 + 3] [12]), 6845));
                        arr_24 [i_3] [i_4] [i_4] [i_5] = (((max(var_8, var_3))) ? ((var_6 ? (arr_1 [i_3] [i_4]) : (arr_1 [i_3] [i_4]))) : var_8);

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_14 = ((var_0 ? var_0 : (((((((arr_19 [1] [i_5] [i_5] [i_3]) ? var_7 : var_0))) ? (arr_0 [i_5 - 2]) : (arr_9 [i_5 + 1] [i_5 - 1] [i_5 - 2]))))));
                            var_15 = (min((max((arr_19 [i_5 - 1] [i_5 + 1] [i_5] [14]), (arr_23 [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5]))), (arr_19 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 1])));
                        }
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            var_16 = (max((arr_2 [i_5 - 1] [i_8 - 3]), (arr_2 [i_5 - 1] [i_8 + 2])));
                            var_17 = (max(var_5, ((max(6839, 0)))));
                            var_18 = (max(-9158341071266382943, 58696));
                            var_19 = (((((max(var_4, var_9)))) ? var_2 : (arr_25 [i_3] [i_4] [14] [i_4] [i_5] [i_8])));
                        }
                        var_20 -= var_7;
                        var_21 = ((arr_29 [i_5] [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 3] [9] [i_5 - 1]) ? (((arr_0 [i_5 - 2]) ? (arr_29 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 2]) : (arr_29 [i_4] [i_4] [i_5 - 1] [i_5 - 1] [i_4] [i_5 + 3] [i_5 - 2]))) : (arr_0 [i_5 - 2]));
                    }
                }
            }
        }
        var_22 = (arr_29 [8] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    var_23 = ((((max(var_7, var_5)))) ? 26 : (max(var_7, ((var_1 ? var_6 : var_6)))));
    #pragma endscop
}
