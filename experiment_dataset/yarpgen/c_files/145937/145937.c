/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 = ((((~(((arr_2 [i_0]) | (arr_0 [i_0 + 2] [i_0 + 2]))))) * (((((arr_0 [i_0] [i_0]) <= (((var_4 ? var_7 : 0)))))))));
        var_15 = (((((((4294967295 && (arr_1 [i_0]))) ? (arr_1 [i_0]) : (((((arr_0 [i_0 + 1] [i_0]) == (arr_2 [i_0])))))))) ? (arr_2 [i_0 + 1]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = 3606367187;

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_2] = var_11;
            var_16 = ((min((arr_1 [i_2]), (arr_4 [i_1 - 1] [i_2 - 1]))));
            var_17 = 15;
            var_18 += (((((arr_7 [i_1] [i_1] [i_2 - 2]) ? (2555726363 < -5607937470472204841) : (arr_8 [i_1 - 2] [i_2 - 2] [11]))) < (max((-9223372036854775807 - 1), 4294967295))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_1] [i_1] [i_1] |= 65535;
            var_19 ^= (-5607937470472204841 != 3618389289);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_20 = ((((max((arr_0 [i_1] [i_1]), -9223372036854775799))) ? (((3606367160 | 37907) ? (min((arr_8 [i_1 - 1] [i_4] [i_4]), (arr_9 [i_1]))) : 0)) : ((480 ? 6151 : -1))));
                        var_21 = ((((2555726364 ? (arr_15 [i_5] [i_3] [i_4] [i_3]) : 49978533))));
                        arr_20 [i_3] [i_3] [i_4] [i_4] [i_5] = (((max(8375055489509911411, 273315731)) / (arr_3 [i_1 - 2])));
                    }
                }
            }
            arr_21 [i_1] [i_1] [i_3] = ((-5607937470472204841 & (((((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) < (arr_17 [i_1] [i_1] [i_3] [i_1] [i_3] [i_3]))) ? ((var_11 ? (arr_17 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_3]) : var_11)) : (max((arr_1 [i_1]), var_11))))));
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_22 = (arr_12 [i_1 - 2] [i_1 - 2] [i_1]);
            var_23 ^= (arr_23 [i_1 + 1] [i_1]);
            arr_25 [i_1 - 1] = (((arr_9 [3]) ^ (arr_12 [i_1 - 1] [i_6] [i_1])));
            arr_26 [i_1] [i_1] [i_1] = (((max((arr_18 [i_1] [i_1]), (arr_23 [i_6 + 1] [i_1 + 1]))) != (min((((var_6 != (arr_17 [i_6] [i_6 + 1] [i_6] [i_1] [i_1 - 1] [i_1 - 1])))), var_0))));
            arr_27 [i_1] [i_1] [i_6] = ((((5607937470472204824 ? (((arr_12 [i_1 + 1] [10] [i_1]) & (arr_4 [i_6] [i_1]))) : var_7)) < (arr_24 [i_1])));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_24 += (arr_29 [i_7]);
        arr_32 [i_7] = ((-(arr_28 [i_7])));
        var_25 = (~4244988756);
    }
    for (int i_8 = 4; i_8 < 16;i_8 += 1)
    {
        var_26 = (max(var_26, (arr_34 [i_8])));
        var_27 = (min(var_27, (arr_34 [i_8 + 1])));
        var_28 += (max((((arr_28 [i_8]) / (arr_28 [i_8]))), (arr_28 [i_8 - 3])));
        arr_35 [6] [i_8] = ((max(63673, 3618389293)));
    }
    var_29 = (var_7 < var_12);
    var_30 += min(((((49978540 - 479) + 2555726348))), ((((var_3 ? var_10 : 50850)) % var_5)));
    var_31 = (max((max(((943902989 ? -321511324 : 3279310111392968105)), (((0 ? var_12 : var_4))))), ((min(var_4, var_8)))));
    var_32 = ((var_2 ? (max(var_12, var_11)) : ((((var_10 == ((var_11 ? var_8 : var_10))))))));
    #pragma endscop
}
