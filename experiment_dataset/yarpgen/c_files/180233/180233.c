/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, (((82 << (((arr_0 [i_0]) ? 0 : var_12)))))));
        var_20 = (~((var_2 ? var_3 : (arr_0 [i_0]))));
        var_21 = (((!(arr_2 [i_0]))));
        var_22 &= 16;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 = (min(-120, 1));
        var_24 = (((((var_13 ? ((max(var_2, -3))) : (arr_3 [i_1])))) || (((1842938840 ? (!var_2) : (arr_2 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_25 = (max((((min(1, var_8)))), (((arr_9 [i_3] [i_1] [i_1]) % (max(794077437, 16))))));
                    var_26 |= ((4294967295 ? (min(var_2, 0)) : var_12));
                    var_27 &= ((~((var_9 ? var_11 : (var_11 || var_13)))));
                    var_28 = (arr_2 [i_1]);
                    var_29 = max(((-127 ? (min(-126, (arr_2 [i_1]))) : (((var_14 ? 24171 : var_18))))), (arr_1 [i_2]));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_30 += ((((((arr_8 [i_4]) % ((-6577208706515522101 ? (arr_8 [i_4]) : (arr_4 [i_4])))))) ? (((((((((arr_2 [i_4]) + 9223372036854775807)) << (((arr_8 [i_4]) - 14912297054331094688)))) > ((var_8 ? (arr_2 [i_4]) : 795705271)))))) : (min(8371777544549149510, var_2))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_31 = ((((arr_5 [i_5 + 2] [i_5 + 2] [i_5 - 1]) ? ((var_14 ? 76 : var_6)) : var_11)) * (((((max(188383161, (arr_15 [i_4] [i_5] [i_6] [i_5])))) || ((min((arr_6 [i_5 + 3] [i_5 + 3] [i_4]), 91170814)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_32 = (min(var_32, ((max((((arr_12 [i_4] [i_6]) | ((((var_7 > (arr_13 [i_8] [i_7] [i_6]))))))), ((max((var_3 / 3499262021), 1219749005))))))));
                                var_33 += (((((arr_13 [i_4] [i_7] [i_8]) || var_17)) ? (arr_13 [i_7] [i_5] [i_4]) : (-38 && 4294967295)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_34 = (min(var_34, ((!((max(8453178064099240509, var_6)))))));
                            var_35 = (((((arr_30 [i_12] [2] [2]) << (((!(arr_22 [i_9] [i_9])))))) / (min((arr_14 [i_9] [i_10] [19]), -24172))));
                            var_36 &= (arr_10 [i_9]);
                        }
                    }
                }
                var_37 = (min(((~(max((arr_23 [i_9]), (arr_25 [i_10] [i_9]))))), ((((1 << var_15) + var_16)))));
                var_38 = ((((max(-24172, var_0))) || (((var_13 ? (arr_13 [i_9] [17] [i_9]) : (arr_13 [i_10] [i_9] [i_9]))))));
            }
        }
    }
    #pragma endscop
}
