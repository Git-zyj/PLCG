/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = ((-(((!(arr_4 [i_2]))))));
                    var_12 = (min(var_2, ((((arr_0 [i_0 - 1] [i_2]) ^ (arr_0 [i_0 + 1] [i_2]))))));
                }
            }
        }
    }
    var_13 = var_6;
    var_14 = (~105);
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_18 [i_3] [7] [i_4] [i_3] = (max((((var_7 <= ((-(-127 - 1)))))), 504));
                            var_16 = (min(var_16, ((max(125, ((((((arr_5 [5] [i_4] [5]) ? 1555953260 : var_7))) % (max(var_8, (arr_14 [1] [i_4] [i_5] [i_6]))))))))));
                            var_17 = ((((!(((31542 ? 1736337633 : -2147483633))))) ? (((var_5 ? (-1 / -7969) : (arr_0 [i_3 + 1] [i_3 + 1])))) : -24220));
                        }
                    }
                }
                var_18 -= 33;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_19 = (((!(arr_11 [i_3 + 3]))));

                            for (int i_9 = 0; i_9 < 14;i_9 += 1)
                            {
                                var_20 = (min((max((-9223372036854775807 - 1), (min((arr_10 [i_3]), -297642404424932809)))), var_3));
                                var_21 = ((var_4 == (max((var_0 & 65535), -1))));
                            }
                            for (int i_10 = 1; i_10 < 10;i_10 += 1)
                            {
                                var_22 -= (arr_30 [i_3 + 3] [1] [i_3 + 1] [i_7 + 1] [i_10 + 2]);
                                var_23 = (max((~65504), 511));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 14;i_11 += 1)
                            {
                                var_24 = var_5;
                                arr_34 [10] [10] [i_7] [i_8] [10] |= 39582;
                            }
                            var_25 = var_9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        {

                            for (int i_14 = 0; i_14 < 14;i_14 += 1)
                            {
                                var_26 = -18446744073709551599;
                                var_27 = (max(var_27, ((((16383 || (arr_33 [i_3 + 2] [i_3 + 1] [i_14])))))));
                                arr_42 [i_3] [i_3] [i_13] [i_3] [i_14] [5] = 0;
                                arr_43 [i_3] [i_4] [i_4] [i_12] [i_13] [i_14] = (max(var_10, var_3));
                            }
                            for (int i_15 = 1; i_15 < 12;i_15 += 1)
                            {
                                var_28 = ((((arr_41 [i_3 + 3] [i_13 + 2] [i_13] [i_15 + 2] [i_15 + 1] [i_3] [i_15 + 1]) * (arr_41 [i_3 - 2] [i_13 + 2] [i_15] [i_15 + 2] [i_15 - 1] [i_3] [i_13 + 2]))) + ((((arr_41 [i_3 - 1] [i_13 + 4] [i_13 + 4] [i_15 + 2] [i_15 + 1] [i_3] [i_15 + 1]) != -47))));
                                var_29 = (((-var_0 ^ (arr_45 [i_3] [i_4] [i_3] [i_13 + 2] [i_15]))));
                            }
                            var_30 = (min(var_30, ((max((min(0, (arr_7 [i_3 + 3]))), 127)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
