/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((-(3555906005 * 14)));
        var_15 ^= ((-(((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))));
    }
    var_16 ^= ((((-12930739391441809338 - (var_9 + var_1))) == var_7));
    #pragma endscop
}
