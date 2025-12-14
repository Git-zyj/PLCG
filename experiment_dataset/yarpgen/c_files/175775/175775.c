/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_6 % 11288);
    var_17 -= (((0 > -24) ? var_3 : var_13));
    var_18 = ((!(-9223372036854775807 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = min(32256, 59605);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 += (min(0, (min((arr_2 [i_3]), ((1 ? 6609238228660224914 : 696858705))))));
                                arr_13 [i_3] [i_3 + 2] [i_3] [i_3] = ((~(arr_1 [i_0 - 1] [i_0 - 1])));
                            }
                        }
                    }
                }
                arr_14 [i_1] |= ((var_12 ? var_14 : ((((arr_11 [1] [i_1] [i_1 + 2] [i_0] [4] [i_0] [i_0]) ? 1 : -239218507)))));

                /* vectorizable */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    arr_17 [i_5] [i_1] [i_0 + 2] = ((-9223372036854775807 | (arr_0 [i_5 + 3])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_24 [i_0 - 1] [20] [i_0] [i_0 + 1] [i_7] = 1;
                                var_21 = (min(var_21, (((((-118 != (arr_9 [i_5] [i_1] [i_5] [i_6]))))))));
                                arr_25 [i_7] [i_7] [i_5] [i_7 + 1] = (140737488355327 | (arr_3 [14] [i_1 + 2]));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] |= (~14);
                    arr_30 [i_8] [11] |= (((((((46716 ? 1 : 1)) * (65513 >= -13582)))) ? (min((min(var_5, (arr_10 [i_0 + 1] [i_0 + 1] [i_8] [i_8] [i_0 + 2]))), (min((arr_15 [i_8] [i_8] [6] [i_0]), var_7)))) : ((min(32256, -696858706)))));
                    arr_31 [i_0] [i_0] [3] [i_0] = -696858706;
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((!(((((min(696858706, (arr_18 [i_10] [i_9] [i_1] [i_0])))) ? (min(7569860618277871254, 1)) : (~255)))))))));
                                arr_38 [i_10] [i_1] [i_10] [i_9 + 1] [i_1] [i_0] = 7569860618277871251;
                                var_23 = (-75 ? 6609238228660224914 : 18820);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = 696858679;
    #pragma endscop
}
