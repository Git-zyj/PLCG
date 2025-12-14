/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((!(arr_1 [i_0]))))));
        arr_2 [i_0] = ((+((var_9 ? (arr_0 [i_0]) : -25604))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_1] [i_2] = -17575415224613281365;
            arr_8 [i_1] [i_1] [i_1] = (arr_4 [i_1]);
            var_21 = (((2698893025 | var_6) != (((var_10 >> (arr_0 [i_1]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_3] = 871328849096270251;
            arr_13 [i_1] = ((~(8603 && 0)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_22 = ((var_10 | (arr_0 [i_1 + 1])));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_23 = ((var_1 ? var_7 : ((var_8 ? var_9 : var_3))));
                            arr_27 [i_1] [i_4] [i_1] [i_6] [i_1] = (((arr_9 [i_1 + 1] [i_5 + 1] [i_1]) ^ 18446744073709551615));
                            var_24 |= (((arr_1 [i_5 - 1]) ? -9223372036854775807 : 108));
                        }
                    }
                }
            }
            arr_28 [i_1] [i_1] [i_1] = ((2230337672504474084 ? 7069334791074676792 : 14460501829263178279));
            arr_29 [i_1] = var_13;
        }
        var_25 *= ((+(max(((((arr_15 [i_1] [i_1] [1]) % 55257))), -2147890718321627561))));
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_46 [i_10] [i_11] = (max((((arr_31 [i_11 - 2]) ? (arr_31 [i_11 - 1]) : (arr_40 [i_11 - 1] [i_11]))), 0));
                                var_26 = 17575415224613281350;
                                arr_47 [i_12] [i_11] [i_10] [i_11] [0] = (arr_35 [i_12] [i_10 - 2] [i_9] [1]);
                                arr_48 [i_8 + 1] [i_9] [i_9] [i_11] [i_9] [i_12] = max(1596074272, ((max((-425467197 || -4108), -31424))));
                                var_27 = (arr_34 [i_8]);
                            }
                        }
                    }
                }
                arr_49 [i_8] [0] = ((((min((arr_45 [i_8 - 1] [i_8 - 1] [i_9]), (arr_0 [i_9])))) ? (((arr_37 [i_8 - 1]) >> ((((17575415224613281352 >> (var_8 - 90))) - 127877966)))) : (arr_42 [i_8 + 1] [i_9])));
                var_28 = (max(var_28, ((min((arr_1 [i_8]), (max((arr_34 [i_8 + 1]), var_3)))))));
            }
        }
    }
    #pragma endscop
}
