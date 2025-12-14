/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((11 ? 1119920270 : -28))) ? var_11 : (~var_9))) & ((~((-28 ? 7965 : 1119920249))))));
    var_20 |= ((var_4 >> (((3667177318 ^ 1) - 3667177296))));
    var_21 = (((((var_2 ? (!var_5) : -2131058087))) || (((((11 ? var_18 : 152)) ^ (((-96 + 2147483647) << (var_10 - 2627))))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_22 *= (min((((((var_6 >> (var_17 - 169)))) ? (max((arr_1 [1]), (arr_0 [i_0]))) : (((((arr_1 [6]) || 7963)))))), (((1 ? 977661305 : 57570)))));
        var_23 = ((var_9 ^ var_12) - ((((var_11 ? var_5 : (arr_1 [i_0]))) ^ (((var_13 ? 227 : 1))))));
        var_24 = ((~(((-1 / 1119920246) ? (((arr_1 [i_0]) ? var_15 : -50)) : (arr_1 [i_0])))));
        arr_2 [i_0] = (((-50 + 2147483647) >> (227 - 209)));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_25 = ((((max(0, ((((arr_6 [i_1 + 1]) || -941622099)))))) ? ((max(1119920246, 1))) : (max(-6004584845963960633, (((123 ? -121 : 3988927651526830384)))))));
                    var_26 = (!var_15);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_27 = ((2131058101 == (max(var_11, 3599709312794893565))));
                                arr_15 [i_1] = var_14;
                                arr_16 [i_1] [3] [i_3 + 2] [i_5] |= ((var_11 / ((((((arr_13 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) ? (arr_13 [i_5] [i_4] [5] [12] [i_2] [i_1]) : (arr_7 [i_3] [4])))) ? (min((arr_5 [i_1]), 596217455)) : (var_15 - 121)))));
                            }
                        }
                    }
                    arr_17 [i_3 + 2] [i_2 + 2] [i_1] [i_1] = -var_10;
                }
            }
        }
        arr_18 [i_1] = var_2;
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    {
                        var_28 = var_17;
                        arr_29 [i_8] [i_7] [i_8 + 2] [i_6 - 1] = (((((1 ? -1119920249 : 2131058099)))) ? ((max(((659427598 >> (((arr_8 [i_6] [i_7]) - 12605)))), (1 ^ 4431)))) : (((((var_4 ? 1 : var_11))) ? (2131058094 && 1) : (arr_25 [i_8] [i_8] [0] [i_8]))));
                        var_29 = -var_9;
                        var_30 = ((((arr_5 [i_6]) ? ((200 ? var_11 : var_4)) : var_9)));
                    }
                }
            }
        }
        var_31 = (max(var_31, 7083));
    }
    #pragma endscop
}
