/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_7 > (arr_1 [i_0 + 2])));
        arr_4 [i_0] [i_0] = (((arr_1 [i_0 - 1]) > var_7));

        for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_10 = (((122 > 1946337789) > 83846090133878217));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_11 = ((-(~var_4)));
                        arr_13 [i_0] [i_0] [i_2] [i_0] [i_3] = (!-var_7);

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_0] = (-(arr_15 [i_3 + 1] [i_1 - 2] [i_0] [i_0 + 2]));
                            arr_17 [i_0] [i_2] [i_2] = (141 > var_6);
                            arr_18 [i_0] [i_0] [i_4] [i_4] [i_0] = ((-2 ? 1 : -1193342352));
                        }
                        arr_19 [i_2] [i_0] [i_2] [i_2] [i_2] [i_2] = 18446744073709551615;
                        var_12 = ((((-(arr_7 [i_0] [i_0]))) > (arr_15 [i_1 + 1] [i_1] [i_3] [i_3])));
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_23 [i_0] = 252;
            arr_24 [i_0] [i_5] = 17;

            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_33 [i_0] = (var_8 > var_3);
                            arr_34 [i_0] [i_5] [i_6] [i_7] [i_0] = (~var_1);
                            var_13 = (var_9 > var_6);
                        }
                    }
                }
                arr_35 [i_0] [i_0] = var_1;
            }
        }
        for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
        {
            var_14 = (arr_11 [i_0] [i_9] [i_0] [i_0]);
            arr_38 [i_0] [i_0] = var_5;
            arr_39 [i_0] = (((arr_6 [i_9] [i_9] [i_0 - 3]) > var_6));
        }
    }
    var_15 = (max((var_3 > 45825), var_3));
    var_16 = var_2;
    var_17 = (max(var_9, var_5));
    #pragma endscop
}
