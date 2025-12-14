/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += max((max(-var_0, ((var_7 ? var_7 : var_3)))), -1);
    var_13 = var_3;
    var_14 -= ((max(-1222826661, -118)));
    var_15 = (-32767 - 1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_16 = (((min((max(-23491, 164213222)), (23491 && var_0))) < (arr_3 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = ((((!(arr_6 [i_0 + 1]))) ? ((((!((!(-32767 - 1))))))) : -4639977325022656552));
                            var_18 = ((+(((arr_5 [i_0 - 1] [7] [i_0 - 2] [i_0]) - (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])))));
                            var_19 = (max(((-4002526771105234358 * (arr_7 [i_0] [i_0] [i_0]))), ((3510617679 ? (((var_9 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_3]) : 850378664))) : (max(var_1, (arr_3 [i_2] [i_0])))))));

                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                var_20 ^= var_9;
                                var_21 = var_1;
                            }
                            arr_14 [8] [i_3] [i_3] [0] [4] [i_3] |= ((!((max((min((arr_4 [i_0 + 1]), (arr_2 [i_3]))), ((((arr_0 [i_0]) ? (arr_9 [1] [i_1] [9] [i_1]) : -1846834425))))))));
                        }
                    }
                }
                var_22 = (min(var_22, ((((((~(min((arr_9 [i_0] [i_0] [i_1] [i_1]), (arr_4 [i_0])))))) ? ((((max((arr_0 [i_0]), 2729443810289903389)) ^ (32754 ^ -281125574)))) : (min(9053409731010258715, 3510617679)))))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, var_0));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [4] [i_0] = ((-(min((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1])))));
                                arr_23 [i_7] [i_1] [i_0] [i_0] [i_1] [i_0] = ((!(-32767 - 1)));
                                arr_24 [i_1] [i_5] [i_5] [i_0] [i_7] [i_5] [i_5] = (max(-var_3, (max((arr_5 [i_0] [1] [9] [i_0]), (max(var_2, 67108856))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [i_1] [i_5] [i_9] [i_9] [i_0] = (arr_9 [2] [i_1] [i_5] [2]);
                                arr_30 [i_0] [i_0] [i_5] = 11754;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_24 = (arr_31 [4] [i_1] [6] [i_0]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_37 [i_0] = (arr_31 [i_0] [i_1] [i_10] [i_0]);
                                var_25 += (min(((((min(1222826635, 1222826640))) ? (min(4294967295, (arr_4 [i_11]))) : (min((arr_1 [i_0]), var_8)))), (arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, (arr_36 [i_1 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_1])));
                    var_27 |= var_5;
                    arr_41 [i_0 + 1] [i_0] [i_0] [1] = 4864103621641801810;
                    var_28 *= (((((((arr_31 [i_0] [i_0] [i_0] [i_1]) || 18446744073709551611)))) & ((var_1 ? -1 : (arr_1 [i_0])))));
                }
                arr_42 [i_0] [i_1] [i_1] |= 5313680781185591141;
            }
        }
    }
    #pragma endscop
}
