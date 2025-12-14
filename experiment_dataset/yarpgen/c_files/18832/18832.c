/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0 - 1] = ((((((-2 ? 7736007813696879561 : 2085041295)))) ? ((min(31897, (arr_0 [i_0 - 1])))) : ((-1177335182 ? 19303 : 2025364163))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [1] [i_1] [1] &= var_10;
                        var_15 = (min(var_15, (((((((arr_6 [4] [i_1 - 4]) ? (arr_7 [i_0 - 1] [0] [0]) : ((min(-2, var_0)))))) ? ((max(((((arr_8 [4] [i_1] [i_0]) < var_6))), (arr_0 [i_0 - 1])))) : ((2077942027 ? -106 : (arr_11 [i_2] [i_1]))))))));
                        var_16 = (max((arr_11 [i_1 - 3] [i_0 - 1]), -19));
                        var_17 = (arr_12 [i_3] [i_3] [i_1] [i_1] [i_0]);
                        var_18 = var_11;
                    }
                }
            }
        }
        var_19 = ((~(max((min(4, (arr_7 [i_0] [i_0] [i_0 - 1]))), -var_7))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = (max(var_20, ((((!var_13) ? (var_9 >= var_12) : (~-117))))));
        var_21 *= ((~((((!(arr_14 [10] [10]))) ? (arr_14 [10] [i_4]) : (arr_14 [0] [0])))));
        var_22 ^= (((((~(arr_14 [2] [2])))) ? ((max(var_7, (arr_15 [i_4] [1])))) : (((~65529) ? ((var_0 ? 1656570116 : var_0)) : var_3))));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_23 -= ((~(((((65532 ? 0 : -16))) ? ((1656570116 ? -5 : 2025364137)) : 2269603155))));
        arr_18 [i_5] = (((((2085041289 ? var_10 : var_12))) ? (max((max((arr_17 [i_5] [i_5 - 1]), 9961)), (~-1656570116))) : ((9955 ? (1 & 12) : (max(993389477, var_5))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 += ((min(var_7, (arr_16 [10]))));
            var_25 = (((((28 ? 169 : -1186928603))) ? ((min(-31, 0))) : (--79)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_5] [i_5] = ((((((arr_20 [i_7] [i_7]) ? (((arr_22 [i_5] [i_5]) ? 71 : (arr_20 [i_8 + 1] [i_5]))) : (!var_9)))) ? (((((!(arr_22 [i_5] [i_6]))) ? 1177335192 : -18))) : (((arr_22 [i_5] [i_6]) ? (arr_16 [i_5]) : (~var_13)))));
                        arr_26 [i_5] [i_5] [i_5] [5] = ((-(((!((min((arr_16 [i_5]), (arr_24 [i_5] [i_6])))))))));
                        arr_27 [i_5] [i_6] [i_6] [i_5] [i_6] [i_8] = var_13;

                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            var_26 = ((((((arr_24 [i_9 + 3] [i_9 + 1]) ? -var_13 : (((min(var_7, (arr_28 [i_5] [i_6] [i_7] [i_7] [i_9])))))))) ? ((-(arr_22 [i_5] [i_9 + 2]))) : var_10));
                            arr_30 [i_5] [i_5] [i_7] [i_6] = (((-13 ? ((var_13 ? var_5 : 56)) : -2)));
                        }
                    }
                }
            }
            var_27 = (min(var_27, (((max(var_2, -16))))));
            var_28 = (min((min(-var_3, (0 | -5))), ((max(-30, 1894716161335853309)))));
        }
        arr_31 [i_5] [i_5] = (min((min(((0 ? -19545 : var_9)), ((((arr_23 [9] [i_5] [i_5] [i_5]) < var_10))))), (((!(arr_28 [19] [19] [i_5] [19] [i_5]))))));
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] = (arr_28 [i_10] [i_10] [i_10] [5] [i_10]);
        arr_35 [i_10] = ((~(arr_23 [i_10 - 1] [i_10] [4] [i_10 - 1])));
        var_29 = (~var_1);
        var_30 = (arr_28 [i_10 - 1] [i_10] [i_10 - 1] [i_10] [i_10 + 1]);
    }
    #pragma endscop
}
