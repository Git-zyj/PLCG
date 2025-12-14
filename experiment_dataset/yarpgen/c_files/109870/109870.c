/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 += 1;
            var_13 = (max(var_13, 1024));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                arr_9 [i_3] [1] [i_3 - 2] = var_2;
                arr_10 [i_3] [i_2] = (arr_1 [i_0]);
                var_14 = var_10;
                arr_11 [i_0] [i_0] [i_3] &= var_6;
                arr_12 [i_3] [i_2] [i_3] [i_2] = ((var_6 >> (((var_2 % var_9) + 1488105268))));
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_2] [i_2] [i_2] [i_6] = (min((((2596868705 >= 99) ? (arr_13 [i_0]) : (((!(arr_19 [12] [12] [12])))))), ((-((-(arr_13 [2])))))));
                            arr_21 [i_0] [i_2] [i_4] [i_5] [i_6] = var_9;
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_7] [20] &= (max(((max((arr_18 [i_0] [11] [11] [i_0] [i_0] [i_7 - 1]), (max(-1025, var_7))))), ((((99 ? 831793953820325885 : -6902)) & (((max(var_5, var_6))))))));
            arr_25 [i_0] &= ((-(((!(arr_15 [i_0] [i_7 - 1]))))));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_29 [i_8] = var_9;
            arr_30 [i_8] = (((((max(218, -99)))) & (min(18446744073709551615, 16))));
        }
        arr_31 [i_0] = (!4138502123);
        var_15 = ((-(min(-1209079386, (var_6 == var_8)))));

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        arr_41 [7] [i_9] [i_10] [i_11] = ((((min(7680, (arr_23 [i_10 - 1] [i_10 + 1] [i_10 - 1])))) && ((!((((arr_14 [i_0] [i_9] [i_10]) % (arr_26 [22] [6]))))))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            arr_45 [i_9] [i_12] [i_11] [i_10 - 1] [i_10] [i_9] [i_0] = ((6829925 % 98) == 1024);
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((~(arr_39 [i_0] [11] [i_10] [i_11]))))));
                            arr_47 [i_10] [9] [i_12] &= var_1;
                            arr_48 [i_0] = -var_4;
                        }
                        arr_49 [i_0] [3] [3] [3] &= (arr_3 [i_9] [i_10] [i_10]);
                    }
                }
            }
            var_16 &= (max(((min((arr_34 [i_9] [i_0] [i_0] [i_0]), (arr_22 [i_0])))), ((2569945815 / (arr_34 [i_0] [i_9] [i_0] [i_0])))));
            arr_50 [i_0] = (((arr_37 [22] [i_0] [15] [i_9]) ? (arr_37 [i_0] [i_0] [i_0] [2]) : (((arr_37 [i_0] [i_0] [11] [i_0]) ? (arr_37 [i_0] [i_0] [i_0] [i_0]) : (arr_37 [i_0] [i_9] [i_0] [i_9])))));
        }
    }
    var_17 = (min(((((var_4 ? 4026531840 : var_4)) >> (-2123268956 + 2123268973))), (((35465 ? var_8 : var_4)))));
    #pragma endscop
}
