/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((min(var_8, ((var_8 ? 36585 : 101))))), (min((max(var_2, var_15)), var_11)));
    var_21 = (((var_6 != var_9) ? var_3 : ((-0 ? (0 * var_1) : (var_14 * var_18)))));
    var_22 = 19523;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_23 *= arr_3 [i_0];
        arr_4 [i_0] [i_0] = (((arr_1 [11] [11]) ^ (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_24 |= ((var_16 ? ((min(46012, ((~(arr_0 [i_1])))))) : (min(((min((arr_5 [7] [i_1]), (arr_1 [i_1] [i_1])))), (((arr_6 [i_1]) ? (arr_0 [i_1]) : var_9))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_25 = (min(4099611184, 14545252679563112391));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [i_2] [i_2] = (((arr_14 [i_3] [i_3] [6] [12] [i_3 - 1]) ? -var_13 : (((min((arr_2 [i_1] [i_1]), (arr_13 [i_1] [i_1] [i_1] [i_1]))) % (arr_12 [i_4] [i_1])))));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [17] [i_5] [i_5] [i_1] [i_5] [i_1] [i_1] = (arr_5 [i_1] [i_1]);
                            var_26 = (max(var_26, ((min(((((((arr_1 [i_5] [6]) && (arr_2 [i_1] [i_1]))) && (!13731227899455803739)))), (arr_7 [i_1] [i_1]))))));
                            var_27 = ((((arr_11 [i_3 - 1] [i_3 + 1] [i_3 + 2]) ? (arr_11 [i_3 - 1] [i_3 + 1] [i_3 + 2]) : (arr_11 [i_3 - 1] [i_3 + 1] [i_3 + 2]))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_28 &= (arr_5 [i_3] [i_6]);
                            arr_21 [i_1] [i_2] [i_1] [i_2] [i_6] = var_2;
                            arr_22 [i_3] [i_6] [i_3] [i_3] [i_2] [i_2] [i_1] = ((arr_19 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 2]) % (arr_19 [i_3 + 2] [i_3 + 1] [i_3] [i_3 - 1]));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_4] = ((((-(arr_7 [i_1] [i_4])))) ? ((((arr_1 [i_4] [i_3]) || var_4))) : ((((arr_3 [i_4]) && (arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 2])))));
                            arr_26 [i_2] [i_4] = (arr_24 [i_1] [i_2] [i_3] [0] [i_7]);
                            var_29 = var_8;
                        }
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_30 -= (((-(var_4 ^ 6149193982092083820))));
                        arr_29 [i_1] [i_8] = ((max(16071261331440996058, 46012)));
                        arr_30 [i_8] = (((((arr_1 [i_3] [i_2]) ? -14545252679563112400 : (arr_17 [i_1] [i_3 + 2] [i_1] [i_8] [i_8]))) <= ((((!(arr_27 [i_3 + 2])))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_35 [i_1] [5] [5] [i_9] = ((-(arr_31 [i_9] [i_9 + 2] [i_3 - 1] [12])));
                        var_31 -= (var_2 % ((~(arr_19 [i_9] [i_3] [i_2] [4]))));
                        arr_36 [i_3] [i_9] [i_3] [i_2] [3] = (arr_20 [i_1] [i_2] [i_1]);
                        var_32 = var_12;
                        arr_37 [i_9] = (arr_31 [i_1] [i_2] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_41 [i_1] [i_1] [i_1] = (((arr_28 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) ? (arr_28 [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 1]) : var_16));
                        var_33 = (((arr_7 [i_3 + 1] [i_10]) != (arr_24 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_10] [i_3 + 2])));
                        arr_42 [15] [i_3] [15] [i_1] = (((arr_39 [i_3 + 1]) ^ (arr_39 [i_3 + 1])));
                    }
                }
            }
        }
        var_34 = (arr_23 [i_1] [i_1]);
        var_35 = (min((arr_7 [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_45 [i_11] [i_11] = ((((!(arr_13 [i_11] [i_11] [i_11] [i_11]))) ? -var_18 : ((-(arr_34 [i_11] [i_11] [i_11] [i_11])))));
        var_36 = (arr_40 [i_11] [i_11] [i_11] [i_11]);
        var_37 = (arr_34 [i_11] [i_11] [i_11] [i_11]);
        arr_46 [i_11] [i_11] = ((((((arr_27 [i_11]) < (arr_8 [i_11] [i_11]))))) ^ (arr_12 [i_11] [i_11]));
    }
    #pragma endscop
}
