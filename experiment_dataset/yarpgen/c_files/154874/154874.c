/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [1] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])));
        arr_5 [i_0] = ((-2 ? 17738021768925107620 : (arr_0 [i_0] [i_0])));
        arr_6 [i_0] [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = (min(var_14, 28095));
        arr_11 [i_1] = (var_12 + ((((var_12 & 1) ? ((3279679545124958176 ? (arr_2 [i_1]) : var_5)) : 29550))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_15 [i_2] [i_2] = (((((((max((arr_1 [i_2]), -2))) ? (max((arr_0 [i_2] [i_2]), 15167064528584593440)) : (max(15143, 3279679545124958176))))) ? (((35923 + 26) ? 29591 : ((max(var_0, -15137))))) : (((!((((arr_12 [i_2]) ? 64512 : 14162))))))));
        arr_16 [i_2] = ((-(708722304784443995 | var_8)));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_19 [i_2] [i_2] = (64204 <= 13106947286701620820);
            arr_20 [i_3] [i_2] [i_2] = (!var_4);
            arr_21 [i_2] [i_2] [i_3] = ((((38561 ? 1 : 119)) & (-13588 + 23206)));
        }
        arr_22 [i_2] = (max((((var_1 ? (arr_2 [i_2]) : (arr_17 [i_2])))), (~10)));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_32 [i_2] [i_2] [i_2] [i_2] = ((((((arr_12 [i_5]) ? (arr_12 [i_5]) : (arr_18 [i_2] [i_4])))) ? (arr_14 [i_6] [i_4]) : ((2560269187577386460 << (-2 + 44)))));
                        arr_33 [i_6] [i_5] [i_2] [i_2] = ((!(arr_18 [i_2] [i_4])));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_36 [i_7] [i_7] [i_4] [i_7] = (((arr_30 [i_2] [i_2]) / var_8));
                arr_37 [i_7] [i_4] [i_7] = var_11;
                var_15 *= ((((44474 ? 1362 : var_0))) | ((26974 ? var_3 : 29612)));
            }
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_45 [18] [i_8] [i_9] [i_8] [i_9] [i_9] [i_8] = (((arr_43 [i_9] [i_9] [i_9] [i_9] [0] [7] [i_9]) ? (arr_0 [i_9] [i_4]) : (arr_0 [i_2] [i_10])));
                            var_16 ^= -25068;
                            arr_46 [i_2] [i_4] [i_2] [i_9] [i_8] [i_4] = (5339796787007930798 / -1297);
                            arr_47 [i_2] [i_4] [i_8 + 1] [i_9] [i_8] [i_10] [i_2] = var_3;
                        }
                    }
                }
                arr_48 [i_2] [i_8] [i_8] = ((!((((arr_25 [i_2] [i_4] [i_8] [i_8]) ? var_8 : (arr_18 [i_2] [i_4]))))));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_52 [i_2] [i_2] [i_2] = (((arr_43 [i_4] [i_4] [i_2] [i_4] [i_2] [i_4] [i_2]) ? (arr_30 [i_2] [i_2]) : (((arr_23 [i_2]) ? var_2 : var_12))));
                arr_53 [i_11] [i_11] [i_11] [i_11] = (((arr_24 [i_2] [i_2]) | var_11));
                var_17 *= (((arr_26 [i_2] [i_2] [i_2]) < ((var_11 ? (arr_35 [i_2] [i_4]) : 2560269187577386453))));
                arr_54 [12] [i_4] [i_4] [i_4] = ((2560269187577386467 ? (!1) : var_0));
                arr_55 [i_2] [i_4] [i_11] [i_2] = (arr_38 [i_2]);
            }
            arr_56 [i_2] [i_4] = (((arr_27 [i_2] [i_4] [i_4]) ? (arr_27 [i_2] [i_4] [i_4]) : var_10));
        }
    }
    var_18 = (var_5 / 127);
    #pragma endscop
}
