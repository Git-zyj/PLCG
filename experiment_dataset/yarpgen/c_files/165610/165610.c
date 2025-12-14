/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 + 3] [i_1] = (max((min(((((arr_0 [i_0]) >= var_6))), (max(var_0, (arr_2 [i_1]))))), ((((arr_1 [1]) || (arr_1 [i_0]))))));
                arr_5 [i_1] = (min((arr_1 [2]), (((!(((-(arr_3 [i_1] [i_1] [i_0])))))))));
                var_10 = (arr_0 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_10 [i_2] [2] [i_3] = ((((((max(var_7, (arr_7 [1]))))) <= (max(var_1, var_6)))));
            var_11 = (min((((((var_6 != (arr_7 [7])))))), ((((max(var_3, var_1))) ? (((arr_9 [i_2] [i_2] [9]) << (var_9 - 100))) : (arr_8 [i_2])))));

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                arr_13 [i_2] [i_3] [i_4] [12] = (arr_7 [i_2]);
                var_12 = ((-(arr_11 [i_4])));
                arr_14 [1] [0] [i_3] [i_2] = (max((min(((var_0 ? 70 : (arr_6 [1] [0]))), ((((arr_12 [i_3]) != (arr_11 [i_2])))))), ((max((arr_7 [3]), (arr_12 [1]))))));
                arr_15 [i_2] = ((!((((arr_7 [11]) * var_3)))));
                var_13 = ((max((arr_1 [i_2]), ((-(arr_11 [i_2]))))));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_14 = (max(var_14, (((((~(arr_3 [i_2] [i_3] [i_5]))) * (((!(arr_22 [i_2] [i_2] [4] [i_2])))))))));
                        arr_26 [8] [i_6] &= (min(var_9, (((arr_16 [i_5]) + (((arr_2 [i_2]) ? var_4 : (arr_8 [13])))))));
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        var_15 = ((((max((arr_16 [i_3]), (arr_21 [6] [i_3] [i_5] [8] [i_8 - 1])))) ? (arr_2 [i_2]) : (max((arr_29 [i_6] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3] [i_8 - 1]), (arr_29 [i_2] [i_8 + 1] [i_8 - 1] [i_8 - 2] [12] [i_8 - 3])))));
                        var_16 = (((arr_25 [i_8 - 1] [i_5] [i_8 - 3] [i_8 - 1] [i_8]) * (arr_21 [i_2] [12] [i_5] [0] [2])));
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = 2953571911;
                    }
                    var_17 = (arr_0 [i_2]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_18 = var_4;
                    arr_34 [1] [1] [i_5] [i_5] [i_9] = (arr_23 [i_2] [i_5] [i_5] [i_9] [i_9]);
                    var_19 = var_9;
                    arr_35 [i_5] = (((arr_27 [i_2] [1] [1] [i_5] [9]) ? -30141 : 0));
                }
                arr_36 [i_2] [i_3] [i_5] = ((((arr_17 [i_2] [i_3] [4]) >= (arr_17 [i_2] [i_3] [i_5]))));
            }
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_20 = (~(arr_24 [i_2] [i_10] [i_10] [4] [i_10]));
            var_21 = ((!((max((max(var_9, (arr_22 [8] [i_10] [9] [i_10]))), ((((arr_38 [2] [9]) << (var_1 - 4278813797)))))))));
            var_22 = (max(var_22, var_5));
        }
        arr_40 [13] [i_2] = (max(((~(arr_24 [i_2] [i_2] [1] [i_2] [i_2]))), var_5));
    }
    var_23 = ((((max(var_1, 36430)) >= var_6)));
    var_24 = 0;
    #pragma endscop
}
