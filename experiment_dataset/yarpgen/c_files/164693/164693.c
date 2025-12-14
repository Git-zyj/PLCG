/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (max(var_11, ((min((arr_1 [i_0]), (((!(arr_1 [i_0])))))))));
        var_12 = (min(var_12, (((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : 9325871032199154319)))))));
        var_13 *= (max(-9223372036854775805, var_6));
    }
    var_14 |= (max(9120873041510397296, var_5));
    #pragma endscop
}
