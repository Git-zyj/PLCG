/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((((var_2 - var_9) ? ((max(var_6, var_9))) : var_8))) ? ((var_12 ? ((55846 ? var_2 : var_8)) : (172 || 1))) : var_11)))));
    var_18 = var_11;
    var_19 = (max(var_19, ((var_10 ? -2066578440450184293 : (((-(max(-460799083, 1)))))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_20 = (max((((9223372036854775793 == 1) ? (arr_0 [i_0]) : (arr_1 [i_0 - 2]))), ((min((((arr_0 [i_0]) ? 549472556 : 1456909891)), ((((arr_1 [i_0]) ? -55 : 1))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((min((arr_3 [i_2 + 1]), 1)));
                            var_21 ^= 52452;
                            var_22 = 37191;
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_23 = (arr_1 [i_1]);
                            var_24 = ((-66 ? ((14887598583326704656 & (((-(arr_13 [4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0])))))) : 15393162788864));
                        }
                        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_25 = (min((arr_3 [i_0]), var_16));
                            var_26 ^= ((min(18, 1)));
                            var_27 = (((((var_9 ? ((min((arr_14 [i_0] [i_1] [i_3] [i_3] [i_2 - 2] [1] [i_2 - 1]), 22849))) : ((19582 ? 1 : 42))))) ? (arr_7 [i_3] [i_3] [i_3] [0] [i_6] [i_6]) : (arr_10 [i_2])));
                            var_28 = (((((arr_14 [i_0] [i_0] [i_1] [i_1] [1] [i_3] [i_6]) < ((var_11 ? var_9 : var_1)))) ? (((var_3 ? (((arr_14 [i_3] [i_1] [i_2] [i_3 - 2] [i_6] [i_6] [i_0]) ? 1 : (arr_13 [18] [i_1] [i_2] [i_3] [8] [i_3 - 1] [i_2]))) : var_0))) : (arr_3 [i_2])));
                        }
                        arr_16 [i_0] [i_0] [i_2] [i_3] = (min(((var_13 ? 28344 : (arr_14 [13] [i_0 + 2] [i_3] [i_3 + 1] [i_2] [i_2 + 2] [i_3]))), (min(576215369, (arr_14 [i_0] [i_0 + 2] [i_2 - 1] [i_3 + 1] [i_0] [i_2 + 2] [i_1])))));
                        var_29 = (arr_3 [i_2 - 4]);
                    }
                }
            }
        }
        arr_17 [i_0] = ((118 ? -48 : 46));
        arr_18 [i_0] = ((((arr_4 [i_0]) == (arr_6 [i_0]))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_30 ^= ((-(arr_10 [i_7])));
        var_31 = (min(var_31, 3411270569));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_32 = (min(var_32, (((~((((arr_0 [i_8]) != 1))))))));
        var_33 = arr_7 [i_8] [i_8] [i_8] [i_8] [i_8] [10];
    }
    #pragma endscop
}
