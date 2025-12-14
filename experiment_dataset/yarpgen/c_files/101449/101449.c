/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 37693;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0 - 3]) ? -121 : 7168979398320437652));
        arr_5 [i_0] = 45;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_10 [i_1] [6] = -596307106;
        arr_11 [i_1] = 6;
        arr_12 [i_1] [i_1] = (~3);
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_21 [i_2] [i_3] [i_4] = ((-(arr_20 [i_2 - 1])));
                    arr_22 [i_2] [i_2] [i_2] = ((!(((((arr_14 [i_3] [i_4]) == (arr_16 [i_2] [i_2])))))));
                    arr_23 [14] [14] [i_4] [i_4] = (((arr_16 [i_2] [i_4]) || ((7168979398320437652 && (arr_15 [i_2 - 1] [i_2 + 1])))));
                }
            }
        }
        arr_24 [i_2 - 1] = (((((-((var_19 ? (arr_14 [7] [7]) : -45))))) ? (!-46) : (((arr_15 [i_2 - 1] [11]) ? ((((-18 != (arr_17 [i_2]))))) : (2281144731 % -2)))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    arr_30 [i_2] [i_6] [i_2] [8] = ((-(((33423360 ? (arr_25 [i_6]) : 1062119974)))));
                    arr_31 [i_2] [i_6] [i_5] [i_6] = -96;
                    arr_32 [i_6] = ((((var_4 / (~-91))) <= 95));
                    arr_33 [i_6] = (((-9223372036854775806 || 0) | 105));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                arr_40 [i_8] = (!110);
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_49 [i_9] = ((((((~127) <= ((min(var_14, var_10))))))) & (arr_15 [i_9] [i_8]));
                                arr_50 [i_7] [i_8] [i_9] [1] [i_11] |= ((1 ? 0 : 169));
                                arr_51 [i_10] [i_10] [i_10] [i_10] [i_9] = (((((~(arr_8 [i_10 - 3] [i_8 + 2])))) ? (((arr_19 [i_10 - 3] [i_8 + 2] [i_11 - 1]) ? (arr_15 [i_10 - 3] [i_8 + 2]) : (arr_39 [i_10 - 3] [i_8 + 2]))) : 1413826684));
                                arr_52 [9] [i_9] [9] = ((-2067018905 != (var_3 || var_17)));
                            }
                        }
                    }
                }
                arr_53 [i_8] = 150;
            }
        }
    }
    var_21 = (((max(-var_3, ((46 ? var_8 : 2013822577)))) ^ ((((7839688065614245141 > (min(var_6, var_7))))))));
    #pragma endscop
}
