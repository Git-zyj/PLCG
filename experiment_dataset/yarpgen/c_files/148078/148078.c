/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0]);
                arr_5 [i_0] [i_0] [i_0] = arr_1 [i_0];
                arr_6 [i_0] = (max((arr_2 [i_0]), (arr_2 [i_1])));
                var_12 = (1099511365632 ? 0 : (((~(arr_4 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        var_13 = (((-9223372036854775807 - 1) & (arr_13 [i_2] [i_3] [0])));
                        arr_17 [11] [i_4] [i_2] [i_2] = (((arr_9 [13] [13]) ? var_4 : (arr_9 [i_5 + 1] [i_5 + 1])));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_14 = 9223372036854775789;
                            arr_20 [i_2] [i_3] [11] [i_2] [i_6 - 1] [i_2] = min((arr_15 [i_2] [i_2] [i_2] [i_2]), var_3);
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_15 += (arr_10 [i_7 - 1]);
                            var_16 = ((((!(arr_13 [i_2] [i_5] [i_5]))) ? (arr_11 [i_4] [i_4]) : (arr_15 [i_2] [i_3] [i_4] [i_2])));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_27 [6] [i_3] [i_8] [6] [1] = ((max((((arr_8 [i_3]) / var_6)), -23405)));
                            var_17 += (arr_9 [i_3] [2]);
                            var_18 = max((4778760072671882838 - 3066906231859975858), ((min((arr_26 [i_8]), (arr_9 [13] [i_3])))));
                            var_19 = ((-9223372036854775807 - 1) ? (min(15, (arr_14 [12] [i_3] [12]))) : (min((-3066906231859975858 / -183640948), (((!(arr_7 [i_3])))))));
                        }
                        arr_28 [i_5] [i_3] [i_4] [i_5] &= ((arr_25 [i_2] [i_2]) ? ((((-4778760072671882840 ? var_0 : (arr_7 [i_2]))) + (arr_9 [i_2] [i_5]))) : (((arr_18 [i_2] [i_3] [i_4] [i_4] [i_2]) ? (arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) : 0)));
                        var_20 = -1;
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                    {
                        var_21 = ((-3066906231859975885 > (((0 == (arr_18 [i_2] [i_3] [i_2] [i_9 + 1] [14]))))));
                        var_22 = ((((arr_8 [i_2]) ? (1 ^ -3869473285983410568) : var_10)));
                    }
                    arr_33 [11] [i_3] [i_4] = var_8;
                    var_23 = min((arr_32 [i_2] [i_2] [i_3] [i_4]), (arr_22 [i_4] [9] [i_2] [i_2] [i_2] [i_2]));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_40 [i_10] = (arr_11 [i_2] [i_2]);
                        arr_41 [1] [i_10] [i_3] [i_2] = ((arr_29 [i_2] [i_2] [i_2] [i_2]) ? (arr_30 [i_2] [i_3] [i_10] [i_11]) : var_3);
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, (9223372036854775789 && 21)));
                        var_25 = (arr_29 [i_2] [i_2] [i_10] [i_12]);
                        var_26 = (-223015627 ^ 0);
                        var_27 = (arr_34 [i_2] [i_3]);
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_28 = (((-4778760072671882838 + 9223372036854775807) >> (99313464 - 99313460)));
                        var_29 = arr_18 [i_2] [i_3] [i_3] [i_10] [i_13];
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_30 = 1;
                        var_31 = (arr_15 [8] [i_2] [i_3] [i_2]);
                        arr_51 [i_2] [i_3] [i_10] [i_14] = (arr_36 [i_2]);
                    }
                    arr_52 [6] [4] [i_3] [i_10] = (min(((15872 ? -655824232615738229 : 1)), (-9223372036854775807 - 1)));
                    arr_53 [1] [i_3] [i_10] = (arr_38 [i_10] [10] [i_3] [i_2]);
                    var_32 = (max(var_32, ((min(((0 ? 0 : 0)), (((!(arr_47 [i_2] [i_3] [i_2] [i_10] [i_10] [i_10])))))))));
                }
                arr_54 [i_2] [9] [9] = 0;
                var_33 = min((((((arr_44 [i_2] [i_3] [i_2] [i_3]) / -217354217080698054)) / ((0 ? 67553994410557440 : 1)))), (min(((var_8 ? (arr_13 [i_2] [i_2] [i_3]) : -5659094792387419399)), 1)));
            }
        }
    }
    var_34 = (max(var_9, -1));
    #pragma endscop
}
