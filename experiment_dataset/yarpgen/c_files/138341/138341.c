/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(var_15, var_4)) >= -5565604531819369556)))) > (max((~var_11), var_0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [23] |= ((23259 ? (arr_1 [i_0]) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] = ((((-5565604531819369570 ? var_13 : var_12))) && var_7);
            var_17 += 18446744073709551610;
            var_18 = 65529;
            var_19 = -2076337054;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_20 ^= ((!(arr_8 [i_0] [i_0] [0] [i_0])));
                var_21 *= (arr_9 [i_0] [i_0]);
                var_22 = (arr_5 [i_1]);
                var_23 = (-1362134159 & -3858213824124821698);
            }
        }
        var_24 ^= (~(arr_9 [i_0] [i_0]));
        arr_10 [i_0] = (((!var_2) || (arr_2 [i_0])));
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((arr_13 [i_3] [i_3]) ? 5565604531819369542 : (!1)));
        var_25 = (max(var_25, (arr_8 [i_3] [i_3] [16] [i_3])));
        var_26 += (((-((-7326619659447894499 ? 5565604531819369542 : 1953221551)))));
        var_27 = min((max(-518493891, var_0)), (((19621 * (arr_1 [i_3])))));
        arr_15 [i_3] = (arr_9 [0] [i_3]);
    }
    var_28 = (((var_4 - 4294967295) ? var_3 : var_5));
    #pragma endscop
}
