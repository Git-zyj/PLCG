/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, (!4294967272)));
                            var_16 = (min(var_16, ((min(1, 15)))));
                            var_17 ^= ((1 ? var_6 : 18446744073709551592));
                            var_18 = (((arr_11 [i_0] [i_1] [i_2] [i_0]) ? (arr_11 [i_0] [i_2] [i_1] [i_0]) : (arr_2 [1] [i_1])));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_14 [i_0] [i_0] = ((19 ? 12 : ((((243 ? 227026362 : 11))))));
                    var_19 = max((~1), 11);
                    arr_15 [i_0] [16] [i_0] = (!262816362);
                }
                var_20 = (((max((arr_6 [i_1] [i_0] [i_0] [i_1 + 1]), (arr_6 [i_1] [i_0] [i_0] [i_1 + 1])))) ? (!-227026377) : (((arr_6 [i_1] [i_0] [i_0] [i_1 + 1]) ? (arr_6 [i_1] [i_0] [i_0] [i_1 + 1]) : (arr_6 [i_1] [i_0] [i_0] [i_1 + 1]))));
            }
        }
    }
    var_21 = 21;
    var_22 = ((~(max((~var_10), var_7))));

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_21 [i_6] = (((arr_8 [14] [i_6] [14]) ? 2147483641 : (arr_0 [i_6])));
            var_23 = 2319123944426586085;
            var_24 = (max(var_24, var_11));
            arr_22 [i_5] [i_6] = (arr_4 [i_5] [i_5] [i_5]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_25 |= (arr_9 [i_5] [i_7]);
            var_26 = ((~(-9322 > 8)));
            var_27 = (min(var_27, (~1)));

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_28 = ((-2147483642 ? 3285460629169904164 : 1649404534));

                for (int i_9 = 3; i_9 < 14;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_29 = (min(var_29, (var_9 * 146)));
                        var_30 *= (((arr_13 [i_10] [i_9] [i_5]) ^ (~-23671)));
                        var_31 = 4294967288;
                    }
                    var_32 = ((!(arr_32 [i_9] [i_9] [i_9] [i_9] [i_9 - 2])));
                }
                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    var_33 = ((238 << (-3040 - 18446744073709548566)));

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        arr_41 [i_5] [i_7] [i_8] [0] [i_11] [i_12] = (6 < 316981158);
                        var_34 = (min(var_34, (((var_5 ? ((3099727647 ? 13259080372943087908 : 1268385050)) : -2147483647)))));
                        arr_42 [i_5] [i_7] [i_8] = (var_14 ? var_8 : 1531911840);
                    }
                    var_35 ^= (((((3446024053 >> (4176070402768648532 - 4176070402768648505)))) ? var_4 : (((arr_26 [i_5] [i_8] [i_11]) ? 12 : 6))));
                    var_36 = (1 ? -91 : var_11);
                }
                var_37 = (~18446744073709551609);
            }
        }
        var_38 = ((((-1400863011 < ((var_2 ? (arr_39 [0] [i_5] [i_5] [i_5] [i_5] [i_5]) : 112)))) ? (arr_26 [i_5] [i_5] [i_5]) : ((((arr_35 [i_5] [i_5] [i_5] [i_5]) ? 133 : var_13)))));
        var_39 |= (max((((arr_3 [6] [6]) + (arr_40 [3] [i_5]))), (arr_18 [i_5] [i_5] [i_5])));
        arr_43 [i_5] = arr_39 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5];
    }
    var_40 = ((var_4 ? (~-var_8) : ((var_6 | (!-1400863010)))));
    #pragma endscop
}
