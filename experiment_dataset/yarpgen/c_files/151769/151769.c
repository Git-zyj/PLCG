/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(arr_0 [i_0] [i_0])));
        var_19 *= 20981;
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_20 = (min(var_20, 3046563585));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_11 [i_1] = (((351001975976546343 / var_11) ? (((arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]) / -1703884684)) : ((-860 ? var_12 : (arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                var_21 = ((((((max(-62, 0))) * ((max(var_5, 8708))))) - var_13));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_4] [i_2 - 1] [i_1] = (arr_3 [i_1]);
                    arr_17 [i_1] [i_2] [i_4] [i_1] = var_5;
                    var_22 &= (142 - 188);
                    arr_18 [i_1] [i_4] [i_4] [i_5] [i_2] = ((1248403711 - (arr_15 [i_2 + 1] [i_2 - 1])));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_21 [10] [i_2] [i_2] [i_4] [i_1] [i_1] = (1248403720 + -15334);
                    arr_22 [i_6] [i_2] [i_4] [i_1] = (((((arr_20 [14] [i_4] [i_4] [i_2 + 1] [i_1] [i_1]) - -146932349)) + (((arr_20 [i_1] [i_2] [i_4] [i_4] [i_4] [i_6]) / 65532))));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_4] [i_6] [i_1] [1] [1] = ((max(var_16, (0 + var_16))));
                        arr_26 [i_1] [i_6] [i_4] [i_2 - 1] [i_1] = ((-19545 ? 17490390573019476230 : (8708 / 14)));
                        var_23 = -var_3;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_1] [i_1] [i_1] [i_6] [i_8] [i_8] = ((0 ? 1 : var_4));
                        arr_30 [i_1] [i_6] [i_1] [i_6] [i_8] = ((4294967278 ? (arr_4 [i_2 + 1]) : (var_1 + 1096)));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_24 *= ((((((min(var_4, 798280320957237738)) * (arr_28 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])))) ? ((0 ? 1 : (var_15 / var_18))) : ((var_6 ? (-23153 * var_4) : 13))));
                        var_25 = 1;
                        arr_35 [i_1] [i_1] [i_4] [i_1] [i_9] = (min(((var_0 ? var_10 : -761813869)), (var_12 - var_0)));
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_26 *= (((arr_23 [i_11] [i_10] [i_11] [i_11] [i_2] [12]) - 3046563585));
                            var_27 = (((var_2 / 12233979498986598919) - 1));
                            arr_40 [i_1] [i_2 + 1] [2] [i_4] [i_11] &= ((((-6920199127354307020 - (max(-5576367196103992293, 6212764574722952697)))) - var_16));
                            var_28 = (min(var_28, (((-(var_1 * 0))))));
                            var_29 *= ((-(min(var_5, (arr_5 [i_10])))));
                        }
                    }
                }
                var_30 = var_13;
                arr_41 [i_1] [i_2 + 1] [i_1] [i_1] = (min(var_6, (max(-28454, 16))));
                var_31 = (min(var_31, ((((var_3 / (arr_32 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_4])))))));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_32 = var_15;
                arr_45 [i_1] [i_1] = (max((var_12 + 23974), ((2118755814 ? var_18 : (8 / var_15)))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_51 [i_1] [12] [i_2] [i_13] [13] = 743181777;
                            arr_52 [i_1] [i_2] [i_12] [i_1] [10] = ((((var_3 ? 15254909173412540794 : ((min(var_9, var_1))))) * var_15));
                        }
                    }
                }
                var_33 *= (1 / -var_5);
            }
            var_34 = (5903792838838125759 + -25);
            arr_53 [i_1] [i_2] [i_2] = (min((max(9076, var_6)), ((((2861173910141839396 + var_0) + var_17)))));
        }
        for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
        {
            arr_57 [i_1] [i_15 + 1] [i_1] = (16771188878290221466 * 0);
            arr_58 [i_1] = 6212764574722952701;
            var_35 = 140;
        }
        arr_59 [i_1] = ((9 + (((max(var_13, -733824123)) - ((0 ? var_8 : var_9))))));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_36 = (1 * 3191834900297010821);
                            var_37 = (var_15 + 3191834900297010821);
                            arr_70 [i_1] [i_1] [i_1] [i_16] [i_17] [i_18] [i_1] = (((arr_14 [i_16] [i_1] [i_18]) - -7193));
                        }
                    }
                }
            }
            var_38 = (min(var_38, (((-16 / (-1552884134 / var_15))))));
        }
    }
    #pragma endscop
}
