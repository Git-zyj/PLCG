/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) - (min((496309958 / -1), 11649536482939928137))));
        arr_2 [i_0] = ((min(-311370206601124163, 4294967290)));
    }
    var_13 = ((((222 ? 255 : 24576)) >> (var_0 - 23899)));
    var_14 = ((var_1 ? ((842672878 ? 10922 : var_0)) : -var_10));
    #pragma endscop
}
