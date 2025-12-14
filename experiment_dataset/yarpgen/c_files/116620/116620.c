/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_2;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 *= (((-169639944 * var_1) ? ((var_3 & (arr_0 [i_0]))) : 319369446495637357));
        var_13 = (min(var_13, ((((var_7 % var_0) || ((((arr_0 [i_0 - 2]) ? 3216 : var_3))))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_14 = (max(var_14, (-7389 / -9037)));
        var_15 = (max(var_15, ((min(var_10, (((min(113, 74)))))))));
        var_16 = (max(var_16, (((-(~3526023497))))));
        var_17 -= 1995106401;
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_18 = (min(var_18, (((!((max((arr_5 [i_2 + 1]), var_2))))))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((~-23978) - (min(var_10, (arr_4 [i_2 + 1] [i_2 - 2]))))))));
                        var_20 |= (arr_5 [i_2 - 3]);
                    }
                }
            }
        }
        var_21 = (max(var_21, ((((((-34 ? (arr_12 [13] [13] [13]) : (var_0 & 0)))) ? ((~(min((arr_6 [i_2]), 18127374627213914259)))) : var_3)))));
        var_22 *= (((+(((arr_16 [i_2]) & var_7)))));
    }
    var_23 += var_0;
    var_24 -= var_8;
    #pragma endscop
}
