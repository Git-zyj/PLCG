/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((((((arr_1 [i_0] [i_0]) ? (arr_3 [9] [i_1 - 1]) : var_3))) ? 44325 : ((max(-23, 63)))))) ? (max((arr_1 [i_1] [i_0]), (((arr_1 [i_0 + 1] [i_1 - 1]) ? 23 : -56)))) : (arr_3 [i_0] [16]))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 -= arr_4 [20] [i_3] [1] [i_0];
                                arr_14 [8] = ((!(((-23 ? (arr_2 [i_1 - 1] [i_2]) : -63)))));
                            }
                        }
                    }
                    var_13 = (max(var_13, (arr_4 [i_0 + 1] [i_0 + 1] [i_2] [4])));

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        var_14 = -49;
                        var_15 *= ((1073741823 ? -63 : -59));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_18 [i_6] [i_5] [i_2] [i_1] [i_0 - 1]);
                            arr_22 [i_0 - 3] [19] [19] [19] [i_6] [i_6] [15] &= ((!(((var_8 ? (arr_5 [17] [i_0 - 3] [i_0 - 3]) : var_6)))));
                        }
                        arr_23 [i_0] [i_0] [19] [19] [17] [i_5] = (arr_3 [i_0] [i_0]);
                        arr_24 [i_5] [i_5] [1] = (arr_15 [1] [7] [i_1] [i_0]);
                    }
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        var_16 = -63;
                        arr_27 [7] [i_1] [13] [5] = (((arr_17 [i_0 + 1]) ? (arr_8 [i_2 - 1]) : var_9));
                        arr_28 [i_0] [i_1] [i_7] = var_9;
                        arr_29 [i_0] [i_0] [20] = (~var_2);
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_8] = var_0;

                        for (int i_9 = 4; i_9 < 20;i_9 += 1)
                        {
                            var_17 ^= (((arr_35 [i_9 - 1]) ? (arr_35 [i_8 - 1]) : (arr_35 [i_9 - 4])));
                            arr_36 [i_2] [10] = ((!(var_0 == var_9)));
                            arr_37 [1] [i_2] = (arr_33 [i_0] [1] [i_2] [i_2] [i_8] [i_9]);
                            arr_38 [i_0] [11] [11] = (((arr_10 [i_2 - 3] [i_9 - 3] [i_1 - 1]) ? (arr_34 [i_2 - 3] [i_1 - 1]) : ((((!(arr_10 [i_0] [i_0 - 2] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((var_8 ? (-23 && -9223372036854775806) : var_6))) && ((min(var_1, var_4)))));
    var_19 = (max(var_19, (((var_4 | ((var_10 ? (max(var_4, var_8)) : var_6)))))));
    #pragma endscop
}
