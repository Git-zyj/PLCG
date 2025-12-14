/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_14 -= ((arr_12 [0] [i_0 - 1] [i_0] [i_0 - 2] [i_2] [i_4 - 2] [i_4 - 2]) ? 2255 : (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]));
                            arr_14 [i_0] [i_1] [6] [6] [12] [1] [19] = (((-32767 - 1) / -2255));
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_18 [1] [i_1] [i_0] [i_1] [i_0] = ((2255 ? (arr_17 [i_0 - 3]) : (arr_16 [i_3] [i_1])));
                            arr_19 [i_1] = ((var_4 && (arr_17 [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_15 = (var_10 * (arr_12 [i_0] [3] [i_0] [8] [i_0 - 3] [7] [18]));
                            arr_23 [i_0] [i_0] [i_6] [i_3] [i_6] &= (((199452903 / 11754751865375235703) ? var_11 : 0));
                        }

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_16 &= ((-var_7 - (arr_13 [i_1] [i_3] [i_1] [i_1] [i_1])));
                            var_17 = (((arr_25 [i_0 - 3] [i_1] [i_2]) ? (arr_25 [11] [i_1] [i_1]) : (arr_25 [i_0 + 1] [i_1] [i_7])));
                        }
                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            var_18 &= (arr_10 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 1]);
                            arr_30 [i_0] [i_1] = (arr_13 [i_0] [i_1] [i_0 - 2] [i_8 - 2] [i_8]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_19 = (((((15056880541706754544 == (((arr_16 [i_0] [i_1]) ? -2243 : 0))))) ^ 199452879));
                            var_20 *= ((6666179341006318505 ? ((-(var_6 - var_8))) : (max(1059515593179926846, (max(var_1, var_4))))));
                            var_21 = (max(var_21, (((arr_15 [0] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 + 1]) + (arr_15 [i_0] [i_0 - 3] [i_0] [i_0] [i_0 + 1])))));
                        }
                        arr_35 [i_9] [i_2] [i_1] [i_1] [i_0] = (((arr_13 [i_0 + 1] [i_1] [i_0 - 3] [i_0 - 1] [i_0]) ? var_13 : (arr_6 [i_0] [i_0] [i_0 - 3] [i_2])));
                        arr_36 [i_1] = (((!(arr_10 [1] [15] [15] [i_0 + 1]))) ? (max(18283127470294479902, (arr_25 [i_0 - 1] [8] [i_0 - 1]))) : (((arr_7 [9] [i_1] [i_1] [i_9]) ? (max(var_6, var_13)) : ((var_3 ? 4955 : var_2)))));
                        arr_37 [i_1] [i_2] [i_1] = var_7;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_22 += (((var_12 ? var_7 : var_9)));
                        arr_40 [i_0] [18] [i_1] [i_11] = (var_8 ? (arr_32 [i_0 + 1]) : (arr_34 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_43 [i_1] = -var_7;
                        arr_44 [4] [4] [4] [12] &= 14668511386364691852;
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        arr_49 [i_1] [i_13] = ((1803 != (18446744073709551606 % 8174346530797076549)));
                        arr_50 [i_0 - 3] [i_1] [i_2] [i_1] = (16594732104844203565 ? var_6 : (arr_46 [i_0 - 2] [i_0 - 2]));
                    }

                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_23 ^= ((((-(arr_33 [i_1] [i_1] [i_1] [i_0 - 1] [i_1]))) == ((~(arr_33 [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] [i_14])))));
                        arr_55 [2] [i_1] [i_2] [i_2] [i_14] = (((arr_53 [i_0 - 3] [i_0 - 3]) ? (((-1 & (arr_41 [3] [4] [i_1] [i_2] [i_14])))) : 1012933680079087848));
                        var_24 = (max((arr_28 [i_14] [15]), (arr_24 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [13] [4])));
                    }
                }
            }
        }
    }
    var_25 = (min((max(var_5, var_11)), var_1));
    #pragma endscop
}
