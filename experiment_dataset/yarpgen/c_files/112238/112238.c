/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= (min((arr_2 [i_0]), (min(1116122638, ((((arr_1 [i_0]) && (arr_0 [i_0]))))))));
        var_16 = ((-(arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = ((1116122659 ? (max((max(3694145764, 1116122668)), var_8)) : 1116122638));
        arr_7 [i_1] = ((1116122643 ? (max(((-(arr_5 [i_1]))), (!var_12))) : (arr_2 [i_1])));
        arr_8 [i_1] = var_11;
        var_18 = (max(((((max(1116122638, (arr_1 [i_1]))) < (!var_11)))), ((((((arr_6 [i_1]) & 979492776912012067))) ? (arr_6 [i_1]) : (min(var_5, var_7))))));
    }
    var_19 = var_8;
    var_20 = var_14;
    var_21 = (max(var_21, ((min(1116122659, ((-11 ? ((3178844633 ? 1 : var_8)) : -2112906010)))))));
    var_22 = (max(var_22, (~var_8)));
    #pragma endscop
}
