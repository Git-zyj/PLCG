/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_7 & var_8) * (var_2 / var_3))) * (((~((min(var_7, var_9))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [0] = ((~(((~var_4) ^ ((~(arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] = -1;
        arr_5 [i_0] [i_0] = (max(((((!(arr_2 [i_0]))))), (min((min(var_5, (arr_2 [i_0]))), (arr_0 [i_0])))));
        var_11 |= ((((((((var_2 ? var_3 : var_4)) - ((-(arr_2 [i_0]))))) + 9223372036854775807)) >> (((var_8 / var_0) + (var_9 / var_7)))));
    }
    #pragma endscop
}
