/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (((min(var_14, -var_3)) - ((min((var_4 != var_9), (min(4294967295, var_0)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((((min(var_6, (var_2 & var_15)))) ^ ((var_14 | (var_7 | 1)))));
        var_18 += (((((4294967295 * (var_0 + 4294967288)))) ? (-308198314 || 6165958065463211619) : var_8));
    }
    var_19 = 16382;
    var_20 = ((var_7 / ((-((var_0 ? 305782421818692985 : 12))))));
    var_21 ^= (((((min((~var_0), (-8974779369406705196 || var_13))) + 2147483647)) << (-8974779369406705196 - 212)));
    #pragma endscop
}
