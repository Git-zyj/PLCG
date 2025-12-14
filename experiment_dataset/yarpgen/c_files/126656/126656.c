/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (1 || 129);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : 123)) | (max((arr_1 [i_0]), (max(-29877, (arr_1 [i_0])))))));
        arr_2 [i_0] = (max((arr_1 [1]), (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((((max(((min(var_16, 1100943701))), ((-836155945 ? var_11 : 129))))) ? (arr_1 [8]) : (((1 ? -836155947 : 6689)))));
        var_19 = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [4]) : (arr_1 [i_0])))));
        var_20 = (max(var_20, ((((127 + 836155920) ? -var_11 : ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10))))))));
    }
    var_21 = var_4;
    #pragma endscop
}
