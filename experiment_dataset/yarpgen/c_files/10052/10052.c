/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_12, ((var_5 + (var_1 <= var_8)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (((((arr_2 [16]) / 3801921519)) | (((arr_2 [i_0]) ^ 493045776))));
        var_19 = ((((max((((var_10 && (arr_2 [i_0])))), (arr_0 [i_0] [i_0])))) && (((var_1 ? (min((arr_0 [i_0] [i_0]), -418911101)) : (((min((arr_3 [i_0] [7]), 1)))))))));
        var_20 = (var_14 > ((((max(493045801, 6)) - 1))));
    }
    var_21 = 1;
    #pragma endscop
}
