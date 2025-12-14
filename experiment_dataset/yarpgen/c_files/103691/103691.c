/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((-2 ? 2071622410306477574 : 3826));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, ((((arr_0 [i_0] [i_0]) || (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) || (arr_1 [i_0])));
        var_20 += var_6;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = ((-(arr_1 [i_1 + 1])));
        var_21 = (min(var_21, -var_11));
        arr_7 [i_1] [i_1] = (arr_5 [i_1] [i_1 + 1]);
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = (i_2 % 2 == zero) ? ((min(((var_15 - (arr_8 [i_2 - 1] [i_2]))), 26838))) : ((min(((var_15 + (arr_8 [i_2 - 1] [i_2]))), 26838)));
        arr_11 [i_2] = arr_0 [6] [6];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_22 = -1643278965;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_23 = (((arr_14 [i_4 - 1] [i_3]) & (arr_14 [i_4 + 1] [i_3])));
                            arr_28 [i_7] [i_3] [i_3] = (arr_16 [i_4 - 1] [11] [i_4 + 1]);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_31 [i_3] [i_4] [22] [i_6] [i_8] = 2055357204;
                            var_24 = ((0 && (arr_26 [i_3] [i_5] [i_3])));
                            var_25 = (max(var_25, (((-(arr_26 [i_5] [i_4] [i_5 - 4]))))));
                            var_26 = (min(var_26, ((((((((arr_30 [3] [i_5]) || var_17)))) * (((arr_27 [i_3] [i_4] [1] [i_6] [i_8]) ? (arr_15 [i_5]) : 16375121663403074041)))))));
                        }
                        arr_32 [i_5] [6] &= (((arr_29 [i_5 - 3] [i_5 - 1] [6] [i_5 + 1]) << (((arr_20 [i_5 - 3] [i_5] [1]) - 7282677719563379033))));
                    }
                    for (int i_9 = 4; i_9 < 20;i_9 += 1)
                    {
                        var_27 = (max(var_27, (((!(arr_22 [i_5] [12] [i_5]))))));
                        arr_35 [i_3] [i_3] [i_3] [i_9] [i_9] [i_9] = arr_18 [i_9] [i_3] [i_3];
                        var_28 = (max(var_28, (arr_33 [i_3] [i_9 - 2] [i_5])));
                    }
                    var_29 = ((~(arr_34 [i_5] [i_4 - 1] [i_4] [i_3])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 15;i_12 += 1)
            {
                {
                    var_30 -= (min(((((-(arr_25 [i_11 - 1] [i_11 - 2] [i_11 - 2]))))), (min((arr_1 [i_12 - 2]), 1152921487426977792))));
                    var_31 = ((((max((arr_41 [i_10 + 1] [i_11 + 2]), (arr_41 [i_10 + 1] [i_11 + 1])))) <= ((min((arr_41 [i_10 - 1] [i_11 + 2]), (arr_41 [i_10 - 1] [i_11 + 2]))))));

                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        arr_45 [i_13] [1] [i_10 + 2] [i_10 + 2] = 1;
                        arr_46 [i_10 + 1] [i_11] [i_12 + 1] [4] = (arr_30 [i_10 - 1] [i_11 + 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
