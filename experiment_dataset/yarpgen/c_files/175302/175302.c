/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~0) * var_14)) > var_1));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((((((arr_1 [i_0]) ^ (arr_0 [i_0])))) ? (var_5 / var_3) : 1))) ? (((((arr_0 [i_0 + 1]) != 10863268643287651688)))) : 10863268643287651693)))));
        arr_2 [i_0 - 2] [i_0 - 2] = ((((-(arr_1 [i_0 - 2]))) >= ((((arr_0 [i_0 + 1]) <= (arr_1 [i_0 - 1]))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_18 = min((((508 ^ var_9) - (arr_6 [i_1] [i_1]))), (((!(((-(arr_4 [i_1]))))))));
        var_19 -= ((min(var_12, (arr_5 [i_1 + 1]))));
    }
    #pragma endscop
}
