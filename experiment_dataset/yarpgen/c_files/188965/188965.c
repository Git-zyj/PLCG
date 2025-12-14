/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~((((min(15, var_6))) ? (18446744073709551598 >= 0) : 11)));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_17 = max((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), (arr_1 [i_0]))))), (((arr_0 [i_0] [i_0 - 2]) * (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((arr_1 [i_0]) ? (((857784375050708911 | 8184765221698939053) & (11364634198078315377 & 6958846978836079562))) : (((arr_0 [i_0] [i_0 - 2]) ? (arr_0 [i_0] [i_0 - 2]) : (arr_0 [i_0] [i_0 - 2]))));
    }
    var_18 = min((((max(var_0, var_8)) | var_7)), (0 - 13689164715393705519));
    #pragma endscop
}
