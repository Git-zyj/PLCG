/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_12;
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, var_9));
                    arr_7 [i_1] = var_4;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [8] [i_3] |= ((var_9 ? (arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_3]) : var_11));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_19 = (var_8 == var_15);
                            var_20 = (min(var_20, ((((arr_2 [i_1 + 1]) >= (var_6 <= -1))))));
                        }
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_0] [5] [i_2] [i_3] [5] = (arr_15 [i_1] [i_1] [i_2] [i_1 + 2] [i_5] [i_3] [i_3]);
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_5] = (var_5 < var_11);
                            arr_19 [i_0] [i_1] [i_0] [i_3] [i_5] = var_2;
                            var_21 = (max(var_21, (((!(~var_2))))));
                            arr_20 [i_3] [i_1] = ((((var_9 ? (arr_8 [i_0] [3] [i_2] [i_3] [i_3] [i_5]) : var_5)) / var_15));
                        }
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_22 = (max(var_22, (~var_11)));
                        arr_23 [i_1] [2] [i_2] [i_1] [i_0] &= (var_11 / var_10);
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        var_23 += ((var_2 == (arr_24 [i_7 + 1] [14] [i_2] [i_1] [i_2] [i_7])));
                        var_24 = (min(var_24, ((((arr_12 [i_0] [i_0] [i_0] [i_1] [2] [i_7 + 1] [i_7]) & (arr_4 [i_0] [i_1 + 1] [i_2]))))));
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_25 = var_14;
                    arr_28 [i_8] [i_8] [i_1] [i_1] = -var_0;
                }
                var_26 = (min(((((((arr_6 [8] [8] [i_1]) ? (arr_21 [17]) : var_8))) ? var_11 : (min(var_10, var_13)))), (min((arr_6 [i_1 - 2] [i_1 + 1] [i_1 - 2]), 29242))));
            }
        }
    }
    #pragma endscop
}
