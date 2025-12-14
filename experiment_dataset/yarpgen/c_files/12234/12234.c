/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((var_0 ? (var_16 <= var_13) : var_11))), (min(((max(var_4, var_12))), (max(var_14, var_13))))));
    var_18 = (max((min(65518, (var_0 <= var_11))), var_8));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (max(var_19, (((-(min((min(var_15, (arr_2 [6]))), (arr_2 [12]))))))));
        var_20 = (max(var_20, (((+(min((arr_0 [0] [0]), (arr_2 [4]))))))));
        arr_3 [i_0] = (((((-(((arr_1 [i_0]) + (arr_1 [i_0])))))) - var_15));
        var_21 = ((((((arr_0 [i_0] [i_0]) ? var_9 : (arr_1 [i_0])))) % (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
