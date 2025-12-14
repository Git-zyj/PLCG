/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((~var_2), (~-113)));
    var_16 -= var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, (((((0 ? (max((arr_0 [i_0] [i_0]), var_14)) : ((((arr_1 [i_0] [i_0]) ^ 699405590))))) | ((((max(699405596, (arr_0 [i_0] [i_0]))) + (~210)))))))));
        var_18 ^= ((((+(((arr_2 [i_0]) ? var_2 : var_12)))) != ((((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))))));
        var_19 = (~699405596);
        arr_3 [i_0] = (min((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((max(((max((arr_2 [i_0]), (arr_0 [i_0] [i_0])))), (((arr_2 [i_0]) ? 699405590 : 699405594)))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = -60;
        var_20 *= (((arr_5 [i_1] [i_1 - 1]) << (var_1 - 7675205461158778992)));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((((min((arr_9 [i_2]), (max(var_10, var_7))))) ? (((-699405583 <= 1406885477) ? (((arr_8 [i_2]) % (arr_9 [i_2]))) : (arr_8 [i_2]))) : (((min((-127 - 1), (arr_8 [i_2])))))));
        arr_11 [i_2] [i_2] = ((!((((-(arr_9 [i_2])))))));
    }

    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_21 = ((var_6 ? (min(675687138373832300, (min(var_2, -1049219067)))) : ((((arr_14 [i_3 - 2] [i_3 + 2]) ? (arr_14 [i_3 - 2] [i_3 + 2]) : (arr_14 [i_3 - 2] [i_3 + 2]))))));
        var_22 -= (((arr_12 [i_3]) ? 1 : var_14));
        var_23 = (arr_9 [i_3 - 1]);
        var_24 = ((min(0, var_1)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_18 [18] |= arr_15 [16] [i_4];
        var_25 = (((-1 ? (arr_17 [i_4]) : var_12)));
    }
    #pragma endscop
}
