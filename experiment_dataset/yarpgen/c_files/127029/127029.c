/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_15 -= (((max(((var_6 ? 9 : (arr_1 [i_0] [i_1]))), ((((arr_1 [i_1 - 2] [i_0]) >> (124 - 99)))))) - ((max(((0 ? -121 : -116)), 121)))));
            var_16 = 1;
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_17 = (!(max((arr_10 [i_1 - 1] [i_1] [i_2 - 3] [i_0] [i_2 - 1]), (arr_10 [i_1 - 1] [i_1] [i_2 + 1] [i_3] [i_2 - 4]))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_1] = ((((max((~109), (((arr_12 [i_0] [i_0] [i_0] [i_0] [6]) ? 118 : var_13))))) ? ((((((arr_6 [i_1] [i_1]) | var_0))) ? var_14 : 42)) : -124));
                            var_18 = ((!(max((2292258918266914972 == -116), (1 > 2141429891)))));
                            arr_16 [i_1] = 2096616786;
                            var_19 *= ((((((var_6 * var_8) >> (var_7 + 26408)))) ? ((-1345504514 ? ((var_12 ? 5823 : var_12)) : 116)) : ((max((arr_3 [i_1 - 1]), var_11)))));
                            var_20 = (((var_13 ? ((115 ? (arr_5 [i_3] [i_4]) : var_10)) : (((-(arr_5 [i_4] [i_4])))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_21 = (((((var_2 ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1]) : 5831))) ? ((((arr_9 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]) ? (arr_9 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 2]) : 1))) : (((arr_9 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 2]) ? var_0 : var_13))));
                            arr_19 [i_2] [i_1] [i_2] [i_2] [i_2] [i_2] = var_2;
                            var_22 = 1;
                            var_23 = var_8;
                            arr_20 [i_2] [i_2 - 2] [i_2] [i_1] [i_2] [i_2 + 1] [i_2] = -1345504499;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_24 *= (max(var_9, 5806));
                            var_25 = (((((arr_8 [i_1] [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 1]) ? (arr_18 [i_0] [i_1] [i_2] [i_3] [i_6]) : (((arr_11 [i_0] [i_1] [i_6]) ? var_8 : (arr_4 [i_1] [i_6] [i_6]))))) < (((2251799813681152 >= (!5831))))));
                            arr_23 [i_1] [i_1] [i_2 - 2] [i_3] [i_1] = max(1, ((var_12 ? var_2 : (arr_4 [i_1] [i_1 - 1] [i_1 - 1]))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_26 = (max(var_13, ((((62740 / 3) * 56)))));
                        arr_34 [i_8] [i_8] [i_8] [i_8] = (arr_2 [i_7] [i_7]);
                        var_27 &= 4073;
                    }
                }
            }
            arr_35 [i_7] [7] [i_7] = (~-1617654033);
            arr_36 [i_0] [i_7] [i_7] = ((((max(-34, (!100)))) ? ((((-86 == (arr_8 [i_7] [i_7] [i_0] [i_0] [i_0]))))) : (max((arr_29 [i_7] [i_0] [i_7] [i_0]), (arr_29 [2] [i_0] [i_7] [i_7])))));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_28 = -var_4;
                var_29 = (((((~(max((arr_25 [i_10] [i_10] [i_0]), (arr_33 [i_11] [i_11] [i_10] [i_0])))))) ? (0 * 37335) : ((max((arr_18 [i_10] [i_11] [i_11] [i_0] [i_10]), var_0)))));
                var_30 = (max((-1 & 1617654032), var_0));
            }
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        var_31 = (((arr_38 [i_12 - 1]) ? (((-1 ? (arr_7 [i_10]) : (arr_32 [i_0] [i_10] [i_12 + 2] [i_13])))) : (max(var_4, (((arr_38 [i_0]) ? var_13 : 1345504514))))));
                        arr_47 [i_13] [i_10] [i_10] [i_0] = 17254599047141399690;
                    }
                }
            }
        }
        var_32 = (min(var_32, ((((max(97, 1073739776))) && (!249)))));
        arr_48 [i_0] [i_0] = (((arr_44 [i_0] [i_0]) ? var_4 : (arr_25 [i_0] [i_0] [i_0])));
        var_33 &= (((1073733632 < 3618058451353849986) ? var_6 : var_0));
    }
    var_34 = (max((max(var_1, (max(1, var_1)))), (1411421218300650136 || -1073739782)));
    #pragma endscop
}
