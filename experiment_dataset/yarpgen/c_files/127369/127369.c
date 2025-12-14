/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((-(((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        var_10 = (max(((-(arr_0 [i_0]))), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_11 = ((-((((!104) < (max(9077563337799531335, (arr_5 [i_1]))))))));
        var_12 = (((((~(max((arr_3 [i_1]), (arr_2 [21])))))) ? (((arr_5 [i_1 - 3]) ? (~9077563337799531335) : 17)) : 9077563337799531335));
        var_13 = (max((((arr_2 [i_1 - 1]) ? (arr_2 [i_1 - 3]) : (arr_5 [i_1 - 2]))), (((arr_0 [i_1 + 1]) ? 91 : (arr_5 [i_1 - 3])))));
    }
    var_14 = (!var_3);
    var_15 = (~-4);
    #pragma endscop
}
