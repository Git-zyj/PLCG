/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (-3297305537222192022 + -3297305537222192022)));
    var_20 = ((((max(-2147483637, 96))) ? (((var_13 || (var_7 / -3297305537222192008)))) : (min((~var_7), var_6))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_21 = (min(var_21, ((min(((((min(88, -3297305537222192022))) ? -18446744073709551602 : (((22 ? 5528449234620273967 : 4294967295))))), (arr_0 [1]))))));
        var_22 = (max(var_22, ((((112 % -378795401) ? ((((var_6 || var_1) > ((-(arr_1 [i_0] [i_0 - 1])))))) : (arr_0 [i_0 - 2]))))));
        var_23 = ((((((((arr_0 [i_0]) - 1169284949))) + (min((arr_2 [i_0]), var_4))))) ? (((~((min((arr_0 [i_0]), (arr_0 [i_0]))))))) : (min(var_3, (arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_24 = (arr_5 [5]);
                    var_25 = ((((min((arr_4 [i_3]), (3125682344 + 18446744073709551602)))) ? (((arr_6 [i_1]) | 95)) : (arr_7 [4] [i_2] [4])));
                    var_26 = ((((((arr_7 [i_3] [i_2] [i_1]) % (arr_7 [i_1] [i_2] [i_3])))) ? (~var_4) : ((max(var_18, (arr_6 [i_1]))))));
                }
            }
        }
        var_27 = (max((((~949045847100553081) | ((min(837216219, 1169284960))))), (((-17625 ^ ((-622404360 ? var_14 : 1169284949)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_28 = (min(var_28, (arr_1 [i_4] [i_6])));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_29 -= (arr_5 [i_7 + 4]);
                                var_30 = (arr_1 [i_4] [i_5]);
                                var_31 = (((arr_17 [i_8] [i_8 + 2] [i_8] [i_8] [i_8] [i_8]) ? (arr_20 [i_7 - 2] [i_8] [i_8] [i_8 - 1]) : (arr_4 [i_7 + 2])));
                            }
                        }
                    }
                    var_32 = (arr_2 [i_4]);
                    var_33 = (((arr_10 [i_5]) / 135544000));
                }
            }
        }
        var_34 = ((-12732 ? (arr_16 [i_4] [i_4] [i_4]) : var_7));
        var_35 = arr_17 [4] [6] [i_4] [i_4] [i_4] [i_4];
        var_36 = (max(var_36, var_3));
    }
    #pragma endscop
}
