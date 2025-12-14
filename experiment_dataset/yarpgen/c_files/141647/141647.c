/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_11 + 2147483647) >> (((~75) + 96))));
    var_15 -= (min(var_8, var_5));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, ((((~var_2) > ((((arr_0 [i_0]) - 185))))))));
        arr_2 [i_0] = min((((var_10 + 5278) & ((((var_1 + 2147483647) << (2852695592 - 2852695592)))))), (1831365391 < 1073479680));
        var_17 = var_10;
        var_18 = ((~(((var_11 != (arr_0 [i_0]))))));
    }
    #pragma endscop
}
