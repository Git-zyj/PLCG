/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 &= ((!(~var_5)));
        var_12 = ((var_10 << ((((2109644729 | 594853208) != ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : 58))))))));
    }
    var_13 = (min(var_13, ((((((~var_5) ? (((max(var_8, var_6)))) : ((58 ? 16272700070447478938 : var_1)))) | (var_4 >= var_10))))));
    var_14 = 87;
    #pragma endscop
}
