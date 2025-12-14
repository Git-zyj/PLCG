/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((1 ? 0 : var_3)));
        arr_3 [i_0] [i_0] = (9902845904952253192 + 92);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [12] = ((((((((var_11 & (arr_1 [i_1]))) == (arr_5 [i_1] [i_1]))))) & (((min(2, 255)) - 702174971))));
        arr_9 [i_1] = (((((32736 >> ((((var_3 ? 8488 : (arr_0 [i_1]))) - 8479))))) ? (((54058 == (arr_1 [i_1])))) : var_5));
        arr_10 [i_1] = ((+((((arr_1 [i_1]) == (arr_1 [i_1]))))));
        arr_11 [i_1] = var_3;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_16 [12] = (((!-8469) || var_2));
        arr_17 [i_2] = ((1832046199 ? -32210 : -var_0));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_21 [i_3] [i_3 - 1] = ((255 || ((min(24, (((!(arr_14 [i_3])))))))));
        arr_22 [i_3] = var_11;
        arr_23 [i_3] = var_10;
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            arr_33 [i_5] [i_5] [i_6] [i_4 + 2] [i_7] = (min(((var_1 ? 7523 : (min(2, 2225)))), (!var_0)));
                            arr_34 [i_3] [i_3] [i_6] [2] = ((((arr_32 [i_6] [i_6 + 1] [i_6] [i_6] [i_7] [i_7]) ? var_6 : (arr_32 [i_6] [i_6 + 1] [i_6] [i_6] [8] [i_6]))));
                            arr_35 [i_3] [i_4 - 1] [i_6] [i_7] = 232253738;
                            arr_36 [i_3] [i_6] [i_5] [i_7] [i_7 + 1] = (min((min(18446744073709551615, (arr_30 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1]))), (min(18446744073709551615, 106))));
                            arr_37 [i_6] [i_4] [i_6] [i_7] [i_7] = (((((64018 + (arr_20 [i_4 + 3])))) ? (((arr_20 [i_7 + 2]) - (arr_20 [i_3 - 1]))) : (arr_20 [i_6 + 1])));
                        }

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_40 [i_6] [i_6] [i_3] [i_3] [i_6] = arr_12 [i_4 + 1];
                            arr_41 [i_3 - 2] [i_5] [i_5] [i_5] [i_8] [i_3] [14] = ((((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (9902845904952253192 - 9902845904952253192))) >> (8543898168757298412 - 8543898168757298383)))) || (-2462921117 < -2219)));
                        }
                    }
                }
            }
        }
    }
    var_12 = var_11;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_51 [i_9] [10] [i_9] [i_9] = ((!(((((62852 ? (arr_5 [i_9] [i_9]) : 22)) + 9)))));
                    arr_52 [i_11] [i_11] &= (arr_0 [i_11]);
                }
            }
        }
    }
    var_13 = var_11;
    #pragma endscop
}
