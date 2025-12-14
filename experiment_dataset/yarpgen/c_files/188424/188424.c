/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [i_1] = (max((((((max(var_2, (arr_1 [i_1])))) ? ((max(var_8, -6))) : -32760))), (min((var_5 * var_10), 5))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_11 [10] [i_1] [i_1] = (arr_5 [i_2] [i_0]);
                    arr_12 [i_1] [10] [i_1] [i_1] = (arr_6 [i_0]);
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    arr_16 [i_0] [i_1] = ((((var_12 ^ (arr_13 [i_1 + 2] [i_1 + 2] [i_3 + 1] [i_3])))) ? (~50108) : ((min((arr_13 [i_1 + 1] [i_3 + 1] [i_3 - 1] [i_3]), (arr_13 [i_1 - 2] [i_1] [i_3 + 1] [i_3 + 1])))));
                    var_13 = max((((13440 ? -2003977387 : (arr_14 [i_3] [i_1] [i_0])))), (max(14895920342833308933, 281474439839744)));
                    var_14 = (((min((max(100, 4027243326)), (min((arr_15 [i_1]), (arr_15 [i_1])))))) ? ((((min(var_1, var_10))) | (min(281474439839744, var_5)))) : (arr_13 [i_0] [i_0] [i_1] [i_0]));
                    var_15 ^= var_4;
                }
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    var_16 -= ((-18056976895669617000 / ((((arr_19 [i_1 + 3] [2] [i_4 + 4]) + -8)))));
                    arr_20 [i_0] [i_1] [i_1] = (((((2524727953442200375 ? -118 : 35995))) ? ((((!(arr_13 [i_4] [i_4 + 3] [i_4 + 2] [i_1 + 3]))))) : var_9));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_17 -= (max(var_0, 644285796557310200));
                                arr_27 [i_6] [4] [i_1] [i_1] [i_0] [i_0] = (!38);
                            }
                        }
                    }
                    var_18 -= ((67100672 ? 13938 : (!-27237)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_30 [i_0] [i_1] [i_1] = (arr_18 [i_1 + 2] [i_1 - 1]);
                    var_19 = (min(var_19, ((((arr_29 [2] [i_1 + 1] [4] [i_1 + 1]) ? 3824018610910685116 : (arr_22 [2]))))));
                    var_20 -= (((!(arr_24 [i_0] [i_1 - 2] [i_7] [i_7]))));
                    arr_31 [i_0] [i_1] = (((arr_9 [i_1] [i_1 + 2] [i_1]) ? (arr_9 [i_1] [i_1 + 3] [i_1]) : (arr_9 [i_1] [i_1 - 1] [i_1])));
                    var_21 = ((-(arr_2 [i_0] [i_1 + 2])));
                }
                arr_32 [i_0] [i_1] [9] = (((min(((-(arr_0 [1] [i_1]))), (arr_14 [i_1] [i_1] [i_1 - 4]))) / -35995));
                var_22 = (min(var_22, (((((min(var_10, (arr_0 [i_1 + 2] [i_1 + 2])))) ? (arr_0 [i_0] [i_0]) : ((((arr_17 [i_1 + 1] [i_1 - 1] [6] [i_1]) ? (arr_17 [i_1 - 3] [i_1 - 4] [6] [6]) : (arr_17 [i_1 - 3] [i_1 - 2] [2] [i_1])))))))));
            }
        }
    }
    var_23 = ((max((var_4 >= 6904045809073244474), ((29519 ? 7538241573279976704 : 4080)))));
    var_24 -= var_10;
    #pragma endscop
}
