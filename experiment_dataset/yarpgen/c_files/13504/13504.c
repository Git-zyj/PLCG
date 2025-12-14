/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(((((arr_1 [i_0 - 1]) - (arr_1 [i_0 - 1])))), ((((arr_0 [i_0]) ? 1556261001 : (arr_1 [i_0]))))));
        var_17 = ((((((arr_1 [i_0]) | (arr_1 [i_0])))) ? 60154 : ((((arr_1 [22]) >= (arr_0 [i_0]))))));
        arr_2 [i_0] = (((((!((!(arr_1 [i_0])))))) <= 43775));
        var_18 = var_11;
    }
    var_19 = (max(var_19, var_8));
    #pragma endscop
}
