/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [1] = (arr_0 [i_0]);
        var_18 = (((~42) || ((((((58 ? (arr_0 [10]) : (arr_1 [11])))) ? 0 : (arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [1] [i_1 + 2] = (max(var_9, ((((max((arr_6 [i_1] [i_1]), 191))) ? 8947520018958005300 : var_2))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_19 = ((var_15 * ((((!(arr_2 [11])))))));
                    arr_14 [i_1] [2] [2] [i_2] = (arr_12 [2] [2]);
                    var_20 = (((((arr_11 [i_2] [i_2 + 1]) ? (arr_11 [i_2] [i_2 - 1]) : (arr_11 [i_2] [i_2 - 1])))) ? (((arr_10 [i_1 + 3] [i_2] [i_2 + 1]) - (arr_10 [i_1 + 3] [i_2] [i_2 - 1]))) : (arr_10 [i_1] [i_2 - 1] [i_3]));
                }
            }
        }
        var_21 = (((((17732923532771328 ? ((var_16 ? var_0 : (arr_11 [i_1] [10]))) : var_16))) ? ((var_11 & (arr_5 [i_1 + 1]))) : 3));

        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            var_22 = (min(var_22, (arr_10 [10] [i_4 - 3] [i_4])));
            var_23 = (max((((arr_1 [i_1]) ? (((var_13 << (var_14 - 6336)))) : (max((arr_13 [i_1] [9] [i_4] [3]), var_2)))), ((((arr_7 [i_1 + 2]) <= (arr_2 [i_1 + 3]))))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 += (((((~(arr_16 [i_1 + 3] [i_5])))) ? (max((arr_16 [i_5] [i_1]), var_0)) : (arr_16 [i_8] [i_6 + 1])));
                            arr_26 [i_6] [i_8] = (((min((((arr_17 [i_1] [i_1] [i_1]) ? var_6 : (arr_23 [5] [i_7]))), (arr_17 [i_1] [i_1] [2]))) <= var_2));
                            arr_27 [i_6] [i_6] [i_1 - 2] [i_6] = ((((min((arr_2 [6]), (arr_20 [i_1 + 1] [i_6 + 1] [i_6] [i_6 + 1])))) & (arr_17 [i_1 + 1] [i_6 - 1] [i_8])));
                        }
                    }
                }
            }
            arr_28 [i_1] [i_1] = (!-3916825246833313961);
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_25 = var_3;
            var_26 = (arr_22 [i_1] [2] [i_9] [i_1] [i_9] [i_1]);
        }
    }
    for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_27 = (min(53, 4));
        var_28 ^= (max(((var_9 ? ((((arr_12 [i_10] [i_10]) && 68719476732))) : ((max(35043, (arr_29 [i_10])))))), (arr_11 [i_10] [i_10])));
        var_29 = var_3;
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_30 = 53;
        var_31 = (max((arr_0 [i_11]), ((((arr_7 [i_11]) ? var_0 : (arr_16 [i_11] [i_11]))))));

        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_32 = ((((max((arr_10 [9] [i_12] [i_12]), (arr_10 [i_11] [i_12] [i_12])))) || (((arr_10 [i_11] [i_11] [i_12]) != (arr_6 [14] [i_12])))));
            var_33 = (arr_35 [i_11]);
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            var_34 = (var_13 ^ 1);
            var_35 &= (arr_24 [3] [13] [i_11] [i_11] [i_13] [i_13] [i_13]);
            arr_43 [i_13] [i_13] = ((((((!(arr_34 [i_13] [i_11]))))) & (min(var_11, (((arr_29 [i_11]) ? (arr_35 [i_11]) : (arr_5 [i_11])))))));
            var_36 = (max(var_36, (((((((max((arr_18 [i_13]), (arr_24 [15] [i_11] [6] [i_11] [i_13] [i_11] [0])))) ? var_11 : (max((arr_5 [i_11]), var_4)))) > (arr_38 [i_11]))))));
            var_37 = (min(((~(arr_40 [i_13] [i_13]))), (((!(arr_24 [i_13] [i_13] [i_13] [i_11] [8] [i_11] [i_11]))))));
        }
    }
    var_38 = ((-((~(max(var_8, -19))))));

    for (int i_14 = 1; i_14 < 16;i_14 += 1)
    {
        arr_46 [i_14] [11] = (((((7096 ? 32256 : -4611686018427387904))) ? (arr_45 [i_14]) : (arr_45 [i_14])));
        var_39 = (arr_45 [i_14]);
        arr_47 [i_14] = arr_44 [i_14];
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    {
                        arr_55 [i_14] [i_15] [i_16] [i_14] [i_14] = (arr_44 [i_15]);
                        var_40 = max(68719476754, (arr_44 [i_14]));
                        arr_56 [i_14] [i_15] [i_16 - 2] [i_17] [13] = (~((var_5 ? (arr_44 [i_14 + 1]) : (arr_52 [i_14 + 1]))));
                        arr_57 [i_14] [i_15] [i_16 - 2] [6] = ((((((min(204, (arr_51 [i_17] [i_16] [i_14] [i_14]))) ^ (arr_44 [i_14 - 1])))) && ((max((arr_53 [i_14] [i_14 - 1] [i_16 - 1]), (((arr_44 [3]) - 13)))))));
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_41 = (((-(arr_48 [i_18]))));
        arr_62 [10] = (arr_9 [4] [0] [i_18]);
    }
    #pragma endscop
}
