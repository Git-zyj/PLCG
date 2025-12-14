/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (min(((-(((arr_0 [i_0]) << (arr_0 [i_0]))))), (((((arr_1 [i_0] [i_0]) - (arr_1 [4] [1]))) * (!var_14)))));
        var_16 = (arr_1 [6] [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = (min(var_17, (arr_0 [i_1])));
        var_18 = arr_1 [i_1] [i_1];
        arr_5 [i_1] |= ((((((((arr_0 [i_1]) ? (arr_3 [i_1]) : (arr_3 [13]))) >> (((arr_4 [i_1]) + 48))))) ? (arr_4 [6]) : (min((((arr_3 [i_1]) ? (arr_0 [i_1]) : var_1)), var_1))));
    }
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_20 = (max(var_20, (arr_1 [i_2] [i_3])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3] [i_2] [i_3] [i_6] [i_4] = (((arr_11 [i_4] [i_4]) ? ((((!(arr_17 [i_2] [i_5 - 2] [i_4] [i_2] [i_2]))))) : (((((arr_11 [i_4] [i_4]) * (arr_8 [13])))))));
                                var_21 = (--5272191042858993750);
                            }
                        }
                    }
                    var_22 ^= (4265077880237696530 ? 1806648272 : 5272191042858993754);
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    var_23 = (max(var_23, (arr_11 [i_2] [i_2])));
                    var_24 = (min(var_24, (~var_13)));
                    var_25 = (min(var_25, ((((arr_11 [i_2] [i_2]) & var_14)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_28 [i_2] [i_3] [i_8] [i_9] [i_10] |= 14181666193471855069;
                                var_26 = (((arr_17 [i_2] [i_3] [i_8] [i_9] [3]) + (arr_17 [i_2] [i_3] [i_8] [i_9] [19])));
                            }
                        }
                    }
                    var_27 = (((((var_11 + 2147483647) << (((var_4 + 3863892865983274176) - 21)))) == (arr_20 [i_2] [i_3] [i_3])));
                }

                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    arr_32 [i_11] [i_2] [i_2] = 4265077880237696508;

                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        var_28 = (min(var_28, ((((!(((var_12 * (arr_29 [i_2] [i_3] [i_11] [i_12 - 1]))))))))));
                        var_29 = (min(-var_14, (((min((arr_10 [i_2] [16] [i_2]), (arr_24 [i_2] [i_2] [i_3] [i_11] [i_12])))))));
                        var_30 = (min(var_30, (arr_23 [i_11])));
                        var_31 = (min((((((min(var_8, var_2)))) + ((var_6 * (arr_15 [i_2] [i_2] [7] [11] [i_12] [8]))))), (((var_6 - (((min((arr_15 [20] [i_3] [20] [1] [i_3] [i_3]), (arr_10 [i_3] [i_11] [i_12]))))))))));
                    }

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_32 = (min(var_32, ((((arr_11 [i_2] [i_3]) + (((arr_15 [i_2] [i_3] [i_11 - 1] [i_13] [i_3] [i_13]) + (arr_15 [i_2] [i_3] [i_11 - 1] [i_13] [i_3] [i_11 - 1]))))))));
                        var_33 |= (min(((((min((arr_7 [3]), (arr_17 [i_2] [i_3] [i_11] [i_3] [i_13]))) != ((min((arr_22 [i_2] [i_2] [i_2]), (arr_11 [i_2] [i_3]))))))), (min(((((arr_14 [i_2] [i_3] [17] [i_13]) || (arr_17 [1] [i_3] [1] [i_13] [i_11])))), (arr_1 [i_3] [i_3])))));
                        arr_37 [i_2] [i_2] [i_2] [i_2] &= (min((arr_6 [i_11 + 1]), ((((-(arr_8 [i_13])))))));
                    }
                }
                var_34 = (max(var_34, var_5));
            }
        }
    }
    #pragma endscop
}
