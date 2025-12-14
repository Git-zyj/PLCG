/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_2 [1])));
        var_19 = (min(var_19, (((var_15 ? var_9 : (((((((arr_2 [i_0]) || (arr_1 [4])))) | -80))))))));
        var_20 = (min(var_20, (224 & 10741)));
        var_21 = ((var_3 ? ((+(((arr_2 [i_0]) + var_12)))) : (((min((arr_0 [i_0] [i_0]), var_4))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (min(var_22, ((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))))));
        arr_6 [i_1] [i_1] = 65535;
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((((!0) >> (min(((((arr_3 [i_2 + 1]) == (arr_0 [i_2] [i_2])))), (((arr_4 [i_2] [16]) ^ var_2)))))))));
        var_24 = (min(var_24, (~24297)));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_25 -= ((-(arr_13 [i_3 - 2])));
                        var_26 = ((1968967301 >> (85 - 60)));
                    }
                }
            }
        }
        var_27 = (min(var_27, (((~((159 ? (arr_19 [i_3] [i_3]) : var_14)))))));
        var_28 = (min(var_28, var_6));
        var_29 = (max(var_29, (((1 ? (-127 - 1) : 18446744073709551615)))));
    }
    var_30 = (max((((var_11 + var_5) ? -1741492544 : var_11)), var_11));
    #pragma endscop
}
