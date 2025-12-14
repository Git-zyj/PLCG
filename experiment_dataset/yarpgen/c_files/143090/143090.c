/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9007190664806400;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((((max(-1593639009247595147, 9007190664806400))) ? (65280 - -9007190664806381) : 15));
        arr_5 [13] = (-((var_13 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = (((((65298 ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))) ? (max((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1]))) : (min((arr_8 [i_1] [i_1]), var_13))));
        var_17 = arr_7 [i_1];
        arr_10 [i_1] [2] = 17041871885744920587;
    }
    #pragma endscop
}
