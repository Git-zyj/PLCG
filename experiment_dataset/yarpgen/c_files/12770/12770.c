/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = ((-(arr_5 [0])));
                    arr_8 [i_2] [i_2] [i_2 + 1] [i_0] = ((~(arr_1 [i_0 + 1])));
                    var_11 = (((((3498971500 ^ (arr_7 [i_0] [i_1] [i_1] [7])))) || (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                }
            }
        }

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_12 = -var_2;
            var_13 = (max(var_13, (((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_3 : (arr_6 [i_0] [i_0] [i_3] [i_3])))))));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            arr_14 [i_0] = ((~(arr_1 [i_0])));
            arr_15 [i_0] [i_0] [1] = 2997917085;
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_14 = (var_7 <= var_9);

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                arr_21 [i_5] [i_0] = (~var_4);
                var_15 = (arr_6 [i_0] [10] [1] [i_6]);
                arr_22 [i_5] [i_5] = ((arr_18 [i_0 - 1]) + (arr_4 [i_6] [2]));
            }
        }
        arr_23 [i_0] [i_0] = (~var_1);
    }
    var_16 = (-((3498971500 ? ((var_0 ? var_1 : 3498971500)) : ((var_2 ? 795995795 : -590377074)))));
    var_17 = (max(var_17, ((((-590377075 ^ 14766970646352189972) ? (((~var_4) ? ((var_2 ? 1 : var_4)) : (~var_6))) : (var_1 ^ 3498971500))))));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            {

                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [i_8] [i_8 + 1] [i_9] [5] [i_10] = (((arr_31 [i_9] [i_10] [i_10] [i_9]) ? (arr_30 [10] [i_8]) : ((795995781 ^ ((var_0 ? 795995784 : (arr_5 [i_9])))))));
                        arr_37 [i_8] [i_7] [i_7] [i_8] [i_7] = (((((-(var_0 ^ var_4)))) ? (((arr_3 [i_8 - 1] [i_8 - 2]) ? var_3 : (arr_12 [i_7 + 1] [i_10]))) : (((!(arr_35 [i_8 - 2]))))));
                        arr_38 [i_8] = (((((var_0 & (arr_20 [i_7 + 1])))) ? (max((arr_12 [i_9] [i_8]), var_6)) : (((!(arr_20 [i_8 - 1]))))));
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_18 = var_2;
                        var_19 = ((((var_6 - (arr_19 [i_8] [5] [i_8])))));
                    }
                    arr_41 [i_7] [i_8] = ((-((((arr_11 [i_9 + 1]) ? var_6 : 405868252)))));
                    arr_42 [i_8] [i_7] [i_7] = ((((var_8 + (arr_6 [i_7] [i_7 - 1] [i_7] [i_7 - 1]))) <= var_8));
                }
                arr_43 [i_8] [i_8] = ((-((((arr_40 [i_7 - 1] [3] [3] [3] [i_7] [i_8 - 2]) <= 590377074)))));
            }
        }
    }
    #pragma endscop
}
