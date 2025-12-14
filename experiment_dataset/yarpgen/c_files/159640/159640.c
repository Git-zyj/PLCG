/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((!(!63)))), (max(64, -46))));
    var_12 = (min(var_12, var_3));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_13 = ((((125829120 ? 1 : 12)) | var_7));
        arr_2 [i_0] = (~(((arr_0 [i_0]) ? 124 : (arr_0 [i_0]))));
    }
    var_14 = ((var_9 || (((1 ? (var_6 < 57729) : 115)))));
    #pragma endscop
}
