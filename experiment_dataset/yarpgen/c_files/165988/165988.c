/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        arr_2 [i_0] = ((var_8 << (var_8 - 64)));
        var_20 = -6926243098694977494;
    }

    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [7] = (6926243098694977494 ? -6926243098694977494 : ((~(arr_4 [i_1 + 2] [i_1 + 2]))));
        var_21 = (((+-12769674355826920425) == ((max(234, var_9)))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_22 = var_0;
        arr_8 [9] [i_2] = -var_0;
        var_23 |= (((((((-2147483647 - 1) ? (arr_4 [i_2] [i_2 - 1]) : -1442095547))) ? var_18 : var_4)));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    var_24 = -6926243098694977494;

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            arr_20 [i_2] [i_3 + 1] [i_3 + 1] [i_5] [i_5] = ((8165773151213542586 >= (((((arr_19 [i_2] [i_2] [i_5] [i_2 + 1] [i_2]) == 32767))))));
                            arr_21 [i_2 + 2] [3] [10] [i_4] [i_5] [i_5] = ((((((arr_17 [i_5]) % 14968))) ? ((((1 != (arr_17 [i_5]))))) : (((arr_17 [i_5]) >> 1))));
                            var_25 = (((min((385484264 > 5600), (max(2147483647, 90))))) ? (min(64402, (((arr_15 [i_2 - 1] [i_3] [i_4 - 1] [i_5] [i_6 - 2]) % var_16)))) : 18197);
                            var_26 = ((~(min((0 % var_2), ((50568 ? var_8 : 14960))))));
                            arr_22 [i_2] [i_3 + 2] [i_5] [i_5] [i_6 + 1] = (((((~((var_13 ? var_15 : 18014398509481983))))) ? var_12 : (((902606853992759920 ? 32563 : var_8)))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_3] [i_4] [6] &= (arr_23 [11] [i_3] [i_4] [10] [i_7]);
                            arr_26 [i_5] [i_3] [i_3] [i_4] [i_3] [i_7] = (~var_7);
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_27 = var_6;
                            arr_31 [i_5] [i_8] [i_5 + 2] [i_4] [i_3] [i_3] [i_5] = ((1 > (max((max(16618078693708102396, 1)), ((max(-592499392, var_7)))))));
                            arr_32 [i_2 + 2] [i_3 - 1] [8] [i_5 + 1] [i_2 + 2] &= var_11;
                            arr_33 [i_5] = 5;
                        }

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_37 [i_4] [i_3] [i_4 + 1] [i_5 - 1] [i_9] [i_5] [i_3] = (((((min(227, 18446744073709551606)) - var_4)) << (((~var_0) + 20315))));
                            arr_38 [i_5] [i_3] = var_10;
                            arr_39 [i_5] = ((!(((~(arr_4 [i_4 + 1] [i_3 + 1]))))));
                            arr_40 [i_3] [i_4 - 1] [i_4 - 1] [i_5 + 1] [i_5 + 1] [i_5] [i_4] = (((arr_7 [i_9]) & (max(1, (arr_30 [i_2 + 1] [i_5])))));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            arr_43 [i_5] = ((((-2147483647 - 1) ? (-127 - 1) : (var_15 & var_18))));
                            var_28 = var_16;
                            arr_44 [i_10] [i_5] [i_5] [1] = ((~((((!3379775370693996195) > (~196832357))))));
                        }
                    }
                }
            }
        }
        var_29 = (((((~((var_15 << (((arr_27 [i_2] [i_2 + 1] [i_2] [6] [i_2]) + 4535))))))) ? ((var_10 ? var_0 : (arr_1 [2]))) : var_11));
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_30 = (max(var_16, var_3));
        var_31 += (((((-(var_6 != 1)))) || -1942784873));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
    {
        arr_49 [i_12] = ((2967960229 - (!18446744073709551615)));
        var_32 = (max(var_32, ((((((arr_35 [i_12] [i_12]) ? var_3 : 255)) / var_18)))));
    }
    #pragma endscop
}
