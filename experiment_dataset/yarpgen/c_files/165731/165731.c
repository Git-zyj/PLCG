/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_0, var_1)))) ? var_1 : (((15947 == 15947) ? (52 - 204) : 3011772340))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 + 1] [0] &= ((3011772340 % ((((min(52, var_9))) ? (arr_0 [i_0 + 1] [i_0 + 1]) : ((~(arr_1 [8])))))));
        arr_3 [i_0] = var_3;
        var_15 = (((var_9 ? ((1248909159 ? var_5 : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0 + 1]))) * ((((((((arr_1 [3]) ? (arr_1 [i_0]) : var_10))) <= (8575481742304762552 & -1530996168))))));
        arr_4 [i_0] = (((arr_1 [i_0 + 3]) % ((~(arr_0 [i_0 - 1] [i_0 - 1])))));
        arr_5 [2] = (arr_1 [6]);
    }
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            {
                var_17 *= (((((arr_11 [8]) / (arr_11 [14]))) == (((arr_11 [4]) ^ (arr_11 [0])))));

                /* vectorizable */
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    arr_14 [i_1] = ((49589 ? 1283194956 : 3011772339));
                    var_18 = (max(var_18, (((-1248909159 ? (arr_12 [6] [i_2 + 1] [i_3 + 1] [i_3]) : (((arr_9 [2]) - (arr_12 [1] [i_2] [14] [1]))))))));
                    arr_15 [i_1] [5] = (((arr_6 [i_1]) ^ (arr_8 [i_1] [i_1 + 3] [i_2 - 2])));
                    var_19 = (min(var_19, (arr_12 [8] [i_1 + 1] [i_2 - 3] [i_3 - 2])));
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_20 = ((!((!(((arr_11 [i_1]) || (arr_7 [i_1] [i_2 + 1])))))));
                    var_21 = (((arr_12 [i_1] [i_1 - 1] [i_2 + 2] [i_4 + 1]) ? ((~(arr_12 [i_1] [i_1 + 3] [i_2 - 3] [i_4 - 1]))) : (arr_12 [i_1] [i_1 - 1] [i_2 + 1] [i_4 - 1])));
                    var_22 = var_6;
                }
                for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_2 - 2] [i_1] [i_2] = (((((-(max(var_6, var_1))))) ? ((var_8 * (arr_20 [i_1 + 3] [i_1] [6] [i_1 - 1]))) : (max((arr_20 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2]), var_12))));
                    arr_22 [i_1] [14] [14] &= (((min((arr_8 [10] [i_2 - 2] [i_2]), (arr_18 [i_2] [i_2 - 1]))) - (arr_8 [10] [i_2 - 1] [2])));
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_29 [i_1] [i_1] [6] [i_1] = (arr_12 [i_1] [i_7 - 3] [i_7 - 1] [5]);
                        var_23 = (((arr_23 [i_1 + 1]) ? (arr_26 [i_7 - 1] [i_1] [i_1]) : var_8));
                        arr_30 [i_1 - 1] [0] [i_6] [i_7] &= (arr_18 [i_6 + 4] [i_2]);

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            arr_33 [i_1 - 1] [6] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1] = (arr_12 [i_1] [i_2] [i_7] [i_8]);
                            var_24 = (max(var_24, 1283194956));
                            arr_34 [i_1] [i_6] [i_1] = ((9223372036854775807 || (arr_16 [i_1] [i_1] [1])));
                        }
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            var_25 ^= (((arr_31 [i_7 + 1] [i_6 - 1] [i_6 + 3] [i_2 - 3] [i_1 + 2] [i_1 - 1] [i_1 + 2]) >= var_5));
                            var_26 = ((1283194957 ? (arr_8 [i_1] [i_1] [i_2 + 3]) : var_12));
                            arr_37 [i_1 + 2] [0] [i_6] [i_7 - 2] &= ((-(arr_25 [i_2 + 2] [i_1 + 2] [12])));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_27 = ((-60 - (var_8 - 786432)));
                            var_28 = (arr_31 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 2] [14] [10] [i_6]);
                            arr_40 [12] &= (((arr_24 [12] [i_2]) ? 13830486136849920872 : (arr_28 [i_7 + 1] [14] [8] [i_7 - 3])));
                        }
                        var_29 = (((arr_31 [i_1 + 2] [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 3]) ^ (arr_12 [i_1] [i_1 + 3] [i_1] [12])));
                    }
                    arr_41 [i_1] = (~234);
                }
                arr_42 [i_1] = var_3;
                var_30 ^= 7445;
            }
        }
    }
    #pragma endscop
}
