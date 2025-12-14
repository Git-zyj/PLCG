/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [12] [i_0] &= ((1 ? (arr_2 [13] [13]) : (arr_1 [8])));
        arr_5 [i_0] = (arr_2 [i_0 - 3] [4]);
        var_20 += (arr_2 [i_0 + 1] [i_0 - 3]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_21 += max((((((((arr_2 [i_1] [i_2]) >= (arr_6 [i_2])))) <= (max((arr_7 [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1])))))), (max(((-(arr_2 [i_1] [i_2]))), (arr_6 [i_1]))));
                    arr_14 [i_3] [1] [1] [1] = (((((arr_12 [i_1] [i_2] [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : ((min((arr_1 [i_2]), (arr_11 [i_1] [i_2] [i_3])))))) * (max((min((arr_9 [i_3] [i_3]), (arr_10 [i_1]))), (((arr_10 [9]) ? (arr_9 [i_1] [i_1]) : (arr_10 [i_2])))))));
                }
            }
        }
        var_22 = (max((((((min((arr_11 [i_1] [i_1] [i_1]), (arr_13 [i_1] [i_1] [i_1] [i_1])))) ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_1])))), ((((arr_7 [i_1] [i_1]) == (arr_2 [i_1] [i_1]))))));
        var_23 = (min((arr_11 [i_1] [i_1] [i_1]), (arr_3 [i_1])));
        var_24 &= (min((15338080357728646344 >= 1), ((max((arr_11 [i_1] [3] [i_1]), (arr_8 [i_1] [i_1]))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_25 = (18859 + 100);
            var_26 = (((((max(143, -21327)))) ? (max((min((arr_2 [i_4] [9]), (arr_19 [i_4] [10]))), (arr_7 [i_4] [i_5 - 1]))) : (arr_6 [i_4])));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_27 = (arr_6 [i_4]);
            arr_24 [i_4] [i_6] &= ((((arr_2 [2] [i_6]) ? (arr_12 [0] [i_6 - 1] [i_6] [i_4]) : (arr_7 [i_6 + 1] [1]))));
            arr_25 [0] [i_6] [7] = (((arr_7 [i_4] [i_4]) ? (arr_10 [i_4]) : (arr_12 [i_4] [i_4] [6] [i_4])));
            var_28 = (max(var_28, (arr_11 [i_6] [i_6] [i_4])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_40 [i_4] &= (arr_31 [i_4] [i_4] [i_4]);
                            var_29 = (arr_35 [i_4] [i_7] [i_4] [i_9]);
                        }
                    }
                }
                arr_41 [i_4] [i_7] = ((arr_11 [i_8] [i_8] [8]) ? (arr_2 [i_4] [i_4]) : 1474313864);
            }
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                arr_45 [i_7] [7] [i_7] = (arr_30 [i_7 + 1] [i_7 + 1] [i_11 + 1] [i_7 + 1]);
                var_30 -= arr_18 [i_4] [i_7];
            }
            arr_46 [i_7] = ((((arr_13 [i_4] [7] [i_4] [8]) <= (arr_27 [i_4] [i_4] [i_4]))));
            var_31 = (((arr_34 [i_7] [3] [i_7 - 1] [i_7]) || (arr_29 [i_7] [i_7 - 1])));
            var_32 = (arr_38 [i_4] [i_7] [i_7] [i_7] [10] [0] [i_7]);
        }
        var_33 ^= (((arr_0 [i_4] [i_4]) ? ((((!(arr_0 [i_4] [i_4]))))) : (arr_37 [i_4] [i_4] [7])));
    }
    var_34 = (max(var_34, (((var_2 ? ((~((var_13 ? var_19 : var_11)))) : (((var_15 ^ var_6) * (var_9 > var_2))))))));
    var_35 |= var_5;
    var_36 += (~var_8);
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            {
                var_37 = (min((arr_47 [i_13]), (arr_52 [1])));
                arr_53 [i_12] [i_12] = min(((max(((!(arr_52 [16]))), (min((arr_49 [i_12]), (arr_49 [i_12])))))), (min(((min((arr_47 [i_12]), (arr_47 [i_12])))), (((arr_47 [i_13]) ? (arr_50 [i_12]) : (arr_50 [i_12]))))));
            }
        }
    }
    #pragma endscop
}
