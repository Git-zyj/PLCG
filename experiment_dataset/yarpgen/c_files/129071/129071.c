/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 -= (((var_10 >> (((arr_2 [3]) - 15986405904849829107)))) > (((arr_1 [2]) << (((arr_0 [0]) - 4162180674)))));
        var_18 = (arr_1 [i_0]);
    }
    var_19 = (max(var_19, ((min(var_2, ((~(~65531))))))));
    #pragma endscop
}
