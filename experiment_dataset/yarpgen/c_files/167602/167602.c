/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((((var_5 ? var_4 : var_0))), (((var_11 & 1) ? (140 | 109) : (var_7 ^ var_9))));
    var_15 = ((((~(~-12249))) ^ (min(((var_8 ? var_13 : var_13)), (~var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((!var_4) > var_2));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 &= (max(var_13, (((1640046922695366107 || (var_11 && var_0))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_17 = ((((var_4 != (arr_5 [18] [i_2] [0]))) ? ((((!var_11) ? (((arr_11 [0] [i_1] [i_2] [i_3] [i_2]) ? 12248 : (arr_9 [i_0] [i_1 + 3]))) : ((((arr_1 [12]) < var_11)))))) : (min((arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1]), var_11))));
                            var_18 = (min(((98 ? 1 : (arr_3 [20] [i_1 + 2]))), ((((arr_3 [i_1 + 2] [i_1 + 2]) != var_9)))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_19 = (max((max(((var_13 ? (arr_4 [i_2]) : 146)), ((var_3 ? var_11 : 231)))), -var_5));
                            var_20 = ((~(246 <= var_0)));
                            var_21 = (min((((arr_4 [i_2]) ? (max(var_0, var_0)) : var_6)), ((var_0 ? (var_2 <= var_12) : var_8))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((var_7 ? ((((arr_3 [i_1 - 2] [i_1 - 2]) <= (arr_3 [i_1 - 2] [i_1 - 2])))) : ((min(var_4, (min((arr_14 [i_1 - 2] [i_1 - 2] [i_1 - 2]), 177)))))));
                            arr_17 [i_6] [i_3] [i_0] [1] [i_1 + 2] [i_0] [1] = (((min((min(var_12, var_0)), (~7459592917119199692))) < 25));
                        }
                        var_23 -= ((((!(arr_9 [i_1 + 3] [i_1 + 2]))) ? var_12 : (((~(arr_9 [i_1 - 2] [i_1 - 2]))))));
                        var_24 = var_2;
                        var_25 = (min(((var_0 ? var_12 : (~var_11))), ((min((~var_9), var_11)))));
                    }
                    var_26 = (max(((min(((var_2 ? 0 : (arr_14 [i_0] [i_0] [i_0]))), ((max(var_13, var_6)))))), ((((min(var_0, var_11))) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_2 - 1] [i_1]) : (arr_15 [i_0] [i_1 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
