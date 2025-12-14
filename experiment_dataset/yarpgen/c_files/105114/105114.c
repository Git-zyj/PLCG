/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-113 <= var_4);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_20, 116));
        arr_2 [i_0] = (min(((!(arr_0 [i_0]))), var_3));
        var_21 = (max(var_21, ((((((-(arr_1 [i_0] [i_0])))) ? (var_1 | 12810863405106427237) : ((max((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_0]), var_3))))))))));
    }
    #pragma endscop
}
