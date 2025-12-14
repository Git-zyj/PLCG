/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((max(10822250064551509612, 899883232151070378))) && 38));

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_19 = ((~(((arr_1 [i_0 + 1] [i_0 + 1]) ? var_8 : (arr_0 [i_0 + 1])))));
        arr_2 [i_0] = (((((((1 ? 1 : 1))) ? -1490587226 : 1)) >= (min(((min((arr_1 [9] [i_0 + 4]), 1))), -1194353272))));
    }
    var_20 = ((-(max(((1 ? 1 : 4747)), var_16))));
    #pragma endscop
}
