/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(var_5, ((max(var_17, var_15)))))) ? (min((-5768883785505842979 ^ var_8), (1 % var_14))) : var_14));
        arr_4 [i_0 - 1] = ((var_0 ? ((((var_7 ? var_15 : var_9)) / (max(var_7, var_6)))) : (min(141, (((var_7 + 9223372036854775807) << (var_12 - 12399)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] &= ((((max(var_10, (-37550021 / 6746)))) ? ((var_10 ? var_12 : (var_6 / var_13))) : (((max((var_13 != 225247660), var_8))))));
        var_18 = ((((min((max(38, var_4)), var_11))) >> (((((1023 > var_0) ? var_1 : (max(-7754552755116496538, var_3)))) + 7754552755116496563))));
        var_19 = ((var_10 ^ (min(var_6, (((23 >> (var_15 - 40248))))))));
        arr_10 [i_1] = var_4;

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_20 = ((((max((var_4 ^ var_15), ((var_15 ? (-127 - 1) : var_2))))) / var_9));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 = (max(var_21, var_3));
                var_22 = var_6;
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_17 [i_1] [i_1] [i_1] [i_4] = ((var_12 ? var_13 : var_8));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_23 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = (var_15 ? var_6 : var_17);
                            var_23 = (min(var_23, var_9));
                            var_24 = (min(var_24, ((((var_0 | var_9) ^ (var_0 / var_5))))));
                        }
                    }
                }
                var_25 = -1;
            }
            var_26 = ((((((var_2 < ((var_11 ? var_10 : var_1)))))) + var_13));
        }
    }
    var_27 = ((var_9 * (min((var_2 * var_13), var_1))));
    var_28 = (min(var_28, var_1));
    #pragma endscop
}
