/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_4] = (arr_9 [i_0] [i_1] [i_1]);
                                var_15 = (((arr_8 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4]) || ((min((arr_10 [i_1] [i_1] [i_4 + 3] [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 4]), (arr_10 [4] [i_0] [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 4] [i_4 + 3]))))));
                                var_16 = ((-((min((arr_0 [i_4 - 2]), (arr_0 [i_0]))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, var_9));
                        arr_16 [i_1] [i_1] [i_2] [i_5] = (max(((var_9 ? var_11 : (((arr_14 [i_0] [i_1] [i_1] [i_5]) - 1348433318260926357)))), (max((arr_5 [i_0] [i_1] [i_0]), (arr_13 [i_0] [i_1] [i_2] [i_5])))));
                        arr_17 [i_1] = (arr_10 [i_5] [i_2] [i_2] [i_2] [i_1] [i_0] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_18 = min((max((arr_1 [14] [14]), (max((arr_4 [i_2] [i_6]), (arr_14 [i_0] [i_0] [i_2] [i_0]))))), (max((arr_7 [i_2] [i_1] [i_2] [i_1]), ((min(-24547, var_5))))));
                        arr_20 [i_1] = -24571;
                        var_19 = -24534;
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_20 = (min(var_20, ((min((((-var_11 + 2147483647) << (((((min(-24561, -2452064036199824786)) + 2452064036199824805)) - 19)))), 44846)))));
                        arr_25 [i_1] [i_1] [i_2] [i_7 + 1] = ((var_8 ^ (arr_2 [i_7 + 1])));
                        var_21 = ((!((((min(var_2, (arr_23 [i_0] [i_1] [i_2] [5]))) / (arr_0 [i_2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
