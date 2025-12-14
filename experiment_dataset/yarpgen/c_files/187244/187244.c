/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((var_9 >= var_7), ((var_1 >> (var_10 - 34)))))) || (((~(~var_6))))));
    var_12 = (((min(((max(var_5, var_5))), (~var_3))) & (var_1 != var_5)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((((max(var_9, var_0)) == (((var_1 ? var_10 : var_4))))) || var_1));
        arr_3 [i_0] = ((var_2 + (((arr_0 [i_0]) - (arr_0 [i_0])))));
    }
    #pragma endscop
}
