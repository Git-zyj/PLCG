/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] &= ((~(min((-28087 > 2147483642), 2147483642))));
        var_10 = (((min((min(-2147483643, (arr_1 [i_0]))), var_5)) ^ var_6));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] = 1809930408;
                        var_11 = -1110655698;
                    }
                }
            }
            var_12 = (max(var_12, (((((min((arr_8 [5] [5] [i_1 + 1]), (arr_8 [i_1] [i_1] [i_1 + 1])))) || ((min((arr_8 [i_1] [i_1] [i_1 + 1]), (arr_8 [i_1 + 1] [i_1] [i_1 + 1])))))))));
            var_13 = (min(var_13, ((max((min((max((arr_1 [i_1 + 1]), var_1)), ((((arr_1 [i_0]) > (arr_9 [i_0] [i_0] [i_0] [i_0])))))), ((min((((((arr_7 [7] [i_1] [i_1]) + 9223372036854775807)) >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 3975552269)))), (arr_9 [i_0] [i_1] [i_0] [i_0])))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_14 = (((~var_4) ? 551465985 : (arr_10 [i_0] [1] [1] [i_0] [i_0] [i_0])));
            var_15 = arr_14 [i_0] [i_0];
            var_16 = (max(var_16, ((((~var_1) ? 119 : (var_6 - var_3))))));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                var_17 = (-205153195 ? -127 : var_9);

                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    var_18 = (arr_15 [i_0] [i_0]);
                    var_19 = var_3;
                }

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_20 += var_3;
                    var_21 = (min(var_21, var_0));
                    var_22 = (max(var_22, 2147483642));
                    var_23 = (max(var_23, (arr_16 [i_0] [i_5])));
                }
                var_24 = (18446744073709551613 && 9465);
                var_25 ^= ((((max((arr_12 [i_5] [i_5] [3]), (arr_13 [i_0] [i_0] [i_0])))) ? var_3 : (max((arr_4 [i_6 - 2] [i_6 - 3] [i_6]), (arr_4 [i_6 - 2] [i_6 - 3] [i_6])))));
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_26 += (min(((~(arr_4 [i_0] [i_5] [i_5 + 1]))), (arr_12 [i_0] [i_0] [i_9])));
                var_27 ^= (min(((((min((arr_29 [i_9]), 551465985))) ? (min(137436856320, (arr_10 [i_0] [i_5] [i_5] [i_0] [i_5] [i_0]))) : 551465985)), ((((arr_23 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]) << var_8)))));

                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    arr_33 [i_0] [i_0] [1] [i_0] = (max(((max(var_8, (var_2 > 65535)))), ((((max(4, 3743501304))) ? (arr_1 [i_0]) : var_8))));
                    var_28 -= var_4;
                    var_29 = 134217727;
                }
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    arr_37 [i_0] [i_11] [i_9] = ((((min(((min((arr_19 [i_0]), var_7))), (min((arr_27 [3] [i_5] [i_5 + 1]), var_2))))) < (var_2 * var_8)));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_30 |= (((arr_8 [i_11 + 3] [i_5 + 1] [i_9]) ? var_4 : (arr_23 [i_0] [i_11 - 1] [i_5 + 1] [i_11])));
                        arr_40 [i_0] [i_5 + 1] [i_0] [i_5 + 1] = (arr_10 [i_0] [1] [1] [i_0] [1] [i_0]);
                        arr_41 [i_0] [i_5 + 1] [i_9] [i_11] = arr_19 [i_11 + 3];
                        var_31 = var_1;
                        arr_42 [i_0] [i_5] [i_0] [i_11] [i_11] = (551465981 > 2147483642);
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_32 -= (max(((var_1 ? (arr_6 [i_5 + 1]) : (arr_19 [i_5 + 1]))), (arr_19 [i_5 + 1])));
                        var_33 = ((((max(15151, -1964032797))) ? ((max(var_7, (arr_39 [i_0] [i_0] [i_0] [i_11 + 3] [i_13] [i_0])))) : ((((arr_32 [i_0] [i_5] [i_9] [i_11 + 1] [i_13] [i_13]) <= (arr_32 [i_11] [1] [1] [i_11 + 3] [i_13] [i_13]))))));
                        arr_47 [i_0] [i_13] [0] [11] [11] = -134217732;
                        var_34 *= ((+((min(((((arr_18 [i_0]) && var_5))), (arr_35 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_14 = 1; i_14 < 11;i_14 += 1)
                    {
                        var_35 = (max((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_23 [i_0] [i_0] [i_0] [i_0])));
                        arr_52 [i_0] [i_5 + 1] [i_5 + 1] [i_0] [i_14 + 1] [i_11] [i_14] = ((((!((min(var_3, (arr_13 [2] [i_14 + 1] [i_14])))))) || (((((var_1 && (arr_24 [i_0]))) ? ((var_4 ? var_3 : (arr_12 [1] [1] [1]))) : ((((arr_24 [i_0]) || (arr_8 [i_0] [i_0] [i_0])))))))));
                    }
                    arr_53 [i_0] [i_0] [i_0] [i_11] = (arr_34 [4] [i_5] [i_5] [i_5 + 1]);
                    arr_54 [i_0] [i_0] [i_0] = (36 < 10392226631976454030);
                }
            }
            arr_55 [i_0] = (min(var_0, 1216147522));
        }
        arr_56 [i_0] = (max((((((var_8 ? (arr_31 [i_0] [i_0] [i_0] [i_0]) : var_6)) > ((min((arr_26 [11] [8] [i_0] [i_0] [i_0] [1]), var_5)))))), (max(((((arr_27 [i_0] [i_0] [i_0]) ? (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_1 [10])))), (min(551465981, 1))))));
    }
    var_36 = (((max(((min(65535, -21783))), (max(var_9, var_5))))) ? var_7 : var_7);
    #pragma endscop
}
