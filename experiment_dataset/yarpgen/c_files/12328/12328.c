/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] = ((-(arr_5 [i_4] [i_3])));
                                var_15 = ((var_1 << (var_11 - 63281)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_16 = (15726137706532705893 && var_13);
                                var_17 = (min(var_17, (((((min(-398130364, 1749292692))) % 7211749334491391353)))));
                                var_18 = (((arr_12 [i_2] [i_5] [i_2] [1] [i_0]) ? ((+(((arr_14 [i_0] [i_6 - 1] [i_0] [i_1] [i_0] [i_1] [i_0]) / 1848)))) : 97382039));
                            }
                        }
                    }
                    arr_20 [i_1] [i_2] [i_2] [i_2] = (((23831 >> 14) || ((max((arr_10 [12] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_0]), (arr_11 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_7] [1] = ((~((var_6 ? var_6 : (arr_9 [i_7 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_7] = (min(((max(var_5, var_8))), (((arr_10 [i_0] [i_1 + 2] [i_1 + 2] [i_7 - 1] [i_8] [i_7 + 3]) ? (arr_10 [i_1 + 2] [i_1] [i_1] [i_7] [i_8] [i_7 + 3]) : -21756))));
                                var_19 = 63687;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_20 = ((~((max((arr_4 [i_1] [i_1] [i_1 - 1]), -23832)))));
                        var_21 = (arr_18 [i_0] [i_1] [i_2] [i_1 + 2]);
                        arr_32 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9] = ((!((min(0, (arr_17 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1]))))));
                        arr_33 [i_1] [i_1] = ((((arr_22 [i_1 + 2] [i_1 + 1]) - (!var_0))));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_22 = (arr_11 [i_2] [i_2] [i_1] [i_0]);
                        var_23 = ((var_2 ? ((var_0 ? (arr_11 [i_0] [i_1] [i_2] [i_10]) : -6)) : (((65514 && (!-1353163786))))));
                    }
                    for (int i_11 = 3; i_11 < 22;i_11 += 1)
                    {
                        var_24 = ((max((((arr_31 [i_2]) / (-2147483647 - 1))), (arr_23 [i_0] [i_11 + 3]))));
                        var_25 = (max(((!(arr_38 [i_1] [i_1 + 2] [i_1 + 2] [i_1]))), ((((-(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) != (((!(arr_38 [i_0] [14] [i_2] [i_2]))))))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_26 = (max(var_26, ((min(((-(arr_35 [i_0] [i_1] [i_2] [i_1] [i_1 - 1]))), (min(-1, ((1874 ? 63687 : -97382040)))))))));
                        var_27 = ((!(~var_1)));
                        arr_43 [i_0] [i_1] [i_1] [i_2] [i_12] [i_1] = var_13;
                        var_28 = (max(var_28, (((-(min((arr_24 [i_0] [i_0] [i_0] [i_1 + 2] [i_0] [i_12]), (min((arr_22 [i_0] [i_0]), (arr_23 [i_0] [i_1]))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
