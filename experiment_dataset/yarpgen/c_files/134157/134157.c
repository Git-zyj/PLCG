/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (((((1759358085 ? 1 : 30336))) ? 1759358085 : var_10));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = max(var_10, ((((((var_12 + (arr_3 [i_0] [i_1] [i_1])))) ? (arr_4 [i_0] [i_0]) : (!var_12)))));
            var_18 = ((((var_6 && (arr_2 [i_0] [i_1]))) ? ((((arr_4 [i_0] [i_0]) != (var_14 == 35200)))) : var_0));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_0] = (min(78, ((-(max(30336, 2226186919))))));

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_19 ^= (max((min(((((arr_7 [i_3]) < (arr_4 [i_3] [i_3])))), var_7)), (~1)));

                for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_20 -= (arr_8 [i_3] [i_2] [7]);
                    arr_15 [i_0] [i_2] [i_0] = (arr_1 [i_2] [i_4 - 1]);
                    arr_16 [i_0] [i_2] [i_3] [i_4] [i_0] [i_2] = (arr_13 [i_0]);
                }
                for (int i_5 = 4; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_19 [11] [3] [i_0] [4] = (!35182);
                    var_21 = ((((!((max((arr_0 [i_0] [i_3]), (arr_4 [11] [i_0])))))) ? ((((((arr_5 [i_0]) || (arr_11 [i_0] [i_5] [i_3]))) ? (!89) : ((var_4 ? (arr_1 [i_0] [i_0]) : 96))))) : (min(1759910545, var_9))));
                    arr_20 [i_2] [i_0] [9] = (((arr_12 [i_5 - 2] [3] [i_3] [i_5] [i_0]) ? (arr_18 [i_5 - 3] [i_2] [i_5 - 2] [i_5 - 2] [i_0] [i_5]) : (((arr_12 [i_5 - 1] [i_5 + 1] [i_3] [i_5 + 1] [i_0]) ? (arr_18 [i_5 + 1] [i_3] [i_3] [i_5 - 2] [0] [2]) : (arr_12 [i_5 + 1] [i_2] [i_3] [i_5] [i_0])))));

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_22 = (max(var_22, ((((-((-212844688 & (arr_1 [i_0] [i_2])))))))));
                        arr_24 [i_0] [i_6] [i_5] [i_3] [i_3] [i_2] [i_0] = -1180401623;
                    }
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    var_23 = (min(var_23, (arr_22 [i_0] [i_0] [i_2] [i_3] [i_7 + 2])));
                    var_24 = (max(var_24, (((((!(-212844693 && var_0))) || ((((min(9223372036854775807, 178))) || ((0 && (arr_13 [i_2]))))))))));
                    var_25 = ((~((((arr_26 [i_0] [i_7] [i_7]) <= (((arr_21 [i_0] [4] [i_3] [i_7]) ? 30333 : (arr_11 [6] [8] [i_2]))))))));
                    var_26 -= ((((((((-(arr_4 [6] [i_7])))) ? 1 : -1759910546))) ? (((arr_4 [i_0] [i_3]) ^ (arr_4 [i_3] [i_3]))) : (((!((min(-118, 0))))))));
                    arr_27 [i_7] [i_0] = (arr_23 [i_0] [i_2] [i_3] [i_7 + 1] [5]);
                }
            }
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_27 = ((((min(181, var_4))) ? (((((12023 ? -379077071686674906 : (arr_23 [1] [i_8] [i_9] [i_11] [i_11]))) <= (((((arr_23 [i_0] [i_10] [i_9] [i_10] [i_9]) > (arr_6 [i_0] [i_0])))))))) : (max((arr_13 [i_11]), (min(245, var_13))))));
                            var_28 = (min(((max((min(1, var_13)), ((min(11, 1)))))), (arr_21 [i_9] [i_9] [i_9] [i_10])));
                            var_29 = ((!((min(71, (arr_2 [i_0] [i_8 - 1]))))));
                        }
                    }
                }
            }
            var_30 = (min(var_30, (arr_11 [i_0] [i_0] [i_8 - 1])));
            arr_41 [i_0] = (((arr_39 [i_0] [i_0] [6]) > ((((max(var_5, 1))) ? (((arr_26 [i_0] [i_8] [8]) & var_3)) : ((-(arr_23 [i_0] [i_0] [i_0] [i_8 - 1] [i_8])))))));
        }
        var_31 = (min(var_31, ((-(arr_1 [i_0] [i_0])))));
        var_32 = (min(var_32, 1));
        arr_42 [10] [i_0] |= ((288230376151711743 ? (arr_35 [i_0] [1] [i_0] [i_0] [i_0] [4]) : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_0]) : (1332418694 / 24)))));
    }
    var_33 = (max(var_7, 1));
    #pragma endscop
}
