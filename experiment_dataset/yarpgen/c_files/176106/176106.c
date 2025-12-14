/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 |= (((!var_1) ? ((-var_10 & (arr_2 [i_0]))) : (((((-5163385340421991492 ? 0 : (arr_1 [1])))) ? (min(var_10, (arr_2 [i_0]))) : (((max(var_7, (arr_1 [1])))))))));
        var_13 = (max(var_13, (arr_1 [0])));
        arr_3 [i_0] = ((((((arr_2 [i_0]) ? -24576 : ((25507 ? 19414 : 1))))) ? (!-25507) : ((~(arr_1 [i_0])))));
        arr_4 [2] |= (max(1, 1));
    }
    var_14 = var_4;
    #pragma endscop
}
