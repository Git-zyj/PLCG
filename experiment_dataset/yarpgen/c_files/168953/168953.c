/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 += (((((var_18 ? -12093 : 26812)))));
        var_21 = var_12;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (!978557007);
        var_22 = ((-((((min(var_5, -262144))) ? 1 : (~1)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    arr_13 [i_3] = (max(59178, 1));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, (1 / 64)));
                                arr_19 [i_3] [i_3 + 2] [i_3 + 1] [i_4] [i_5] [i_5] [i_3 + 2] = (var_16 == (min(9223372036854775807, (arr_3 [i_5] [i_3 + 1]))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_24 += ((1 ? -2221587616632671103 : -19355));
                                arr_32 [i_2] [i_2] = 16256;
                                var_25 = (((max(10291539359215961931, 29041)) / ((min((arr_10 [i_8] [i_8 + 2] [i_9 - 2]), var_0)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_35 [i_8 - 1] [i_7] [i_2] = ((31457280 ? var_8 : 1));
                        var_26 = (min(var_26, (((1 ? (-32767 - 1) : 8192)))));
                        var_27 = 32767;
                    }
                    var_28 = min((min((min(var_10, (arr_23 [i_2] [i_7] [i_8]))), -var_2)), ((((arr_12 [i_2] [i_7] [i_8]) >= 2147483647))));
                    arr_36 [i_2] [i_7] [i_8] = (min(((((((1 ? var_1 : var_8))) == (min((arr_4 [i_8]), var_18))))), ((max(var_11, var_9)))));
                    var_29 ^= (min(var_15, ((((min(var_4, var_6))) ? (var_9 - 1) : -6961946931414200925))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    arr_41 [i_13] [i_12] [i_12] [i_2] = (((((var_8 ? (((arr_26 [i_2] [i_2] [i_12] [i_2] [i_13]) - var_12)) : 42680))) ? (~-4611686018427387904) : ((((1 == var_12) ? (arr_8 [i_2] [i_13]) : -23407)))));
                    var_30 += var_9;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_31 = (min(var_31, ((min(((4096 - (arr_31 [i_2] [i_13] [i_14] [i_15]))), (((((min(20330, var_13))) > var_2))))))));
                                var_32 = 15721;
                                var_33 = (~var_2);
                                var_34 -= (min((var_9 && 96), ((32767 ? (max(var_11, var_6)) : (((var_12 ? var_11 : var_19)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 9;i_17 += 1)
                        {
                            {
                                var_35 = ((min(((4080 ? -1787653814 : 9222246136947933184)), -11844)));
                                var_36 = (var_17 == 3970);
                                var_37 = (min((min(((((arr_38 [i_17]) > var_5))), ((-32065 ? var_13 : -7783805228663053744)))), (min(-3360211267770850594, 1))));
                                var_38 = (max(var_38, var_12));
                                arr_54 [i_17 - 1] [i_16] [i_13] [i_2] [i_12 - 3] [i_2] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = ((((min(var_17, (min(var_8, var_11))))) ? (((((var_13 ? var_19 : var_15)) - var_15))) : ((max(3683, var_9)))));
    var_40 = var_2;
    var_41 = (min((min((((16128 ? 6 : var_2))), ((var_10 ? 1 : var_10)))), (-1861635921 + var_17)));
    var_42 = (1 & -32756);
    #pragma endscop
}
