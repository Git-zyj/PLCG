/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-(~var_9)))) != var_4);
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 &= (max(((max(139, (max(99, 0))))), 255));
        arr_2 [i_0] = ((((var_6 ? 112 : 1977043653))) & ((124 ? var_7 : 81)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1 - 1] = var_0;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_4] [i_4] [i_4] = (~var_3);
                        arr_15 [i_1] [i_2] [i_3] [i_4] = 139;
                        var_19 = (var_9 * var_9);
                        arr_16 [i_1] [i_1] [i_1] [i_1] = var_10;
                    }
                }
            }
        }
        var_20 *= ((var_14 & (1 / var_2)));
        arr_17 [i_1] = 117;
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        arr_20 [i_5] [i_5] |= ((((max(var_9, ((var_12 ? var_5 : 4294967295))))) - ((((((arr_6 [i_5] [i_5] [14]) ? 120 : 117))) ? (1 + var_8) : 117))));
        var_21 = ((((((arr_18 [i_5] [i_5]) ? var_2 : var_13))) ? (246681447 != -189290899) : (~0)));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_22 = ((((var_15 ? var_2 : ((var_5 << (15465179699860861671 - 15465179699860861665)))))) ^ ((122 ? (((var_8 ? 65527 : -124))) : ((4526590371366265393 ? var_13 : var_8)))));
        arr_24 [i_6] = var_2;
        var_23 = (((arr_21 [i_6]) ? ((~(157 >= 18473))) : (((~var_1) ? ((max(246, var_3))) : 123))));

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_24 *= (min((min(var_12, (-517581911 / var_10))), 1));

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_31 [i_7] = var_5;
                arr_32 [i_7] [i_6] = (max((max(-var_15, var_13)), 1));
                arr_33 [i_7] [i_7] [i_7] = ((!(var_9 != var_10)));
                var_25 = var_8;
            }
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_26 ^= 0;
                    arr_41 [i_6] [9] [i_7] [i_7] [i_10] [i_9] = (((var_10 / var_12) ? 4526590371366265413 : var_1));
                    var_27 ^= var_3;

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_28 -= (((~184) / 65527));
                        arr_44 [i_7] = 4;
                        var_29 = (arr_26 [i_7] [i_9 + 1]);
                    }
                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        var_30 = 1;
                        arr_47 [i_12] [i_12] [i_7] [i_12] [i_12] = ((16383 & (var_13 / var_12)));
                    }
                }
                var_31 ^= (((var_0 ? (arr_0 [i_9 - 3]) : (arr_30 [i_6] [i_6] [i_6]))));
            }
            var_32 = (min(var_32, (((~(-2147483647 - 1))))));
            var_33 = (max(var_33, ((max((((~((max(var_12, var_9)))))), ((max(var_10, var_4))))))));
            arr_48 [i_7] = (arr_34 [i_6] [9] [i_7] [i_7]);
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_34 = (((max((arr_7 [i_13]), ((var_3 ? (arr_28 [i_13] [i_13]) : var_8)))) & (((((min(34, var_2))) & var_0)))));
            var_35 = ((139 != (max(var_11, (-127 - 1)))));
            var_36 = ((((!(1360444396 & var_2))) ? 1 : 10));
            var_37 = (max((~1), var_13));
        }
    }
    var_38 = ((~(min((~var_11), 3))));
    var_39 |= (~var_10);
    #pragma endscop
}
