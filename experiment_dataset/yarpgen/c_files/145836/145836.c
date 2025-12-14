/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    arr_8 [i_0] [i_3] [i_2] [i_2] |= ((var_1 >= (arr_2 [i_3 + 1] [i_0] [i_0])));
                    arr_9 [i_3] [i_1] [i_0] = var_4;
                }
                arr_10 [i_0] [i_1] [i_2] = (((arr_0 [i_0 + 1]) > var_4));
            }
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                var_19 *= (arr_4 [i_0] [i_1 - 1]);
                var_20 = 1632328836;
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_21 = ((1812741104 ? var_17 : (var_15 - -1812741104)));
                var_22 = (((-747240662074947027 % 4294967295) ? var_8 : (arr_13 [i_0 + 1] [i_1 + 1])));
                arr_16 [i_1] = (arr_3 [i_1 - 1] [i_5]);
                var_23 = (((var_4 ? var_14 : (arr_5 [i_0 + 2]))) - ((var_6 & (arr_6 [i_1]))));
            }
            var_24 -= (((arr_12 [6] [i_0 - 1] [6]) != (arr_14 [i_1 + 1])));
        }
        var_25 *= ((68 * (((-2150322422446672641 * var_1) / (min(var_3, var_16))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_26 = (((arr_18 [i_6]) && ((!(arr_18 [i_6])))));
        var_27 = ((~(min((arr_18 [i_6]), (arr_18 [i_6])))));
        var_28 = var_11;
    }
    var_29 = var_18;
    var_30 *= (((((var_9 != 1) ? var_6 : var_11)) | (max((var_10 || var_18), (~var_2)))));
    #pragma endscop
}
