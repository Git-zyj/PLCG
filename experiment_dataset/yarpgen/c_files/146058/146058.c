/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 11482601554213510610;
                                arr_12 [i_4 + 2] [i_1] [i_4 + 2] [i_4] [i_4] [i_4 - 2] [i_4] = ((-(min((arr_10 [i_4 + 2] [i_3] [i_4 + 2] [i_3] [i_4 + 1] [i_2]), (var_0 | var_8)))));
                                var_19 = (max(var_19, (((((max((arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 1]), (arr_0 [i_0] [1]))) / (max((arr_6 [i_0] [i_2]), (arr_1 [i_3])))))))));
                            }
                        }
                    }
                    var_20 -= (min((((-(arr_1 [i_0])))), (arr_2 [6])));
                    var_21 += (min((((((arr_9 [12]) ? (arr_4 [i_0]) : -21851)) * -21833)), var_9));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                arr_19 [13] [i_6] = var_0;

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_24 [i_5] [i_5] = 21809;
                    var_22 = var_17;
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_29 [i_6] [i_8] [i_8] = (arr_17 [i_5] [i_6 + 1] [i_5]);

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_33 [i_8] [i_6] = (var_4 | 327624857);
                        arr_34 [i_5] [i_5] [i_8] [1] [12] = (var_3 | (arr_21 [3]));

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_37 [i_5] [i_5] [i_5] [i_8] [i_5] [i_5] = ((((~(arr_26 [i_10] [i_10]))) | (((-(arr_15 [i_5]))))));
                            arr_38 [i_5] [i_6] [i_5] [i_5] [i_10] [1] [i_8] = (arr_15 [i_5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
