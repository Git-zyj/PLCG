/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((!(var_3 != var_12)))));
    var_15 = -1064639798371567331;

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = (var_6 ? 16 : (!49));
        var_17 = (max(var_17, 974474327320172628));
        var_18 *= (((3928874328 ? -255 : ((-1064639798371567331 ? 3928874328 : 3928874312)))) | 3928874331);
        var_19 = arr_1 [i_0];
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 = (((((var_4 ? 1300239350 : (arr_0 [i_1])))) << (((((((var_10 ? 2884211879 : 366092967))) ? ((min((arr_5 [i_1] [3]), 3928874329))) : var_3)) - 2975075112))));
        var_21 = ((15 > -2394847528381185213) ? (arr_0 [i_1]) : ((min((((arr_2 [i_1]) ? -13 : var_4)), -32))));
        arr_6 [i_1] = -8446;
        var_22 = (min(var_22, 14));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_4] = (min(((min(0, 8433))), var_1));
                        var_23 = (max(var_23, ((((((arr_1 [8]) ? (min(var_7, -16)) : (arr_0 [i_3]))) > (((((min(104, (arr_4 [i_1] [4])))) ? (((arr_12 [8] [i_3] [i_4]) / var_5)) : (arr_2 [10])))))))));
                        var_24 = ((~(min((var_6 - var_6), -7704721343024554497))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_17 [i_5] = var_0;
        var_25 = (arr_16 [i_5] [i_5]);
        var_26 += (((+(((arr_16 [i_5] [i_5]) ? var_5 : (arr_15 [i_5] [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_27 = (min(var_27, (((((48 ? 3928874328 : var_13)))))));
        var_28 *= ((min(var_4, (((arr_18 [i_6]) ^ (arr_19 [0] [i_6]))))));
        arr_21 [i_6] = (max(((var_13 ? 366092967 : 38020)), (((~(((arr_18 [i_6]) ? var_6 : var_12)))))));
        var_29 = (min(var_29, -2302722248009414939));
    }
    #pragma endscop
}
