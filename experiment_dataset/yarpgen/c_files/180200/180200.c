/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((!(1 | 25908)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_3] = var_1;
                            var_12 = (min(var_12, ((max((1 > 1), 1)))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [1] = (1 - 19184);
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, (((((~var_0) >= var_5))))));

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_15 [i_4] = (!var_5);
        arr_16 [i_4] [i_4] = (((arr_13 [i_4] [i_4]) ? -127 : (!var_2)));
        arr_17 [i_4] [i_4] = var_3;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    {
                        var_14 = ((1 ? 1 : 0));

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_15 = (arr_13 [i_7 + 1] [i_5]);
                            var_16 = ((((var_5 == (arr_20 [i_8] [i_5] [i_7])))));
                            arr_26 [i_4] [i_5] [i_6] [i_7 - 1] [i_8] = (var_9 || var_7);
                            var_17 = ((-(arr_21 [i_4] [i_7 + 1])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_18 = (((var_8 + 2147483647) >> (((!(arr_21 [2] [2]))))));
                            var_19 = (min(var_19, var_2));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
