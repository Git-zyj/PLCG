/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((((((max((arr_1 [i_0]), 774325774))) ? (1007349806 % var_2) : (arr_2 [i_0])))) ? (((min((arr_0 [i_0]), var_2)))) : (~var_4)));
        var_13 = (max(var_13, ((((0 - var_10) / 9223372036854775807)))));
    }
    var_14 = 0;
    #pragma endscop
}
