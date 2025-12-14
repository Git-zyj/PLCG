/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(~var_6)));
    var_15 = (max(((var_2 ? var_2 : (2 < 29376))), (~95)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((!(((((min(58, 17968))) ? var_4 : (arr_0 [i_0] [i_0]))))));
        var_16 &= arr_2 [i_0];
        var_17 = (max(var_17, (((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? ((-(arr_2 [i_0]))) : ((max((arr_2 [i_0]), (arr_0 [i_0] [i_0])))))))));
    }
    #pragma endscop
}
