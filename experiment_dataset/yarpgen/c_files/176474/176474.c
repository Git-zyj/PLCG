/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(-var_13, 96)), var_14));
    var_17 = var_13;
    var_18 = var_9;
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_21 *= arr_1 [i_1];

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                var_22 *= (((arr_8 [i_1]) * ((((!(((444082426 * (arr_9 [i_3]))))))))));
                var_23 = (((arr_7 [i_3 - 1] [i_3 + 2]) - ((~(!var_10)))));
            }
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_24 += (((arr_14 [i_1] [i_4] [i_4] [i_5]) ? (-81 <= var_13) : (min((arr_16 [i_1] [i_1] [i_2] [i_4] [i_5] [i_6]), (~var_3)))));
                        var_25 = (min(var_25, ((((max(((var_10 ? 29 : (arr_3 [13] [i_2]))), 84)) / 63)))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_1] = (min((arr_22 [i_4 - 4] [i_2] [i_1] [i_1]), (((var_3 ? 32767 : var_14)))));
                        arr_24 [i_1] [i_2] [i_4] [i_5] [i_4] [i_1] [i_7] = ((((((((arr_22 [i_1] [i_1] [i_1] [i_5]) / -258548900))) ? (((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_13 [i_1] [i_5]) : 186640514)) : (max(186640532, var_12)))) <= (((arr_11 [i_4 - 2] [i_4] [i_4 + 1]) << (((arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1]) - 206))))));
                        var_26 -= (!(arr_20 [0] [0] [i_4] [i_5] [i_7] [i_1]));
                    }
                    var_27 = (!var_4);
                    arr_25 [i_1] [i_1] [i_4] [4] [i_4] [i_4] = ((((((arr_11 [i_1] [i_2] [2]) ? (arr_16 [6] [6] [6] [i_4] [i_5] [i_5]) : (arr_8 [i_4])))) ? -1315097673 : (arr_18 [9] [i_2] [9] [11] [11])));
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_28 = ((var_12 - (arr_11 [i_1] [1] [i_4])));
                            arr_31 [2] [2] [i_1] [i_8] [i_8] [i_8] [i_9] = ((~(max(84, (-2147483647 - 1)))));
                            var_29 = ((540657995 ? var_1 : var_10));
                        }
                    }
                }
                var_30 += (arr_21 [1] [i_2]);
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_31 = (!(arr_1 [i_2]));
                var_32 = ((var_14 < (arr_15 [i_1] [13] [i_2] [i_10] [i_1] [i_2])));
            }
            arr_34 [i_1] [i_1] [13] = (min((arr_29 [i_2] [i_2] [i_1] [5] [i_1]), (arr_11 [i_1] [i_2] [i_2])));
            var_33 = (min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]), (((!(arr_20 [i_1] [9] [i_1] [i_2] [10] [i_2]))))));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_37 [i_1] [i_11] [i_1] = (max(var_4, var_12));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 13;i_13 += 1)
                {
                    {
                        var_34 = (((((arr_20 [9] [9] [i_1] [i_1] [i_1] [i_1]) && ((min(540657995, 212))))) ? ((~(arr_19 [i_1] [i_11] [i_12] [5] [i_13 - 1]))) : ((((((min((arr_9 [i_1]), var_14)))) <= (arr_12 [i_1] [i_1] [i_11] [i_1]))))));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_35 = (2795205807888483603 - 113);
                            var_36 *= (max(((-(arr_19 [i_13 - 3] [i_13] [i_12] [i_12] [i_11]))), ((((arr_19 [i_13 - 1] [i_13] [i_13 - 3] [13] [i_13]) >= (arr_9 [1]))))));
                            var_37 = ((((((~4323) - (!-1222476439)))) ^ (1024216131 & 7854886060633156253)));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_38 = (arr_9 [i_1]);
                            var_39 = (max(var_39, (max((max((~var_14), (arr_17 [i_1] [i_13 - 3] [i_12] [1] [0]))), (arr_44 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        }
                    }
                }
            }
        }
        var_40 = (min(var_40, 5));
    }
    #pragma endscop
}
