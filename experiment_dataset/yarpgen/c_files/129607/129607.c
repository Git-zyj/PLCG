/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(((max(var_2, var_12))), (~var_6))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] &= (max((((((arr_1 [i_0] [i_1 + 1]) && -112)) ? (arr_1 [i_0] [6]) : (((arr_5 [i_0] [i_1 - 1]) - (arr_5 [i_0] [i_1]))))), ((((((min((arr_1 [i_0] [i_1]), (arr_4 [13])))) + 2147483647)) >> (-48 + 48)))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] &= (min((arr_4 [i_1 + 1]), (((((max((arr_5 [i_0] [i_1 + 1]), (arr_5 [1] [8])))) ? (arr_1 [i_0] [i_0]) : (((12766 ? -122 : (arr_1 [i_1] [i_2])))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] |= 63;
                }

                /* vectorizable */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_20 = (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 1]);
                                arr_22 [i_5] [i_5] [i_3 + 3] [i_4] [i_5] = (((((arr_8 [i_0] [i_3 - 1] [11]) ? (arr_13 [i_1] [i_3 + 1] [i_4] [i_5]) : (arr_19 [i_0] [i_5])))) ? (arr_2 [i_0] [i_0]) : (arr_15 [i_0] [i_5]));
                                arr_23 [i_5] [i_3] = ((1720495104 * (arr_15 [3] [3])));
                                var_21 = (arr_21 [i_3] [i_3 - 1] [i_3 + 3] [i_3] [i_5]);
                                arr_24 [i_0] [i_1 - 1] [i_3] [i_4] [i_5] = (arr_14 [10] [6] [i_4] [10]);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_27 [1] [i_1] [i_3] [i_1] [i_6] = (arr_8 [7] [3] [i_6]);
                        arr_28 [i_1 - 1] = (~(arr_15 [i_1 + 1] [15]));
                        arr_29 [7] [7] [7] [i_6] = ((((((arr_26 [i_0]) & 28015))) ? 3 : (arr_11 [i_1] [i_1] [i_3 - 1] [i_6])));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_22 = (((arr_15 [i_0] [i_7]) ? (((arr_11 [i_0] [14] [14] [i_6]) % 2574472187)) : (arr_31 [13] [i_0] [i_0] [i_1 - 1])));
                            var_23 = ((240 > (arr_1 [i_0] [i_6])));
                            arr_32 [i_0] [13] [18] [16] [i_7] = (((arr_11 [i_1 + 1] [i_1 + 1] [i_3 + 1] [i_1 + 1]) & ((0 ? 1125899906834432 : 28015))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_24 = ((((((arr_34 [i_0] [i_1] [1] [i_6] [i_6] [2]) >= (arr_4 [i_1])))) >= (arr_31 [i_1 - 1] [i_3 + 2] [i_3 + 2] [i_1 - 1])));
                            arr_36 [i_0] [i_3] [i_6] &= (((arr_19 [i_1 - 1] [16]) < (arr_35 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_3 + 3])));
                            arr_37 [i_0] [i_1 + 1] [i_0] [15] [i_6] [i_8] = (((arr_31 [i_0] [i_0] [i_6] [i_8]) % (((arr_30 [12]) & (arr_15 [i_3 + 1] [i_3 + 1])))));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_25 = (((arr_8 [i_1 - 1] [i_3 - 1] [i_3 + 2]) ? (arr_8 [i_1 + 1] [i_3] [i_3 + 3]) : (arr_8 [i_1 - 1] [i_3 - 1] [i_3 - 1])));
                            var_26 = (min(var_26, ((((((16384 % (arr_38 [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? ((-(arr_31 [14] [i_3] [i_3] [i_9]))) : (arr_13 [i_1 - 1] [i_3] [i_3 - 1] [i_9]))))));
                        }
                    }
                    arr_42 [3] [i_1] [3] [i_3] = ((!(16384 > 1428386147)));
                    arr_43 [i_0] [5] [i_0] = (((arr_13 [i_0] [1] [i_1 - 1] [i_0]) < (arr_34 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_3 + 3])));
                }
                var_27 = ((+((((arr_25 [i_0] [i_0] [i_1 + 1] [i_1]) ? (arr_12 [15] [15] [i_1] [i_1]) : (arr_2 [3] [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
