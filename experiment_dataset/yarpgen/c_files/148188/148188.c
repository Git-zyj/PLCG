/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max(var_6, var_2)))));
    var_12 = (min(((((45844 ? 1 : 0)) >> (var_4 - 144))), var_4));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (min((((~0) ? ((2915335229754425687 >> (((arr_0 [i_0] [7]) - 56155)))) : (((var_0 ? 190 : 43))))), ((min(((-(arr_1 [i_0 - 1]))), ((max(var_7, var_6))))))));
        var_13 = ((-(((max(-5639416221646143152, 39361))))));
    }
    #pragma endscop
}
