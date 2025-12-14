/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = (min(var_15, ((((var_12 - (arr_2 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_16 = ((var_11 ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1])));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, 6629));
                            arr_17 [i_5] [i_2] [i_3 - 1] [i_3 - 1] [i_2] [i_1] = var_13;
                            arr_18 [i_2] [i_2] [i_3] = (((arr_13 [i_3 - 1] [i_3 - 1] [i_5 - 1] [i_5] [i_3 - 1] [i_2] [i_4]) + (arr_13 [i_3 - 1] [i_2] [i_5 - 1] [i_4] [i_5] [i_3 - 1] [i_3])));
                        }
                    }
                }
            }
            var_18 |= (var_13 ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1]));
            arr_19 [10] |= 1660669953;
            arr_20 [0] [i_2] &= (((arr_6 [i_1] [i_2 - 1]) ? var_2 : (arr_6 [i_1] [i_2 - 1])));
        }
        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            var_19 -= var_6;
            arr_23 [i_6] [i_1] [i_1] = -var_8;
        }
        var_20 = ((-111388453062601714 ? (!1660669953) : (((-9223372036854775806 + 9223372036854775807) << (-111388453062601714 + 111388453062601757)))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_26 [i_7] = (0 % var_7);
        arr_27 [i_7] = var_12;
        arr_28 [i_7] [i_7] = (((arr_25 [i_7] [i_7]) * -6660));
        arr_29 [i_7] &= ((((!(arr_0 [i_7]))) ? (arr_1 [i_7]) : ((((arr_2 [i_7]) >> (((arr_1 [i_7]) - 238)))))));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] = (arr_30 [i_8]);
        arr_33 [i_8] = 1660669966;
        arr_34 [i_8] [i_8] = var_4;
        arr_35 [i_8] [i_8] = ((var_1 ? (arr_30 [i_8]) : (arr_31 [i_8])));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_21 |= ((var_5 ? (((arr_31 [i_9]) ? (arr_31 [i_9]) : (arr_31 [i_9]))) : var_5));

        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_22 = (min(var_22, ((((~var_5) ? ((((arr_37 [i_9]) && (arr_37 [i_9])))) : ((var_8 ? var_9 : (arr_30 [i_9]))))))));
            var_23 ^= (arr_31 [i_9]);
        }
        arr_43 [i_9] = ((arr_41 [i_9] [i_9]) / (arr_41 [i_9] [i_9]));
        arr_44 [i_9] = -var_2;
    }
    var_24 = (((((((var_5 ? 83 : -111388453062601738))))) / ((((144 ? var_13 : var_11)) | var_3))));
    var_25 = var_6;
    #pragma endscop
}
