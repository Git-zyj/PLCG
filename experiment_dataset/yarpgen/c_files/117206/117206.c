/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-(((var_10 % 3) ? (var_3 == var_12) : var_15)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((!(((-(arr_6 [i_0] [i_1] [i_0 - 2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max((~var_17), (arr_14 [i_3] [i_0] [i_1] [16] [i_0 - 1]))))));
                                var_21 = (min((arr_8 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1] [i_4] [i_0]), ((~(arr_0 [i_0] [13])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 = -18446744073709551612;
                        var_23 = (arr_4 [i_0 - 3]);
                    }

                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        var_24 = (min(var_24, var_8));
                        var_25 = (max(-var_15, ((var_8 ? (arr_17 [i_0] [i_0] [10] [i_0] [i_2]) : (arr_17 [i_6] [i_6 + 2] [0] [i_0] [i_6])))));
                        var_26 |= (max((((arr_10 [i_1] [i_2] [i_6]) == ((var_12 - (arr_9 [11]))))), (((((var_7 & (arr_12 [i_1] [i_2])))) && ((((arr_14 [i_0] [14] [i_1] [i_6] [i_6]) ^ (arr_7 [i_0] [i_0 + 3] [i_1] [i_0]))))))));
                        var_27 = (((arr_6 [i_0 + 3] [i_0] [16]) & (~var_4)));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_28 = (arr_6 [i_0 - 3] [i_0] [i_8 - 1]);
                            var_29 = ((!((max((arr_14 [i_8 + 1] [i_8 + 1] [i_0] [i_8 - 1] [i_0 + 3]), (arr_16 [i_8 + 1] [i_8] [13] [i_8 - 1] [i_0 + 3]))))));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_30 = (min(var_30, (((((-(((arr_22 [i_0] [i_0 + 1] [i_1] [i_2] [i_7] [i_9]) & 19)))) - (((var_16 & (max(var_16, var_8))))))))));
                            var_31 = -28693;
                            var_32 = (((arr_23 [i_0] [i_2] [i_7] [i_9]) ? 51537 : (((((min(var_1, -15229))) <= (var_10 | var_4))))));
                            var_33 = (!-var_5);
                            var_34 -= ((var_1 && (((~((((arr_25 [i_0] [12] [i_2] [i_7] [3]) > var_14))))))));
                        }
                        var_35 = ((!((((arr_2 [i_0 - 3]) | var_7)))));
                        var_36 = (max(var_36, (0 + 130816)));
                    }
                }
            }
        }
    }
    var_37 = (min(var_37, ((min((!74), var_10)))));
    #pragma endscop
}
