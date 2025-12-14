/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((-((1 ? (~var_3) : 4294967267))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((min(var_5, var_4)) * var_7))) > 1));
        var_13 = (i_0 % 2 == 0) ? (((((arr_2 [i_0]) + (arr_2 [i_0]))))) : (((((arr_2 [i_0]) - (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((~((0 ? 0 : (min(0, -1981347964))))));
        arr_5 [i_0] [i_0] = 0;
        var_14 = (arr_0 [i_0 + 1] [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = arr_6 [1] [3];

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, (~1)));
            var_16 = (max(var_16, (((-1 ? (arr_1 [16] [i_2]) : (arr_1 [14] [4]))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_17 [i_2] [i_3] = 1;
                var_17 = (min(var_17, var_4));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                arr_22 [i_1] = (((arr_14 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1]) & var_8));
                arr_23 [0] [i_4] &= (((arr_19 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 2]) & (arr_9 [i_4 + 1] [i_4 + 2] [i_4 + 1])));
                var_18 -= (((((arr_9 [0] [i_2] [i_4]) ? var_8 : var_0)) < (arr_16 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_2])));
                var_19 -= (((arr_20 [i_2] [i_2]) / 18446744073709551615));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_20 -= (arr_0 [i_2] [i_1]);
                var_21 ^= 4294967267;
            }
            arr_26 [i_2] [6] = (((arr_11 [i_1] [9] [i_1]) & var_7));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_22 = ((var_9 % (((var_9 <= ((81 >> (((arr_12 [i_1] [i_6] [i_6]) - 32937)))))))));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_23 -= -15;
                var_24 += ((-var_2 - ((16 >> (1352623543 - 1352623517)))));
                var_25 = (min(var_25, ((((arr_9 [i_7] [i_6] [i_7]) - 0)))));
            }
            var_26 -= (~var_9);
            arr_33 [i_6] = ((~((~(arr_13 [1])))));
        }
        var_27 -= (arr_6 [i_1] [i_1]);
    }
    #pragma endscop
}
