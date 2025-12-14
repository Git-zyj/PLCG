/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((-83 ? 65535 : 1242815671156463975));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [7] = ((var_12 ? (var_9 >= 50254) : (arr_1 [i_0])));
        var_15 -= (((min(var_10, var_9))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_6 [6] [i_1 + 1] [i_0] = (min(((((80 ? 1 : var_8)))), (27558 + 516387599)));
            var_16 = (min((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_12)), ((min((arr_2 [i_0]), var_12)))));
            arr_7 [7] [7] [i_1] = (arr_5 [i_1 + 2] [i_1 + 2]);
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                var_17 = (((!((min((arr_8 [i_3]), var_3))))) ? 3417873944233473373 : (3 < 15296));
                var_18 = ((((((var_8 ? 15282 : var_7)))) ? (((min(-126, 34253)))) : (max((var_9 % 1), var_6))));
                var_19 ^= var_12;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_5] [i_3] = ((!(((arr_15 [i_0] [9] [i_0] [i_0] [i_0] [i_0]) && (580868568277539954 + var_1)))));
                            var_20 += 10586;
                            var_21 = (min(var_21, ((max(var_13, (((((-(arr_14 [i_5] [i_4] [i_0] [i_2 - 3] [i_0] [i_0]))) - var_3))))))));
                        }
                    }
                }
            }
            var_22 += ((~(arr_11 [i_0] [i_2] [i_0])));
            var_23 = (!var_3);
        }
        var_24 = (((((((arr_16 [i_0] [i_0] [9] [i_0]) / var_1)))) ? var_8 : -1));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] &= (((-((19 ? 4255462524 : (arr_9 [i_6] [i_6]))))));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 12;i_9 += 1)
                {
                    {
                        var_25 = 25;
                        arr_31 [i_6] [1] [i_8] [i_9] = (!-1);
                    }
                }
            }
        }
        arr_32 [i_6] [i_6] = ((((~(var_10 & var_7))) | 7541));
        var_26 = (max(var_26, (var_4 == var_12)));
    }
    var_27 = var_3;
    var_28 += var_5;
    #pragma endscop
}
