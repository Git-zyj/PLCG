/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 -= (max(((11 << ((((var_3 ? var_17 : 133)) - 11206428797818298636)))), 0));
                        var_20 += (max(((var_7 ? (arr_4 [i_0] [i_0]) : var_2)), ((((arr_0 [i_2]) ? var_5 : var_12)))));
                        var_21 -= (((17136058346837782107 ^ 213567450) ? 217 : var_11));
                    }
                }
            }
        }
        var_22 += (((((-1446906771060719094 ? 63164 : -252692521013543482))) ? (max(1446906771060719093, ((((arr_3 [i_0]) ? 1 : (arr_1 [i_0])))))) : (((var_14 ? 134 : ((var_0 ? 104 : 230)))))));
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_13 [i_4] = ((((max((var_1 | var_1), var_5))) && (arr_11 [7])));
        arr_14 [8] = -0;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_23 -= ((((max((arr_16 [i_5]), 163))) ? (((((19883 ? 74 : 230))) ? (((max(19892, 39790)))) : ((var_6 ? 5735800952271638347 : 222)))) : 1369687790));
        var_24 = ((+((max((arr_15 [i_5]), (arr_15 [i_5]))))));
        arr_17 [i_5] = (max(((max((((arr_15 [13]) && 123)), (!1)))), ((((((arr_16 [13]) ? var_14 : var_3))) ? (((arr_15 [12]) ? 3184869210054453616 : 39804)) : ((max(var_16, var_10)))))));
        var_25 *= (arr_15 [i_5]);
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_26 = (max(((~(max(1563538018, var_12)))), ((((1 ? 115 : 19892))))));
        arr_21 [i_6] = (max((max(((var_1 ? (arr_18 [i_6] [i_6]) : (arr_16 [i_6]))), ((var_0 ? (arr_16 [8]) : (arr_19 [i_6]))))), (((-(arr_15 [i_6]))))));
    }
    var_27 = (min(var_27, (((~(max((46 & var_15), ((var_13 ? var_11 : var_14)))))))));
    var_28 = (((((((134 ? var_0 : var_16))) ? -var_11 : -10886)) >> ((((~var_4) >= var_18)))));
    #pragma endscop
}
