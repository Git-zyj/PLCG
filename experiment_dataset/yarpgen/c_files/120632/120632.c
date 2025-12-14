/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((((var_13 ? 8623077372005158198 : var_2))) ? ((var_12 ? var_16 : var_9)) : ((1 ? var_16 : var_18)))));
    var_21 = (min(var_12, ((var_5 ? ((var_1 ? var_12 : 9823666701704393417)) : var_10))));
    var_22 = (min(var_22, ((((((max(var_1, 9823666701704393438)) == var_17)) ? (var_5 / var_15) : ((((var_5 - var_12) <= ((var_10 ? var_14 : var_1))))))))));
    var_23 = (min((41339 <= 0), ((var_0 ? 3 : (39 - var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_24 = (arr_4 [i_0] [i_1]);
                    var_25 += ((((max((arr_4 [i_2] [i_1 + 2]), (var_2 - -43)))) ? ((max((((arr_5 [i_2] [i_2]) | (arr_4 [i_2] [i_1]))), (arr_3 [i_0 - 2] [i_0 - 2] [i_2])))) : ((52 ? 30573 : (arr_2 [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_26 += ((!((max((arr_5 [i_3] [i_1 + 2]), (arr_5 [i_3] [i_2]))))));
                                var_27 += ((((var_9 ? (((arr_3 [i_1] [i_3 + 1] [i_2]) / 7820)) : (arr_7 [i_3] [i_3] [i_4])))) ^ (((arr_10 [i_1 - 3] [i_3 + 1] [i_1 - 3] [i_1] [i_0 - 3]) ? (arr_2 [i_1 - 2] [i_1] [i_0 + 1]) : 16388)));
                                arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_0] [i_4] [i_4] = 1;
                            }
                        }
                    }
                    var_28 = (arr_10 [i_2] [i_2] [i_1 - 3] [i_0 + 1] [i_0 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
