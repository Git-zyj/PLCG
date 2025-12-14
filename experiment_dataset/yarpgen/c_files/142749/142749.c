/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 ^= 4248501528;
        var_14 = var_10;
        arr_3 [i_0] |= (arr_1 [i_0]);
        arr_4 [i_0] [8] = 46465777;
        arr_5 [i_0] [i_0] &= ((((max((((var_3 ? 21159 : (arr_1 [i_0])))), (max(-107, var_8))))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    var_15 = (max(var_15, ((((((~var_4) >> ((((max(49656, var_3))) - 65445)))) <= (4143705984637394348 != 144115188075855871))))));
    #pragma endscop
}
