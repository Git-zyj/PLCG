/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((-(min(var_12, var_8))));
    var_16 = (((-32767 - 1) & (1 + var_10)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, (((((((((arr_1 [i_0]) == 1)) ? (arr_0 [i_0 - 2]) : (((arr_0 [i_0]) ? 0 : 0))))) ? -2876595035784463843 : (((((arr_0 [i_0]) > 18446744073709551615)))))))));
        var_18 = (min(var_18, ((((arr_0 [i_0]) ^ (((((1 ? 118 : var_4))) ? (arr_1 [i_0 - 2]) : ((10914 ? (arr_1 [i_0]) : (arr_1 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] = 67;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_10 [i_3] [i_3] = (arr_9 [i_1] [i_1] [i_3]);
                arr_11 [i_1] [5] [i_2] [i_3] = 1423864818;
                var_19 = -221;
                arr_12 [i_3] [1] [i_3] = var_3;
                var_20 = (arr_0 [i_2 + 1]);
            }
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                var_21 = (min(var_21, var_0));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_22 = (min(var_22, 1));
                    var_23 = ((-(arr_0 [i_2 + 1])));
                    arr_17 [i_1] [i_2] [i_2 + 1] [3] [i_2] = var_11;
                    var_24 = var_4;
                }
            }
            arr_18 [i_1] [i_1] [i_1] = ((-(arr_15 [i_2 - 1] [i_2 + 2] [i_2 + 1] [8] [i_2] [i_2])));
        }

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_21 [i_1] [i_1] [i_6] = (arr_14 [i_1] [i_6] [i_6]);
            arr_22 [i_6] = (min(0, 18446744073709551615));
            arr_23 [i_6] [i_1] [i_6] = ((-(((min(var_3, var_14))))));
        }
        var_25 = 1;
        arr_24 [9] = (((arr_7 [i_1] [9]) ? (((-(arr_0 [i_1])))) : (((arr_15 [12] [i_1] [16] [13] [i_1] [i_1]) | ((-1 ? var_1 : var_12))))));
    }
    var_26 ^= (((-4557475109771850394 + 9223372036854775807) >> ((((min(var_13, var_12))) - 112))));
    #pragma endscop
}
