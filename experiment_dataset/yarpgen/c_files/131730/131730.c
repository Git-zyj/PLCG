/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max(((var_0 - (var_8 != var_6))), (!var_3))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, (((!(~1))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 + 1] [i_0] = (((arr_5 [i_1 - 2] [i_1 - 2] [9]) ? (arr_5 [i_1 - 1] [10] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                        var_12 = (((!var_7) ? (arr_8 [i_0] [1] [i_2] [i_0]) : (arr_9 [i_0] [i_1] [i_2 + 1] [i_3])));
                        arr_11 [i_1 + 1] [6] [i_0] = (((arr_3 [i_3 + 1] [1]) - (arr_3 [i_3 + 1] [i_3 + 1])));

                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            arr_15 [i_0] [5] [i_0] [i_3 + 3] [2] [5] [i_3] = (((~-32) - (arr_1 [i_0])));
                            arr_16 [i_0] [i_1 + 1] [i_0] [i_0] [i_2] [i_0] [12] = 142;
                            var_13 = (((((~(arr_4 [0] [0] [i_3] [0])))) || (arr_0 [i_0])));
                        }
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_14 = (((arr_5 [i_1 - 1] [i_3 + 1] [i_2]) ? 1 : var_0));
                            arr_19 [i_0] [1] [i_2 - 1] [i_3] [i_5] = ((!(arr_9 [i_2 - 1] [6] [i_3 + 1] [i_3 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_15 = ((-(arr_5 [i_0] [i_0] [i_0])));
                            var_16 -= (((((arr_3 [i_2] [i_1]) ? var_8 : (arr_12 [i_2 + 1] [i_2]))) | (arr_1 [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_17 &= (!-22);
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_0] = ((var_3 != (arr_21 [i_0] [13] [1] [i_1] [i_1 + 1] [i_2 - 1] [i_2 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
