/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_10 * (!2441560486)))));
    var_16 = (((27564 / var_13) || ((max(var_1, (53762 || var_10))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (min(var_17, var_4));
        var_18 = (max((min(-197405970, -6167)), var_11));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (min((((arr_2 [i_0]) ^ (arr_2 [i_0]))), ((min(var_11, (-127 - 1))))));
                    arr_12 [i_0] [i_0] [i_0] = 65535;
                    var_20 = (((~var_6) & (min(-923284940291962752, 1))));
                    var_21 |= (arr_8 [i_0] [i_0]);
                    var_22 = (max(var_22, (((((((var_11 ? 1 : var_3)) ? (((min(var_8, var_7)))) : var_1)))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 *= (224 & 24);
        var_24 = (((~var_3) ? var_11 : ((((min(-94, var_7))) / -1))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_25 = (min(var_25, (arr_18 [i_4])));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 |= var_14;
            var_27 += ((~var_10) | 9);
            arr_21 [i_4] [i_4] [i_5] = 31;
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_28 = (((65535 ? 1 : (arr_25 [i_4] [i_4] [i_4] [i_4]))));
                        var_29 = (max(var_29, (((-1 ? (arr_23 [i_4] [i_4] [10]) : (arr_23 [i_7] [i_7] [6]))))));
                        arr_27 [i_4] [i_4] [i_7] [i_6 + 1] [i_6] = var_4;
                        var_30 = (min(var_30, ((0 ? (arr_20 [i_6 - 1]) : ((0 ? (arr_20 [i_7]) : var_0))))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_31 = (max(var_31, var_13));
            arr_30 [i_4] [i_4] [i_4] = 1;
        }
        var_32 &= ((var_6 ? (var_0 == var_11) : 1));
        var_33 = (68719476735 >= (arr_6 [i_4] [i_4] [i_4]));
        var_34 = var_3;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_35 = (arr_32 [i_9]);
        var_36 = var_10;
    }
    #pragma endscop
}
