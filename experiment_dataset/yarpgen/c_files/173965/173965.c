/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_14 = (arr_1 [i_0]);
        var_15 |= -2019267192;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = 2019267192;
        var_17 = -0;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    var_18 += ((1 || (arr_4 [i_4 + 1])));
                    var_19 = (min(var_19, ((((arr_6 [i_3 - 1] [i_4 - 2] [i_4]) * (arr_6 [i_3 + 3] [i_4 - 1] [i_4]))))));
                    var_20 = 0;
                    var_21 = 2275700124;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = 2275700104;
                            arr_20 [i_2] [i_2] [i_3] [i_3] [i_2] = ((25466 ? (arr_8 [i_6] [i_5] [i_3] [i_2]) : var_5));
                            arr_21 [i_2] [i_3] [i_3] = (arr_12 [i_3] [i_3] [i_3 - 1] [i_3 + 3] [i_3 - 2]);
                        }
                    }
                }
                var_22 = (!2275700103);
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_23 = (min(var_23, var_5));
                    arr_28 [i_1] [i_1] [i_1] [i_1] [i_7] [i_8] = 32;
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_24 = (min(var_24, (((!((!(arr_4 [i_1]))))))));
                    arr_31 [i_9] [i_9] [i_9] [i_1] = (((arr_22 [i_9] [i_7] [i_1] [i_1]) ? (((15897686161271298297 ? 2 : 2019267192))) : (((arr_13 [i_1] [i_9] [i_1] [i_2] [i_7] [i_9]) ? 7415 : 0))));
                    var_25 = 7;
                    arr_32 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = arr_10 [i_1] [i_9] [i_7] [i_9];
                }
                arr_33 [i_7] [i_7] [i_2] [i_1] = (((arr_24 [i_7]) % (arr_27 [i_1] [i_1] [i_2] [i_7])));
                arr_34 [i_2] = ((15897686161271298297 ? var_8 : (arr_27 [i_1] [i_1] [i_2] [i_7])));
                var_26 = (min(var_26, 24));
            }
            arr_35 [i_1] &= (((!18746) * 0));
            arr_36 [i_1] [i_1] = ((var_11 <= (arr_11 [i_1] [i_2] [i_2] [i_1])));
            arr_37 [i_1] [i_1] = var_4;
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_42 [i_10] [i_10] = 2292;
        var_27 = (((min(((22500 ? 6 : (arr_30 [i_10] [i_10] [i_10] [i_10]))), (((!(arr_12 [i_10] [i_10] [i_10] [i_10] [i_10])))))) == ((max((arr_14 [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_14 [i_10] [i_10] [i_10] [i_10] [i_10]))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_28 = ((65536 ? 632939588 : (9355 && var_2)));
                    arr_48 [i_11] [i_11] [i_11] [i_10] = ((arr_4 [i_10]) ? (arr_40 [i_11] [i_10]) : (((~(arr_39 [i_10] [i_10])))));
                }
            }
        }
        var_29 = (min(var_29, ((max((arr_4 [i_10]), (arr_40 [i_10] [i_10]))))));
    }
    #pragma endscop
}
