/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0 + 3] = (((((+(((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))))) ? (arr_1 [i_0]) : ((min(((-(arr_3 [i_0] [i_0 - 1]))), ((((arr_3 [i_0] [i_0]) && (arr_2 [i_0])))))))));
        var_10 = (((arr_3 [i_0] [i_0 - 2]) ? ((((!(arr_2 [i_0]))) ? ((-(arr_1 [i_0]))) : (arr_3 [i_0] [i_0 + 4]))) : (((arr_3 [i_0] [i_0]) ? (((arr_2 [i_0]) / (arr_0 [i_0]))) : (arr_0 [i_0 - 2])))));
        var_11 = (max(var_11, (arr_1 [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_8 [3] |= ((arr_7 [i_1 + 1] [i_1 + 2]) * (arr_7 [i_1 + 2] [i_1 - 1]));
        var_12 = arr_5 [i_1];
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_13 = (((arr_10 [i_2] [i_2]) ? ((((arr_11 [0] [i_2]) ? (arr_3 [i_2] [i_2]) : (arr_3 [i_3] [i_2])))) : (((~(arr_1 [i_2]))))));
            var_14 = (min(var_14, ((((((~(((!(arr_11 [i_3] [i_3]))))))) ? (max((arr_2 [i_2]), (((!(arr_10 [i_2] [i_2])))))) : ((((!(arr_6 [i_3]))))))))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_15 += ((!((!((min((arr_10 [2] [1]), (arr_16 [i_2] [i_2]))))))));
            var_16 = (min(var_16, (arr_10 [i_4] [7])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_25 [i_2] [i_2 + 3] [i_2] [i_2] [i_2] [i_2] = (min(((((((-(arr_23 [i_7] [i_2] [i_5])))) && ((((arr_6 [i_7]) ? (arr_9 [i_2]) : (arr_6 [15]))))))), (((arr_12 [i_5]) ? (arr_16 [i_4] [i_6]) : (arr_20 [i_2] [i_2 + 4] [i_2 + 3])))));
                            var_17 = (arr_18 [i_2]);
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_34 [i_2] [i_8] [i_10] [10] = ((!(arr_6 [i_2 + 3])));
                        arr_35 [i_2] [i_2] [i_2] [5] [i_2] [i_2] = (!((max((arr_11 [i_8 + 1] [i_2]), (arr_19 [i_8 + 2] [i_8 + 1] [i_2])))));
                    }
                }
            }
        }
        var_18 = (arr_5 [i_2]);
        var_19 = (arr_27 [i_2] [i_2] [i_2]);
        var_20 = (max(var_20, ((~((((max((arr_10 [i_2] [i_2]), (arr_24 [i_2] [i_2] [i_2] [i_2] [4])))) ? ((((arr_6 [i_2]) || (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])))) : ((max((arr_12 [i_2]), (arr_10 [i_2] [i_2 - 1]))))))))));
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_48 [i_11] [i_11 + 1] [i_11 + 3] [i_11] [i_11 - 1] = (((arr_32 [i_11 + 2] [i_12] [i_14] [i_11 + 2] [i_12]) ? (((!(arr_32 [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13] [i_13 - 1])))) : ((min((arr_32 [i_14 - 2] [i_14] [i_13] [i_11] [i_11]), (arr_32 [i_14 - 4] [i_12] [i_14 - 4] [i_14 - 4] [i_12]))))));
                            var_21 = (((min((arr_14 [i_11 - 1]), (arr_14 [i_11 + 1]))) != (arr_33 [i_11 - 1])));
                            var_22 = (((!-15) ? (max((((7057 ? (arr_6 [i_12]) : (-2147483647 - 1)))), (max(3200311757288366749, 8421443945191224364)))) : ((((!(arr_33 [10])))))));
                        }
                    }
                }
                var_23 = (max(var_23, (((((min((arr_26 [i_12] [i_11] [i_11]), ((~(arr_29 [i_11] [i_12] [i_11] [i_11])))))) ? (min((arr_38 [i_11] [i_12]), (arr_29 [i_11] [i_11 + 1] [i_11] [i_11]))) : (arr_2 [16]))))));
                var_24 = (arr_6 [i_11]);
            }
        }
    }
    var_25 = ((((((var_4 ? var_8 : var_2)) >= (!var_8))) ? (~var_8) : var_5));
    #pragma endscop
}
