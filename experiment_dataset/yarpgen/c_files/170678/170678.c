/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((2958280066 ? 246 : (13942857037876268557 & -1)));
            var_13 = ((!(arr_4 [i_0 - 3] [i_0 - 1])));
            var_14 += var_3;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_15 = (min(var_15, (arr_2 [i_0])));
            var_16 = (min(var_16, (((-(arr_7 [i_0 - 1]))))));
            var_17 += var_4;
        }
        var_18 = (min(var_18, (((!(((((max(var_2, 107))) ? (((var_9 >> (11338039849327872898 - 11338039849327872870)))) : 4082533351))))))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_19 = (max(var_19, var_2));
            var_20 ^= -65535;
        }
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            var_21 = (min(var_21, (arr_1 [i_4] [i_0])));
            arr_15 [i_0 - 3] [0] [i_4] |= var_10;
            arr_16 [20] |= ((var_12 ? (max((-13474 | 0), -0)) : 15607));
        }

        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            arr_21 [i_0] [i_5] [i_5] = ((((!((var_8 > (arr_8 [i_5] [i_5] [i_0 - 3]))))) ? (((((arr_7 [i_0 - 3]) == (((((arr_12 [i_0]) > 1)))))))) : ((~(arr_7 [i_5])))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = (min(var_22, 4285900677899934315));
                        var_23 = (max(var_10, (((arr_4 [i_5] [i_5 - 2]) ? (arr_4 [i_5] [i_5 - 2]) : (arr_10 [i_5] [i_5 - 2])))));
                        var_24 &= (var_1 ? ((((arr_0 [i_0]) ? 10236 : 6323508122139853027))) : (var_11 != var_4));
                        var_25 = (min(var_25, (122 | 79)));
                        arr_26 [i_6] = ((((((((var_6 ? (arr_7 [i_0]) : (arr_14 [i_6])))) ? var_9 : var_5))) == var_0));
                    }
                }
            }

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_26 = (max(var_26, -77));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_27 = (min(var_27, ((((!-15608) ? 108 : (arr_13 [i_0] [i_10]))))));
                            var_28 += 7936;
                        }
                    }
                }

                /* vectorizable */
                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {
                    arr_42 [i_11] [i_11] [i_8] [i_0 - 3] = (((arr_8 [i_5 - 1] [i_11 - 3] [i_0 + 1]) != var_11));
                    var_29 = (max(var_29, ((((!var_7) ? var_8 : ((((!(arr_7 [i_11]))))))))));
                    arr_43 [i_0] [i_0] [i_8] [i_11] = (((arr_17 [i_11 + 1] [i_11 + 1] [i_5 - 1]) ? (arr_17 [i_11 - 1] [i_11 - 1] [i_5 - 2]) : (arr_17 [i_11 + 1] [i_5 - 2] [i_5 - 1])));
                }
                arr_44 [i_5] = (-80 - 2551874668);
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                var_30 &= ((max(((((arr_1 [i_0 - 1] [i_0]) - 1))), ((26 ? -115 : var_3)))) ^ (((((var_9 ? var_7 : 7741))))));
                var_31 -= (((~(max(var_9, var_1)))));
            }
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {

            for (int i_14 = 4; i_14 < 22;i_14 += 1)
            {
                var_32 = (min(var_32, ((max(var_4, (arr_9 [i_0 + 1] [i_0 + 1] [i_14 + 1]))))));
                arr_53 [i_0] [i_0] [i_13] [i_14 + 2] = ((var_10 ? ((((arr_40 [i_0] [i_13] [i_0 - 1] [i_14 - 2]) ? (arr_10 [i_14 - 3] [i_0 - 3]) : -7742))) : (max((arr_3 [i_13] [i_0 + 1]), 14886821831310351617))));
            }
            var_33 = (max(var_33, ((((arr_9 [i_0] [i_13] [i_13]) ? (((((~(arr_25 [i_0] [10] [10] [i_0])))) ? (var_0 * 0) : var_0)) : var_9)))));
        }
        var_34 = (max(-31728, ((var_9 ? 3873681524887970685 : -3363))));
    }
    for (int i_15 = 3; i_15 < 13;i_15 += 1)
    {
        var_35 = 179;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 13;i_17 += 1)
            {
                {
                    var_36 = var_0;
                    var_37 = (arr_49 [i_15] [9] [i_17 + 1]);
                }
            }
        }
    }
    var_38 = (min(var_38, (-7594 * var_0)));
    var_39 = ((((max(var_0, -1)) * (((0 >> (var_8 - 1167719623482839375)))))));
    var_40 = (((((max(var_10, 1))) && (((var_1 ? var_5 : var_6))))));
    #pragma endscop
}
