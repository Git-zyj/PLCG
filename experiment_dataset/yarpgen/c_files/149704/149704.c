/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [6] [i_2] [i_2] = (((((64147 != (arr_6 [i_0])))) % ((((arr_4 [i_3 + 2]) >= (arr_4 [i_3 - 2]))))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                var_17 &= (min((((var_9 - var_4) ? (((((arr_4 [i_2]) || var_10)))) : (min((arr_0 [i_1]), 1885615965)))), (((((min((arr_1 [i_3] [i_4]), (arr_4 [i_0])))) ? (arr_7 [i_0] [i_3] [i_2] [i_3 + 2]) : (arr_11 [i_4] [i_4] [1] [i_3 - 2] [i_3 + 2]))))));
                                arr_12 [i_0] = ((!(arr_8 [1] [i_3] [i_1] [i_0])));
                                var_18 = (arr_8 [5] [i_3 - 2] [i_2] [i_2]);
                                var_19 = (((min((arr_8 [i_3] [i_3] [i_3 + 2] [4]), ((64153 ? 2452970149 : 64123)))) <= var_9));
                                var_20 = (max(((((var_15 != (arr_10 [i_3 + 2] [i_1] [i_1]))) ? (((var_1 == (arr_6 [i_0])))) : ((min((arr_8 [1] [i_1] [i_1] [i_1]), -1))))), (min(((var_6 ? 1 : var_16)), var_9))));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_21 = (((min(var_3, (arr_4 [i_3])))));
                                var_22 += ((!(383383618 + -4)));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3 + 3] [1] = (arr_1 [i_1] [i_2]);
                                arr_20 [i_0] = (min(17, (3911583677 * var_2)));
                                var_23 &= (arr_2 [i_0]);
                                var_24 = ((var_6 < ((((((arr_2 [i_0]) << (var_14 - 5534)))) ? 66087197 : (max(var_4, (arr_4 [4])))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                            {
                                arr_23 [i_0] [i_7] = (((((-1305922936 ? (arr_4 [4]) : 549755813887))) ? 0 : (arr_2 [i_3 - 2])));
                                var_25 = (arr_22 [5] [7] [i_3 + 1] [i_0] [i_3 - 1]);
                                arr_24 [9] [i_0] [i_7] [i_7] [i_7] [i_7] = (arr_7 [i_0] [i_1] [i_2] [i_3 + 2]);
                                arr_25 [i_0] [i_1] [i_2] [i_1] [i_7] &= (arr_21 [i_1] [i_7] [i_3 - 2]);
                            }

                            for (int i_8 = 0; i_8 < 11;i_8 += 1)
                            {
                                arr_28 [i_0] [i_0] = ((min(var_8, (arr_14 [i_0] [i_1]))));
                                arr_29 [i_1] [i_2] [i_8] |= 1;
                                var_26 = ((var_16 * (((arr_16 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] [6] [i_8]) ? (arr_4 [9]) : var_9))));
                            }
                        }
                    }
                }
                arr_30 [i_0] [8] [i_0] = (var_7 | 1);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_27 -= (((arr_33 [i_0]) ? 0 : 126));
                            var_28 = ((var_0 + (((((((arr_7 [i_0] [i_1] [5] [i_10]) ? -17 : var_16)) == (((16 || (arr_18 [i_0] [i_0] [i_0] [i_0] [i_10]))))))))));
                        }
                    }
                }
                arr_38 [i_0] = 6408711636633968502;
                var_29 += (((arr_34 [5] [i_1] [i_1] [6] [10]) ? ((((var_7 ? 64149 : (arr_31 [i_0]))) + (arr_17 [i_1] [6] [i_1] [i_0] [i_0]))) : var_4));
            }
        }
    }
    var_30 = ((var_9 ? 1 : (((((var_6 << (2409351330 - 2409351330))) == -11173)))));
    var_31 ^= var_15;
    #pragma endscop
}
