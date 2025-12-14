/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~0);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [9] = -191647640;
        var_14 = (((((arr_1 [i_0]) == -0)) ? ((61023 ? -1 : 1)) : ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : 2533793979))) ? var_8 : 4123819611))));
    }
    #pragma endscop
}
