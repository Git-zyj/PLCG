/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = (max(var_18, (-2292918542 % 2292918543)));
        var_19 = ((-(min((max((arr_0 [i_0]), 2292918542)), (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (max(2002048771, (((88 <= (arr_4 [i_1]))))));
        var_20 ^= ((2002048754 ? 1 : ((((2292918532 / (arr_2 [i_1]))) | (arr_4 [i_1])))));
        var_21 += (max((((76738168 ? 21547 : 1))), ((+(((arr_3 [i_1]) ? 2292918522 : (arr_2 [i_1])))))));
    }
    var_22 = var_14;
    #pragma endscop
}
