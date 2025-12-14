/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(--8191)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((((var_0 ? var_9 : -64))) + (((var_12 - var_11) + var_11)))))));
                var_15 = (((((arr_2 [i_1 + 3]) & var_3)) % ((min(-var_9, ((((arr_3 [i_0] [i_0] [i_0]) <= (arr_4 [6])))))))));
                var_16 = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [8] [i_2] [i_3] [i_0] [i_0] = (((((!(arr_7 [14] [i_0] [i_2] [i_3] [i_1] [i_1 + 2])))) != ((-(arr_7 [i_2] [i_1 + 2] [i_2] [i_3] [15] [i_1 + 3])))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_17 = ((-(((arr_2 [i_1 + 2]) ? (arr_6 [i_1 + 1] [i_1 + 2] [i_1 + 3]) : (arr_2 [i_1 + 1])))));
                                var_18 = ((!-62) && (((65535 | (var_3 > var_11)))));
                                var_19 = (max(((var_12 ? (arr_8 [i_1 + 3] [i_1 + 3] [i_1 - 1] [i_1] [1] [i_1 - 1]) : (max((arr_2 [i_4]), 1)))), (((((max(2, 410456632))) || 14387114689736975128)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                var_20 -= (arr_10 [8] [i_1 + 3] [i_2] [i_3] [i_5 + 3] [i_1 + 1]);
                                var_21 = (max(var_21, -var_9));
                                var_22 = 1;
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                var_23 = (~var_3);
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_6] = ((-((-(arr_8 [i_0] [i_3] [i_2] [i_3] [i_6] [9])))));
                            }
                            var_24 = (max(var_24, 94));
                            var_25 = (min(var_25, ((max(((max(var_12, var_12))), ((((65535 + (arr_15 [i_0] [i_1] [i_2]))) - (max((arr_15 [i_3] [i_2] [i_1 + 2]), (arr_4 [i_2]))))))))));
                        }
                    }
                }
                arr_18 [7] [13] [9] = 2602155711603141520;
            }
        }
    }
    #pragma endscop
}
