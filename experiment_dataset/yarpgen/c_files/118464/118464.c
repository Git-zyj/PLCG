/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [5] [i_0] = (((((((arr_4 [i_0] [i_0] [i_0]) ? 105 : (arr_1 [i_0] [i_1]))) << (var_1 - 105))) <= (((((arr_4 [10] [i_1] [i_0]) <= (arr_4 [i_0] [i_1] [i_0])))))));
                var_17 = var_11;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_18 = (min(var_18, ((((arr_9 [i_2 + 1] [1]) ? var_9 : (arr_9 [i_2 + 1] [14]))))));

        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            var_19 -= 189;
            arr_12 [0] &= 70;
        }
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((((17442 ^ (arr_16 [i_4] [i_5 - 2]))) != ((((arr_18 [i_4] [i_4] [i_5]) == (arr_18 [i_4 - 1] [i_4] [i_4 - 4])))))))));
            var_21 = (max(var_21, (arr_14 [i_4] [i_5 - 1])));
            arr_19 [i_4] [i_4] = (min(((((arr_7 [i_5]) ? (arr_3 [i_4 + 1] [i_5] [i_5 - 2]) : (arr_16 [i_4 - 4] [i_4 - 4])))), (((arr_7 [i_5]) ? (arr_4 [i_4 - 3] [i_4 - 3] [i_4]) : (arr_7 [i_4])))));
            arr_20 [i_4] [i_5 - 2] = ((((!(arr_17 [i_4 - 2] [i_5 + 1]))) ? 0 : (!1443201538)));
        }
        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_22 -= (arr_5 [i_6] [i_4 - 4] [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            var_23 = (min(((((arr_18 [i_4] [i_4 - 3] [i_9 + 1]) ? var_4 : (min(-13, var_11))))), (((arr_1 [i_9] [i_4]) | -var_12))));
                            var_24 = (arr_14 [i_8] [i_8]);
                        }
                        arr_30 [i_8] [i_7] [i_8] = (arr_22 [i_4 - 1]);

                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_25 = (arr_18 [i_6] [i_6] [i_4 - 1]);
                            var_26 = (arr_28 [i_4] [i_6 - 2] [i_7] [i_7] [i_8] [i_8] [i_7]);
                        }
                        var_27 = (max(var_27, (arr_7 [i_6])));
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_35 [i_4 - 2] = (arr_15 [i_4] [5]);
            var_28 *= (arr_26 [i_4] [i_4 - 1] [i_11]);
            var_29 = (max((arr_8 [i_4 + 1] [i_11]), (min((arr_7 [i_11]), (arr_7 [i_11])))));
        }
        arr_36 [i_4] [i_4] = 0;
        arr_37 [i_4 + 1] [i_4] |= ((var_13 ? (((arr_25 [i_4 - 4] [i_4 - 2] [i_4 - 2]) ? (arr_25 [i_4 + 1] [i_4 - 4] [i_4 - 2]) : (arr_11 [i_4 + 1] [i_4] [i_4 - 1]))) : -var_13));
        arr_38 [i_4] = ((-(max((arr_9 [i_4 - 2] [i_4]), (arr_15 [i_4 - 1] [i_4 - 3])))));
    }
    #pragma endscop
}
