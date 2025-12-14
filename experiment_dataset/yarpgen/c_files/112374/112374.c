/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_12 ? (var_2 && var_2) : (var_16 && var_1))), (((var_6 && (((var_4 ? var_4 : var_0))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(var_18, ((((arr_0 [i_0]) > ((((arr_0 [i_0]) && ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 3)))))))))));
        arr_2 [i_0] = ((((((max(204, (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_0 [12]) : (((((-(arr_1 [i_0] [13])))) ? var_2 : (26 + 0))));
    }
    var_19 = (max(26, 230));
    #pragma endscop
}
