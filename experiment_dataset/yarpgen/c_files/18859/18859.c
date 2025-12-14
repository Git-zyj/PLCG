/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 127;
    var_18 += (4397509640192 & 4294967271);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_0] [i_3] [i_3] [i_0] = -10012;
                            arr_11 [i_3] = (((((((!(arr_4 [i_0] [i_1] [11]))) ? (var_7 - 0) : 61))) && 11));
                            var_19 -= (min(((113 ? 18446744073709551603 : 1355183540)), ((min((arr_9 [i_1 - 2] [i_2 - 2] [i_2 + 3] [i_2 - 1]), (arr_9 [i_1 - 3] [i_2 - 2] [i_2 + 2] [i_2 - 2]))))));
                            var_20 = (((((var_13 ? (arr_7 [4] [i_1 - 3] [i_2 - 1] [i_2 - 2]) : var_15))) ? 1 : (((var_15 | 0) ^ var_2))));
                            arr_12 [i_3] [i_3] [i_3] [i_0] = -8404809523362910244;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {

                            for (int i_6 = 4; i_6 < 12;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_4] = 85;
                                arr_23 [i_4] [i_4] = (((((((-(arr_3 [i_5])))))) & (((arr_17 [6] [i_1] [1] [i_5 - 1] [i_6] [6]) ? -3803 : var_15))));
                            }
                            for (int i_7 = 4; i_7 < 12;i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_1 - 2] [i_4] = (((arr_3 [i_1]) ? (((221 | (arr_7 [4] [4] [4] [i_5])))) : 1));
                                arr_28 [i_7] = var_11;
                                var_21 = ((1 - 46) <= (((arr_9 [i_7] [i_4] [i_4] [i_7]) ? (arr_19 [i_1 - 1] [i_5 + 1]) : (31 || 62))));
                            }
                            for (int i_8 = 4; i_8 < 12;i_8 += 1) /* same iter space */
                            {
                                arr_33 [i_0] [i_4 + 3] [i_5] = (max(((min((arr_16 [i_5 - 1] [i_1 - 1] [i_4] [i_8 - 2] [i_5 + 4]), (arr_16 [i_5 + 4] [i_1 - 1] [i_1 - 1] [i_8 - 3] [4])))), (max(((2867576240 | (arr_2 [i_0]))), 32767))));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [12] [i_0] [1] = ((4023041705193051213 - var_11) | (-70 >= -8425697706850104778));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 13;i_9 += 1)
                            {
                                arr_37 [i_5] [i_5] [i_5 + 4] [i_5] [i_5] [i_5] [i_5] = ((var_10 ? var_8 : var_9));
                                var_22 = (max(var_22, (arr_3 [i_5 + 4])));
                            }
                            arr_38 [i_0] [i_0] = (((((var_2 != (arr_13 [i_5 - 2] [12] [i_1 - 1] [i_1])))) & ((max((arr_13 [i_5 - 1] [i_5 + 4] [i_1 - 1] [i_1]), 31)))));

                            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                            {
                                arr_43 [i_0] [i_0] [i_4] [10] [12] = var_5;
                                arr_44 [i_1 + 1] [i_1 + 1] [i_4 + 3] [i_5] &= ((-1 | (((((~(arr_4 [1] [i_1] [i_1])))) ? 3207145055046379824 : ((((arr_0 [i_4]) ? var_15 : -16)))))));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                            {
                                var_23 = (((arr_45 [i_0] [i_0] [i_0] [i_5] [i_11] [i_1] [6]) == 4));
                                var_24 ^= (((arr_4 [i_1 + 1] [i_4 + 3] [i_5 + 2]) + (arr_4 [i_1 - 1] [i_4 + 3] [i_5 + 1])));
                            }
                            arr_47 [i_0] [i_0] = arr_20 [i_0] [i_0] [i_0] [1] [i_0];
                            var_25 = (min(var_25, ((1 ? (arr_8 [i_1] [i_1 - 1] [i_4 + 4] [i_5 - 1]) : (((min(18446744073709551598, var_4))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
