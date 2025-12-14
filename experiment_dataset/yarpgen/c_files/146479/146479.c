/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = 60;
    var_18 = (-9223372036854775802 || 57);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = ((((var_0 * ((((-4941954555504285153 + 9223372036854775807) << (((var_7 + 92) - 6))))))) << (((arr_1 [i_0]) - 2084140565))));
        arr_3 [16] = ((((var_9 ? (arr_0 [i_0]) : -4941954555504285153)) / (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))))));
        var_20 ^= 17625035936140416095;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 ^= (arr_1 [i_1]);
        var_22 = (max(var_22, -4941954555504285158));
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
    }
    var_23 = ((-127 - 1) <= -0);
    #pragma endscop
}
