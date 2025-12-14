/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(var_7, ((((arr_2 [i_0]) ? var_6 : var_10)))))) ? (min((min((arr_0 [i_0 + 1] [i_0]), 576460748008456192)), ((1 ? 576460748008456192 : var_2)))) : var_3));
        var_12 = 0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 1] [i_1] [i_0] [i_0] = (((((var_6 ? var_2 : var_2))) ? (max(var_2, (arr_2 [i_1 - 1]))) : ((var_8 ? (1 > 0) : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 *= (arr_6 [i_0 + 1] [i_1] [i_2] [11]);
                                var_14 = (min((max((arr_6 [i_3 + 1] [i_3 - 4] [i_3 - 1] [i_3 - 2]), -576460748008456192)), 2831516011));
                            }
                        }
                    }
                    var_15 = (max(var_9, var_9));
                }
            }
        }
        var_16 |= (((((var_4 ? ((var_5 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 1206365356)) : (arr_11 [i_0] [6] [i_0 - 1] [1] [i_0])))) && var_11));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_17 = (max((max((max((arr_14 [i_5]), var_0)), ((((arr_17 [i_5]) == var_1))))), var_1));
        var_18 = (min((min((min(0, var_9)), ((min(var_9, var_1))))), ((min((min((arr_14 [13]), (arr_14 [23]))), var_8)))));
    }
    var_19 |= ((((var_11 ? 2831516011 : (((-1 + 9223372036854775807) >> (2831516041 - 2831516029))))) > var_0));
    var_20 = ((((max((max(var_1, 576460748008456179)), var_1))) ? (31 - var_3) : var_6));
    var_21 = ((((max(((112 ? 4268937213409843429 : 112)), (((4891635113717138154 ? 44503 : var_2)))))) ? (((((max(-113, var_10))) ? ((var_0 ? 0 : var_2)) : var_10))) : (max(var_3, (((var_9 ? var_10 : var_4)))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_22 = ((-517250693260302103 ? -6 : -31));
                    var_23 = (((arr_21 [4] [i_7 - 1] [0]) ? 19 : 633033816));
                    var_24 = (((var_11 + 2147483647) >> (var_7 - 2289091395)));
                    var_25 = (((arr_16 [i_6] [i_7 - 1]) ? var_4 : (arr_24 [i_6] [i_6] [i_6] [i_6])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_26 = ((var_11 ? (arr_23 [i_6] [10]) : var_8));
                                var_27 += 10;
                                var_28 = (((arr_26 [7] [i_7 + 1] [i_8] [i_10]) ? var_4 : (arr_26 [i_6] [i_7 + 1] [i_7 + 1] [i_7])));
                            }
                        }
                    }
                }
                var_29 = (arr_31 [i_6] [i_6]);
                var_30 = var_0;
                var_31 = ((((((arr_25 [i_6] [9] [i_7 - 1]) * var_10))) ? ((max((arr_25 [i_6] [i_6] [i_7 - 1]), (arr_25 [i_6] [i_7] [i_7 + 1])))) : ((0 ? 324885207 : 6114840600752487497))));
            }
        }
    }
    #pragma endscop
}
