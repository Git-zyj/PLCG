/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [4] = ((~(((max(var_5, (arr_1 [i_0])))))));
        var_18 = (((((+(((arr_0 [i_0 + 1] [7]) - var_0))))) ? (((((max(var_4, (arr_0 [i_0] [i_0]))) == var_13)))) : (arr_1 [i_0])));
        var_19 = (((((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1]))) | ((~(arr_1 [i_0 - 1])))));
        arr_3 [i_0] = ((!((((((var_6 ? var_11 : var_14))) ? var_16 : (arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] &= (arr_1 [3]);
    }
    var_20 = (min(var_20, ((max(var_1, 10351276810673209847)))));
    #pragma endscop
}
