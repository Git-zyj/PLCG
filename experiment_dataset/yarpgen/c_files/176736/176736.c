/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 ? (!var_2) : (max((!var_4), var_13))));
    var_16 = (min(var_14, (min((150 / var_6), var_7))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_1 [i_0] [i_0]) << (((16039648393639687620 && (((var_10 ? 14323390870562469640 : var_8)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = var_12;
                                var_18 = (min(((~(((arr_7 [i_2] [i_1] [i_2] [i_0]) / var_7)))), ((var_7 | (min((arr_0 [i_0] [i_2]), -2121190321))))));
                                var_19 &= (~-4123353203147081961);
                                var_20 = (((!(((-(arr_4 [i_0])))))));
                                var_21 = (var_6 ? var_6 : (min((((arr_10 [i_0] [i_1] [i_4] [i_4]) ? 10742 : (arr_8 [i_0] [i_1] [10] [i_3]))), (~var_12))));
                            }
                        }
                    }
                    var_22 = (!((((arr_5 [i_1] [1]) ? var_9 : (arr_5 [i_0] [i_0])))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_23 = (((arr_19 [i_5] [i_7]) != var_8));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_24 = (-(arr_11 [i_5] [2] [i_7] [i_9]));
                            var_25 *= (var_10 <= -var_4);
                            arr_31 [i_5] [8] [i_5] [i_7] |= (~var_10);
                            arr_32 [i_9] = (1637176384 / 14323390870562469669);
                        }
                    }
                }
            }
            var_26 = ((-(((var_5 ? 15293460013968226322 : (arr_15 [i_5] [12] [i_5] [i_5] [i_5] [12] [i_6]))))));
        }
        var_27 = var_14;
        var_28 = (max(var_28, (((((!(!var_1))))))));
        arr_33 [i_5] [i_5] = (min((arr_28 [i_5] [i_5] [i_5] [i_5] [0]), (((arr_16 [i_5]) ? var_13 : (min((arr_3 [i_5] [i_5]), 4123353203147081961))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_29 -= 1500669141;

        for (int i_11 = 4; i_11 < 10;i_11 += 1)
        {
            var_30 = var_4;
            var_31 = ((+(((-2147483647 - 1) / 4123353203147081945))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_32 = ((((arr_50 [i_10] [i_11] [i_11] [3] [i_14] [i_13 - 1]) ? var_1 : (arr_38 [1]))) | -var_7);
                            var_33 = 14323390870562469645;
                            var_34 = (12 ? 2147483639 : -2147483639);
                        }
                    }
                }
            }
            var_35 = (arr_22 [i_11 - 2] [i_11 - 2] [i_11 - 3] [i_11 - 2]);
        }
        var_36 += -2147483640;
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_37 += var_6;
        arr_53 [i_15] = ((var_3 < ((((var_0 ^ 465129919) ^ (4123353203147081928 >= var_13))))));
        var_38 = (max(var_38, (((-((14323390870562469655 + (arr_0 [i_15] [i_15]))))))));
        arr_54 [5] [i_15] = (arr_10 [i_15] [i_15] [i_15] [i_15]);
    }
    #pragma endscop
}
