/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((((~((209 ? var_4 : 83))))) ? (((((var_2 ? var_10 : -12240))) ? ((var_7 ? (-127 - 1) : 15070)) : ((max(var_5, var_7))))) : 259)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, ((((~201) ? (~255) : (min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 0)), ((1 << (1209199185 - 1209199164))))))))));
        var_13 -= (max(((((((~(arr_2 [i_0]))) + 2147483647)) << ((((195 ? 1 : (arr_1 [i_0] [i_0]))) - 1)))), 12196));
        var_14 = ((0 ? (max(((3 ? 0 : 2542331202)), 23220)) : (((4323455642275676160 ? 0 : 23229)))));
        var_15 = ((((((((arr_1 [i_0] [i_0]) - (arr_2 [i_0])))) ? (arr_1 [i_0] [i_0]) : ((-27140 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))) ? ((41502 ? (((0 ? (arr_0 [i_0]) : (arr_2 [i_0])))) : ((8701729015515186952 + (arr_2 [i_0]))))) : ((((max((arr_1 [i_0] [i_0]), 9223372036854775807)) - (((268435455 ? (arr_2 [i_0]) : 0)))))));
        var_16 = 0;
    }
    #pragma endscop
}
