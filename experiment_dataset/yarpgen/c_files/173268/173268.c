/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = ((((((-(arr_1 [i_0 + 2] [i_0 + 1]))) + 2147483647)) << ((((((var_10 ? 7 : (arr_1 [i_0] [i_0]))))) - 1))));
        var_11 = (((((arr_0 [i_0] [i_0 - 1]) ? (arr_0 [7] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 2]))) <= 22921));
    }
    var_12 = ((22921 ? ((((((max(-970743565, -22922))) >= (~3208113360))))) : var_3));
    var_13 = 1;
    #pragma endscop
}
