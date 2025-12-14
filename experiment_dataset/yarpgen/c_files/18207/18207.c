/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((var_13 == var_17), (max(1, (max(var_12, var_15)))));
    var_20 = (min(var_20, var_2));
    var_21 = (max((((((15244596819501574405 ? 1 : var_0))) ? (max(var_18, var_16)) : (((max(1, 2671)))))), (((~(!var_14))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_22 = (max(((((1 ? (arr_1 [i_0]) : (arr_0 [i_0]))) % (arr_1 [i_0 + 1]))), (max((arr_0 [i_0 + 2]), (arr_0 [i_0 - 2])))));
        var_23 = (max((arr_0 [i_0 + 2]), ((((arr_1 [i_0 + 2]) >= (arr_1 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_24 *= ((~(6 / -114)));
        arr_5 [i_1] = ((-86329647117250637 ? 761699075 : (arr_2 [i_1])));
        var_25 = (min(var_25, ((((arr_4 [18]) ? (((arr_2 [i_1]) >> (((arr_3 [18]) - 11400404292543708377)))) : (((arr_3 [12]) ? (arr_2 [i_1]) : (arr_2 [i_1]))))))));
        var_26 = ((-(!176)));
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_27 += 0;

            for (int i_4 = 3; i_4 < 7;i_4 += 1)
            {
                var_28 = (((arr_0 [i_4]) > (((arr_10 [i_3] [i_3]) ? 26 : (arr_13 [i_4] [i_3] [i_4])))));
                var_29 = ((~(arr_8 [i_4 - 1] [i_2 - 3])));
                var_30 = (!-818785938);
                arr_17 [i_4] = (((arr_9 [i_2 - 2] [i_4 + 3]) ? (arr_9 [i_2 - 2] [i_4 + 3]) : (arr_9 [i_2 - 1] [i_4 + 2])));
            }

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_31 = (((arr_19 [i_2 + 1] [i_2 - 1] [i_2 - 3]) ? (arr_19 [i_2 - 2] [i_2 + 2] [i_2]) : (arr_19 [i_2 + 1] [i_2 + 2] [0])));
                var_32 = ((arr_10 [i_2 - 3] [i_2 - 3]) ? (arr_0 [i_2]) : (((arr_16 [i_2] [i_2] [i_5] [i_5]) ? 1504573846 : 1)));
                var_33 = (arr_10 [i_2] [i_5]);
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_34 = (arr_1 [i_6]);
                var_35 = 247;
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_36 = ((~(arr_4 [i_7])));
                            var_37 = (((arr_32 [i_2 - 3] [i_2 - 1] [i_8] [i_8] [i_9 + 1]) & (~1550282269)));
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_37 [i_2] [i_7] [i_8] [i_7] [i_11] = (((~(arr_25 [i_7] [i_7]))));
                            var_38 = ((((((arr_12 [i_11] [i_2]) ? 127 : (arr_12 [i_2 + 2] [i_8])))) ? (((arr_2 [i_7]) ? -1 : (arr_3 [i_7]))) : (arr_3 [i_7])));
                            var_39 = (((arr_22 [i_2] [i_2 + 2] [i_7] [i_9 + 1]) ? (arr_22 [i_2] [i_2 + 2] [i_7] [i_9 + 1]) : (arr_22 [i_2] [i_2 + 2] [i_7] [i_9 + 1])));
                            var_40 = ((arr_34 [i_8] [i_8] [i_9 + 1] [i_8]) ? (arr_34 [i_2] [i_9] [i_9 - 1] [i_9]) : (arr_34 [i_9] [i_9] [i_9 + 1] [i_9]));
                        }
                        var_41 = ((3 ? (arr_13 [i_7] [i_2 + 1] [i_2 + 1]) : (arr_13 [i_7] [i_2 - 2] [i_2 - 2])));
                    }
                }
            }
            var_42 *= (((arr_15 [i_7] [i_2] [i_2]) ? (arr_8 [i_2] [i_2 + 1]) : 4243346718));
            arr_38 [i_7] = ((~(arr_21 [i_2 + 2] [i_7] [i_7])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_43 += (arr_16 [i_2] [i_2 - 3] [i_2 - 3] [i_2 + 2]);
            var_44 += (arr_29 [i_12]);
        }
        var_45 = (min(((~(arr_34 [i_2] [i_2] [i_2] [i_2]))), (max((arr_34 [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 1]), ((((arr_1 [i_2]) >= (arr_20 [i_2] [i_2 - 3] [i_2]))))))));
        var_46 = ((max(2158606361, (arr_28 [i_2 + 1] [i_2 + 1] [i_2 - 3] [2]))));
        var_47 += ((!(((((((arr_35 [i_2] [i_2]) ? (arr_25 [8] [8]) : 23))) ? (max((arr_25 [i_2] [0]), (arr_20 [i_2] [i_2] [i_2]))) : (((51620600 ? (arr_30 [i_2] [i_2 - 3] [i_2]) : (arr_19 [i_2 + 1] [i_2] [i_2])))))))));
    }
    #pragma endscop
}
