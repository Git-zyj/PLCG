/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_9, var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (arr_2 [i_0] [i_0]);
            arr_6 [i_0] = ((var_4 * (arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [8] [8] |= var_2;
            var_13 = (max(var_13, 2950920709996366430));
        }
        arr_10 [i_0] = var_9;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_14 ^= 6584096927579075269;

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_15 += (min((((arr_2 [i_3] [i_4]) | (arr_2 [i_4] [i_4]))), (max(((var_3 ? 2147483647 : var_0)), (arr_1 [i_4])))));
            var_16 = (max(var_16, (((+(min((arr_7 [i_3] [i_3] [i_3]), var_5)))))));
            arr_16 [i_4] [i_3] = (((((!(arr_15 [i_4] [i_3])))) / ((var_0 ? 2051797143 : (arr_15 [i_3] [i_4])))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    arr_25 [i_6] [i_6] [i_6] [i_6] = (min(((((arr_19 [i_7 + 1] [i_6] [1] [1]) ? (((arr_8 [i_6]) ? (arr_23 [i_6]) : -6584096927579075257)) : (arr_7 [i_5] [i_6] [i_7 + 1])))), ((max((arr_24 [i_3] [i_3] [i_3]), 6584096927579075263)))));
                    arr_26 [i_6] [i_7] = ((8 ? (arr_19 [i_7 + 1] [i_6] [i_6] [i_7 + 1]) : (arr_19 [i_7 + 1] [i_6] [i_6] [i_7 + 1])));
                    var_17 = (max(var_17, ((max((((arr_21 [i_3] [i_5] [i_5] [i_5]) ? (arr_22 [i_7] [i_5] [i_5] [8] [i_7 - 2] [i_7]) : (arr_22 [i_7] [i_7] [i_6] [i_7] [i_7 - 2] [i_7]))), (arr_22 [i_7] [i_7] [i_3] [i_7] [i_7 - 2] [i_3]))))));
                    arr_27 [i_3] [i_3] [i_3] [i_6] [i_6] = (arr_17 [i_7] [i_6] [i_5]);
                }
                arr_28 [i_3] [i_6] [i_6] = (arr_12 [i_3] [i_6]);

                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_31 [i_8] [i_6] [i_6] [i_3] = (((arr_7 [i_8] [i_5] [i_3]) ? (arr_0 [i_5] [i_3]) : (arr_7 [i_6] [i_5] [i_6])));
                    arr_32 [i_6] = (((arr_0 [i_8] [i_6]) ? 2950920709996366430 : (arr_0 [i_3] [12])));
                    var_18 = ((2565841985 ? (arr_24 [i_3] [i_3] [i_3]) : (arr_24 [i_8] [i_6] [i_5])));
                }
                var_19 = -1;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_37 [i_5] &= (((arr_15 [i_3] [i_5]) ? var_1 : 59));
                arr_38 [i_3] [i_5] [i_3] = ((-(((arr_2 [i_3] [i_5]) ? (arr_35 [i_3] [i_5] [i_9] [i_9]) : -6584096927579075267))));
            }
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                arr_42 [i_10] = ((((((var_0 + (arr_20 [i_10]))))) ? (min(((min(32749, (arr_8 [i_10])))), (arr_14 [i_10 + 2] [i_10 + 2] [i_10 + 2]))) : ((max(-32749, 249)))));
                var_20 = (min(var_20, (((195 ? ((max(var_2, (arr_35 [i_3] [i_5] [i_10] [5])))) : ((((max(var_9, (arr_18 [i_3] [i_10]))) != var_0))))))));
                var_21 = (max(var_21, ((min(((max((-2051797171 ^ var_0), (arr_35 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])))), (((1 + -6584096927579075290) ^ (((~(arr_2 [i_5] [i_5])))))))))));
                var_22 -= (((((var_2 ? (arr_30 [i_5] [i_10] [i_10 - 1] [i_10 + 1] [i_3] [i_5]) : (arr_30 [i_5] [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_5])))) ? (min((arr_18 [1] [i_5]), (arr_13 [i_10] [i_10 + 1]))) : -326849491));
            }
            var_23 = (max(var_23, ((min(var_3, (arr_22 [i_5] [i_3] [i_3] [i_3] [i_5] [i_5]))))));
        }
        arr_43 [i_3] = var_10;
        var_24 += ((((arr_4 [i_3] [i_3] [i_3]) >= (max(1, (arr_14 [i_3] [i_3] [i_3]))))) ? var_6 : ((-29851 ? 2336 : (min(-2147483647, (arr_20 [8]))))));
    }
    #pragma endscop
}
