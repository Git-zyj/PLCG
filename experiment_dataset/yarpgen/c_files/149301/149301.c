/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (~4294967295);
    var_17 = (((~var_12) ? (1 & -1) : 1));
    var_18 = var_10;
    var_19 &= -var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] |= ((((!(arr_5 [i_0] [i_1] [i_0]))) ? (((arr_4 [i_0] [i_1]) ? (((max(196, 5)))) : (max(33574, (arr_4 [8] [i_1]))))) : (((((-(arr_5 [i_1] [i_1] [i_0]))) & ((min(1, 1))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] &= -8274906659211763884;
                    var_20 = ((((0 ? (arr_5 [i_0] [i_0] [i_2]) : var_3)) & (arr_7 [i_0] [i_1] [i_1] [i_2])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] = ((~((((arr_8 [i_3] [i_3]) && (((38852 ? var_14 : 16764437605397689749))))))));
                    var_21 = ((1 << (arr_0 [i_1] [i_0])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_4 + 1] = ((-8274906659211763884 ? 18014123631575040 : (arr_13 [i_4 + 1] [i_4 + 1] [i_3])));
                        var_22 = (min(var_22, ((38852 ? 4269638591 : (arr_10 [i_0] [i_0] [i_4])))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 = (!1849744772);
                        arr_23 [i_0] [i_0] [i_1] [11] [i_3] = -24061;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_24 = (131071 >= 15851690282782479214);
                        arr_28 [i_3] = ((((0 ? (arr_0 [i_3] [i_0]) : -1376742663612003492)) / var_5));
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_25 = ((1 ? (~-25352) : (!0)));
                        arr_32 [i_3] [i_3] = (((((((var_4 ? (arr_29 [i_0] [i_0] [7] [i_7] [i_7]) : var_9))) ? -32754 : ((62 ? (arr_4 [i_0] [i_1]) : (arr_26 [i_0] [1] [i_7]))))) + (((max(511, 1))))));
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            var_26 ^= ((((((max(255, 1))) ? ((var_9 ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_1 [1]))) : (((-1225982657 ? 8176 : (arr_31 [i_0] [i_1] [5] [i_9])))))) < (((~((max((arr_34 [i_0] [i_0] [i_0]), (arr_31 [i_0] [i_1] [i_3] [i_1])))))))));
                            arr_37 [i_9] [i_3] [i_3] [i_3] [i_1] [i_3] [i_0] = ((((-(arr_31 [i_0] [i_0] [i_0] [i_0]))) > (!var_1)));
                        }
                        var_27 = (min((((!(arr_20 [i_0] [i_1] [i_3] [i_8] [i_8 - 1])))), (((arr_20 [i_0] [i_0] [i_3] [i_3] [i_8 + 1]) ? (arr_20 [i_8 + 1] [0] [i_3] [i_8 - 2] [17]) : (arr_20 [i_0] [i_1] [i_3] [i_3] [i_8 - 1])))));
                        arr_38 [i_0] [i_3] [9] [i_8 + 1] [i_0] = (((((!((min(1, (arr_13 [i_1] [i_3] [i_3])))))))) < (min((arr_15 [i_0] [1]), 3)));
                        arr_39 [i_3] [i_3] [i_3] [i_8] [i_0] [i_0] = -1475429521;
                    }
                    for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_28 = (((1302892361 & (!1))));
                        arr_43 [i_3] [11] [i_3] = (min((arr_16 [i_0] [i_1] [i_3] [i_10 - 1] [i_10 - 3]), (((min(-32754, 65522))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
