/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_15 = (min(var_15, (!var_4)));
            var_16 = var_3;
            var_17 = ((arr_2 [i_0 - 2] [i_1]) - (arr_1 [i_0 + 2]));
            var_18 = (((arr_3 [i_0 + 2] [i_1 - 1]) ? (arr_3 [i_0 - 1] [i_1]) : (arr_3 [i_0 - 1] [i_0])));
        }
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {
                    var_19 -= (max(((-(arr_7 [i_2 + 3] [i_2 + 3]))), (((!(arr_9 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_20 = (-(((arr_13 [i_0]) * (arr_13 [i_0]))));
                                arr_14 [i_4] [i_2 - 2] [i_4] [i_4] [i_4] [i_4] = ((((!(arr_3 [i_2 + 3] [i_5 - 3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_21 &= var_11;
                    var_22 = var_12;
                    var_23 = -var_5;
                    var_24 ^= ((-(arr_4 [i_6 - 1] [i_6 + 1] [i_8])));
                    arr_23 [i_6 + 1] [i_6 + 1] [i_7] = ((-var_4 ? (!var_11) : (!var_8)));
                }
            }
        }

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            arr_28 [i_9] = ((((max((arr_0 [i_6 - 1]), (arr_0 [i_6 + 1])))) ? (min(var_11, var_13)) : (((((arr_0 [i_6 + 1]) != (arr_0 [i_6 - 1])))))));
            arr_29 [i_6] [6] [i_9] = var_4;
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_25 = ((-(!524160)));
                            var_26 &= (max(((max(((max(var_9, var_7))), (min((arr_3 [21] [11]), (arr_31 [i_6 - 1] [18])))))), ((((min(3141245403, 576460752303423487))) ? (arr_19 [i_12]) : (arr_3 [i_9] [i_9])))));
                            var_27 = (arr_13 [i_10]);
                        }
                    }
                }
            }
            var_28 = (max(var_28, ((((~4282) ? (((min(var_8, var_2)))) : (!var_7))))));
        }

        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            var_29 = ((min((arr_16 [i_6 - 1]), (arr_16 [i_6 - 1]))));
            var_30 ^= var_3;
            var_31 += ((((min((arr_39 [2] [i_13 - 1] [i_6 + 1]), (((-(arr_20 [i_6]))))))) ? (arr_24 [i_6 + 1]) : var_4));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_42 [i_14] [i_14] = ((!(arr_8 [i_14] [i_6 + 1] [i_14] [i_14])));
            var_32 &= (~var_3);
        }
    }
    var_33 *= (-122 ^ -var_8);
    #pragma endscop
}
