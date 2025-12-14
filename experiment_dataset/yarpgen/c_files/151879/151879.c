/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_19 = (arr_4 [i_0] [i_0]);

            /* vectorizable */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_20 = (max(var_20, ((65521 >> (arr_1 [i_2 + 1])))));
                var_21 = (min(var_21, (((1470297282 == (arr_7 [i_0] [i_2 + 2] [i_0]))))));
            }
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_22 = (min(var_8, 0));
                var_23 = (((19 & (var_5 >= var_10))));
                var_24 = (((((arr_10 [i_0] [i_1]) < var_13)) ? ((((((arr_10 [13] [i_1]) * 0))) ? (arr_11 [i_3 + 1] [i_3 - 1]) : var_5)) : ((((arr_7 [i_0] [i_3 - 1] [i_3 + 2]) ? var_5 : var_16)))));
                arr_12 [i_1] [i_1] [i_0] = ((2 % (max(72057594033733632, 8))));
            }
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            arr_17 [i_0] = var_12;
            var_25 = ((0 ? 15110 : 193));
            var_26 -= (((arr_13 [i_4 + 2] [i_4 - 1]) ? (arr_13 [i_4 + 2] [i_4 - 2]) : var_6));
        }
        var_27 = (min(var_27, 19));
        arr_18 [i_0] &= (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_28 = (((var_5 != 15110) << (193 - 185)));
        var_29 = (arr_22 [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_30 = (((arr_20 [i_5 - 1]) - 50425));
            var_31 = (~255);
            var_32 = var_6;
        }
    }
    var_33 |= var_5;
    var_34 = 1;
    #pragma endscop
}
