/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_2;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = ((((min((~210), ((min(8160, var_1)))))) ? 45 : ((((max((arr_0 [i_0] [i_0]), 0))) / ((((arr_1 [i_0]) && 17870283321406128128)))))));
        var_15 = max((min(576460752303423487, (((16368 * (arr_1 [i_0])))))), 67108863);
    }
    var_16 = (min(var_16, ((min(67108867, ((~(max(var_12, var_5)))))))));
    var_17 = (min(var_17, (var_0 | 41472)));
    #pragma endscop
}
