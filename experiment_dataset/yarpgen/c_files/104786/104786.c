/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((((var_10 ? var_8 : 15)) != (arr_2 [i_0] [i_0])))) | var_2)))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_14 = ((((((4294967295 == ((var_10 ? var_12 : 4294967295)))))) > (max(var_0, ((var_0 / (arr_3 [i_0 - 2])))))));
            arr_5 [i_0] [i_1] = (((arr_3 [i_0 - 3]) ? (((!(arr_0 [i_1])))) : (arr_1 [i_0])));
            arr_6 [i_1] [i_1 + 1] = (((arr_3 [i_0]) >= (!16128)));
        }
        arr_7 [i_0] = ((-((((arr_2 [i_0] [i_0]) ? 15 : 26)))));
        arr_8 [i_0] = (arr_0 [i_0]);
    }
    var_15 |= min(var_6, var_2);
    var_16 = (max(var_16, var_1));
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_18 = 227;
                arr_13 [i_3] = (((((arr_9 [i_2 - 1]) ? (arr_9 [i_2 - 2]) : (arr_9 [i_2 - 2]))) * 213));
                arr_14 [i_2 - 2] = var_10;

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_19 = 364232677;
                    var_20 ^= (min(((-8480899263052517202 ? (arr_15 [i_4 + 1] [i_3] [i_3]) : (arr_15 [i_4 - 1] [i_4] [i_4 - 1]))), (arr_17 [i_2] [i_2 - 3] [i_4 + 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((arr_15 [i_2] [i_2 + 1] [i_6 - 1]) + (arr_23 [i_3]))) * (((5142728622411240785 ? -1331296195 : 201)))))));
                                var_22 += arr_16 [i_5] [i_2] [i_2];
                                var_23 = (arr_18 [i_2] [i_2 - 3] [i_2 - 1] [1]);
                                var_24 = var_2;
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    arr_26 [i_7] = ((((max((arr_23 [i_7]), (arr_23 [i_7])))) >= -61));
                    var_25 = (((((-18430 ? var_1 : (arr_19 [i_2 - 2] [i_2 - 3] [i_7 - 2] [i_7 + 1])))) ? (((arr_19 [i_2 - 4] [i_2 - 1] [i_7 - 2] [i_7 - 1]) ? var_12 : (arr_19 [i_2 - 1] [i_2 + 1] [i_7 - 2] [i_7 + 1]))) : (((arr_19 [i_2 - 2] [i_2 - 3] [i_7 - 1] [i_7 - 1]) & (arr_19 [i_2 - 3] [i_2 - 2] [i_7 + 2] [i_7 - 2])))));
                    var_26 = (131068 & 1);
                    arr_27 [i_7] [i_3] [i_7 + 2] = ((((((arr_10 [3]) % (arr_12 [i_2]))) < (arr_23 [i_7]))));
                    var_27 = (arr_18 [i_2 - 4] [i_2 - 2] [i_7 - 2] [i_7 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
