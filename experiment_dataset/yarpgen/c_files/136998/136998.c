/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [2] [i_0] |= ((((min(var_10, var_1))) ? ((var_6 ? (arr_0 [6]) : var_8)) : (((arr_0 [8]) ^ (arr_0 [0])))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] = (min((arr_4 [i_1] [i_0] [i_1]), (min(var_10, (arr_1 [i_1 - 2])))));
            arr_6 [i_0] = var_8;
            var_12 = (arr_4 [i_0] [i_0] [i_1 - 1]);
            arr_7 [i_0] [i_1] [i_1] = (!14396223290783480246);
            arr_8 [i_0] = (((((min(16979, 1)))) ^ (((var_3 ? var_8 : (arr_3 [i_0] [i_0]))))));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_13 = var_7;
        var_14 *= (((((((var_9 ? (arr_10 [i_2]) : var_0)) >> (((arr_10 [17]) - 8161307524833244020))))) ? ((((arr_9 [i_2] [i_2]) % ((var_2 ? (arr_9 [i_2] [i_2]) : var_11))))) : (min(((var_5 ? (arr_9 [i_2] [19]) : (arr_10 [i_2]))), (arr_9 [i_2] [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [13] [i_3] = var_0;
                    var_15 = ((-(((arr_12 [i_4] [8] [i_2]) % (arr_12 [i_2] [i_3] [i_4 - 1])))));
                    arr_18 [i_2] [17] = ((-(arr_10 [i_2])));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_23 [i_5] = (((arr_14 [i_5] [i_5 - 1] [i_5 - 1]) ? (arr_14 [i_5] [i_5 - 1] [i_5 - 1]) : (max((arr_14 [i_5] [i_5 - 1] [i_5 - 1]), var_9))));
        arr_24 [i_5] = (-1363422909123843487 >= 122);
        arr_25 [i_5] [i_5] = var_8;
        var_16 = ((((((((min((arr_0 [i_5]), var_3))) <= (arr_0 [i_5]))))) | (arr_10 [i_5])));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            {
                arr_30 [i_7] [i_7] [i_7] = ((var_6 ? var_3 : 134));
                var_17 ^= var_0;

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_18 = (max((arr_16 [i_7] [i_7 - 1]), (arr_16 [i_7] [i_7 - 1])));
                        var_19 = ((((max((min(var_6, (arr_34 [i_6] [i_6] [i_6] [i_7] [i_6]))), (var_1 && var_4)))) ? var_9 : (((var_3 ? (arr_26 [i_7 - 2]) : (arr_31 [i_7 - 2] [i_8] [i_7 - 2]))))));
                        arr_36 [i_6] [i_6] [i_6] [i_7] [14] [i_6] = (arr_13 [i_9] [i_7]);
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_20 = (arr_34 [i_10] [i_7] [i_7] [i_7] [i_6]);
                        var_21 = (max(var_21, (arr_33 [i_6] [i_7] [i_8] [i_10] [i_7])));
                    }
                    arr_39 [i_6] [i_6] [i_8] [i_7] = ((min(((max(var_7, var_4))), ((1 ? 1 : 1967343491)))));
                }
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
