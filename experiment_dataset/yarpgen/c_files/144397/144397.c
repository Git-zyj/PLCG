/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((((((-674331043 ? 9002801208229888 : 7065401494125172846)) | ((3211825113154105346 ? 128 : 15098714203983357536))))) ? (min((((-(arr_0 [i_0])))), (-118 + 7065401494125172846))) : (((((var_12 ? 69818988363776 : (arr_1 [i_0]))) - (arr_1 [i_0]))))));
        var_14 = ((((min(((18014398475927552 ? var_1 : var_8)), (((18446744073709551612 ? 103 : (arr_0 [i_0]))))))) ? ((((((arr_0 [i_0]) ? var_11 : 1))) ? ((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_11))) : (min((arr_0 [2]), var_8)))) : (max((max(var_0, var_7)), (var_10 ^ -69818988363776)))));
    }
    var_15 = ((((((((var_11 ? var_6 : 9223354444668731392))) ? ((var_10 ? var_10 : var_8)) : (!-1)))) ? ((((!var_4) > (min(var_3, var_2))))) : (((((var_2 ? -1357776482776208391 : var_5))) ? ((101 << (var_12 - 25662))) : (var_2 < 18014398475927553)))));
    var_16 = ((((max(((min(var_12, 213))), (min(var_9, var_11))))) + (((((10 ? 6733134683635227321 : var_1))) ? (max(var_5, 228140948646261673)) : (((var_1 >> (var_11 - 2037498861))))))));
    #pragma endscop
}
