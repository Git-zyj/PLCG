/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((((var_1 ? var_4 : var_9))) ? var_5 : var_7)) + var_12);
    var_15 += (((var_0 / ((var_7 ? var_10 : var_8)))));
    var_16 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = var_8;
        arr_2 [i_0] = var_8;
        var_18 -= var_2;
        var_19 = (max(var_19, -124));
        var_20 = ((arr_0 [8]) | var_6);
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2 - 3] [i_1 - 4] = (arr_9 [i_1 + 1] [i_2 + 1]);
            var_21 -= (((-9223372036854775807 - 1) < (arr_7 [i_2 - 2] [i_2 - 3] [i_1 + 1])));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_13 [7] [i_3] [i_3] = ((3761242799682403543 / (((((var_6 / (arr_9 [i_1] [i_2 - 1])))) ? var_9 : ((var_6 / (arr_11 [i_1] [i_3])))))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_22 = (((-((var_12 + (arr_6 [i_1 - 1] [0]))))));
                    var_23 += (1567581725 || 2727385572);
                    arr_18 [i_4] [i_3] [4] = var_5;
                    var_24 = (var_11 * (arr_4 [i_1 - 2]));
                    var_25 += ((min(710608109, 35184372023296)));
                }
            }
            arr_19 [i_1] [i_2] = var_2;
            var_26 = (((arr_14 [i_1 - 3] [i_2 - 3] [i_1 - 3] [8]) ? (((!(arr_16 [i_2] [4] [i_1] [1])))) : (((!(arr_6 [i_2 - 3] [i_1]))))));
        }
        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_27 = var_7;
            arr_23 [i_1 - 2] [i_5 + 2] [i_5] = ((+(min((arr_11 [i_5] [i_5]), (arr_11 [i_5] [i_5])))));
        }
        var_28 = (((((((max(var_13, var_2))) ? ((min(var_13, (arr_4 [i_1 - 3])))) : ((var_13 ? (arr_7 [i_1 - 1] [8] [i_1]) : var_8))))) ? (((((((arr_3 [i_1]) / var_5))) && var_8))) : var_9));
    }
    var_29 = ((var_3 ? var_0 : (var_10 * var_8)));
    #pragma endscop
}
