/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [6] = (((!var_2) || (((-7770 ? (arr_1 [i_0]) : var_6)))));
        arr_3 [i_0] = (arr_1 [5]);
        var_14 = (max(var_14, (((-(((arr_0 [3] [i_0]) ? (arr_0 [i_0] [1]) : (arr_0 [i_0] [i_0]))))))));
        var_15 = (arr_1 [i_0]);
        var_16 = (arr_0 [9] [9]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_3, (arr_1 [12])));
        var_18 = (((arr_4 [12]) | var_3));
        var_19 = ((-((max(-7770, (arr_4 [i_1]))))));

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_20 = (arr_1 [i_1]);
            arr_10 [i_2] = (arr_6 [i_1]);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
            {
                arr_15 [i_2] [1] [i_2] = -19;
                var_21 = var_0;
                var_22 = 7766;
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_23 += ((((((var_7 ? 7770 : var_13)) + ((((((arr_1 [6]) + 2147483647)) >> (((arr_14 [i_1] [i_1]) - 15401657209470689443))))))) >= (((min((arr_7 [i_1] [0]), (arr_12 [i_1] [i_2 + 3] [10] [i_4]))) & var_3))));
                var_24 = (min(((((225 ^ (arr_4 [i_4]))) & (arr_0 [i_1] [i_1]))), (arr_0 [i_1] [i_1])));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                var_25 = var_2;
                var_26 = var_8;
                var_27 = 7766;
                var_28 = (arr_8 [i_2] [i_2]);
                arr_22 [i_2] [2] [i_2 + 1] [i_2] = ((((((arr_19 [i_2] [i_2]) * -111))) ? 7769 : var_0));
            }
            var_29 = ((-(max(var_10, (max(var_1, var_9))))));
        }
        arr_23 [3] = max((arr_20 [i_1] [1] [1]), ((((-7779 && var_8) && ((max((arr_5 [i_1]), var_5)))))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 16;i_10 += 1)
                        {
                            var_30 = ((((var_6 ? (arr_25 [i_9]) : (arr_25 [i_10]))) % (arr_36 [i_6])));
                            arr_37 [i_7] [i_7] [i_6] = ((-(((!(-2147483647 - 1))))));
                            var_31 = var_12;
                        }
                        arr_38 [i_6] = (max((((7769 / -19) ? (max(var_8, (arr_35 [i_9] [i_6] [3] [i_6] [i_6]))) : ((min((arr_36 [i_9]), (arr_36 [i_6])))))), (max((((arr_25 [i_8]) / (arr_29 [11] [i_6] [i_8] [i_9]))), (arr_28 [i_6] [i_9])))));
                    }
                    arr_39 [i_6] [i_7] [i_6] [i_6] = ((-((-(arr_25 [i_6])))));
                }
            }
        }
        var_32 = (min(var_32, var_9));
    }
    var_33 += (max(var_11, var_3));
    #pragma endscop
}
