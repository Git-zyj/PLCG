/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_15 = ((-(arr_3 [i_1 - 2] [i_1 + 1])));
                    var_16 = ((0 ? 1 : (arr_6 [i_2 - 1] [i_1 + 2] [i_2 + 3])));
                    arr_7 [i_0] [i_0] [i_2 + 2] [i_1 - 1] = (((arr_1 [i_1 - 2] [i_2 + 3]) >> (((arr_1 [i_0] [i_0]) - 4857619999443436887))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_17 = ((-(arr_9 [i_0] [21] [i_2 + 1] [i_1 - 4] [23])));
                        arr_12 [13] [0] [4] [i_2 - 1] [7] = (((arr_1 [12] [i_1 - 3]) << (((arr_2 [i_0]) - 259323420))));
                        arr_13 [11] [i_1 - 4] [i_2 + 3] [i_3] = ((arr_4 [i_0] [i_0] [i_0]) + 0);
                    }
                    for (int i_4 = 4; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1 - 3] [i_2 + 3] [i_4 - 4] = var_7;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_18 = (max(var_18, ((0 > (((!(arr_1 [i_2] [i_4 - 2]))))))));
                            var_19 = (((arr_4 [i_1 - 2] [i_4 - 1] [i_4 - 1]) ? (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (arr_4 [i_1 - 2] [14] [4])));
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_20 = (((arr_4 [i_0] [9] [i_0]) + (arr_4 [i_6 - 1] [i_4 - 2] [i_0])));
                            var_21 ^= (((((0 >> (2305842734335787008 - 2305842734335787007)))) ? 9223372036854775807 : 3898270368));
                        }
                        arr_22 [16] [6] = (((arr_11 [i_4 - 2] [i_4 - 3] [1] [i_4 - 3] [i_2 - 1] [1]) ? 1 : (arr_11 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_2 - 1] [i_1 + 1])));
                        arr_23 [i_0] [i_0] [23] [i_4 + 1] = (arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 3]);
                    }
                    for (int i_7 = 4; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_26 [15] = (1 ? (((arr_3 [i_1 + 2] [i_7 + 1]) - var_8)) : -276472837);
                        arr_27 [i_2 + 2] [i_0] = ((~(~276472836)));
                        var_22 = (((arr_25 [i_7 - 1] [i_7 - 2] [13] [i_2 + 2]) & 3639121474));
                        arr_28 [i_0] [6] [i_2 - 1] [i_2 - 1] = (arr_6 [i_2 + 2] [i_7 - 4] [i_1 - 4]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_23 = ((!(arr_6 [i_1 - 1] [i_2 + 3] [i_2 + 3])));
                        var_24 = (!var_4);
                        arr_33 [20] [i_1 - 1] [23] [i_1 - 1] [i_8] [i_8] = -250794664;
                        var_25 = (max(var_25, ((((53372 / (arr_3 [i_1 - 3] [i_1 - 3])))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_26 = (((((~2659559818268760220) - (((((arr_5 [i_0] [i_10 + 1]) == 1))))))) ? (min(var_9, ((3206171951 + (arr_2 [17]))))) : (((max((arr_9 [8] [20] [i_9 + 2] [i_9 - 1] [i_1 - 4]), (arr_9 [i_0] [i_1 - 2] [i_9 + 1] [i_9 + 3] [3]))))));
                            var_27 ^= var_9;
                            var_28 -= (((((arr_0 [i_1 + 1]) >> (((arr_0 [i_1 + 2]) - 3915525888)))) % (((min(1710870584, 2305842734335787008))))));
                        }
                    }
                }
            }
        }
    }
    var_29 = var_5;
    var_30 = var_2;
    var_31 = var_13;
    #pragma endscop
}
