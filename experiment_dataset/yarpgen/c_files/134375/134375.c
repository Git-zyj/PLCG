/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_5 < var_7);
    var_13 = ((var_9 ? (((((max(var_3, 43261))) > 1561530106))) : (max((var_8 > var_9), (~var_10)))));
    var_14 &= var_4;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [10] &= 26;
        var_15 = ((((max((((var_4 < (arr_1 [i_0])))), ((var_9 ? var_4 : 1561530106))))) ? ((var_7 ? 2733437189 : 2733437208)) : (((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) < (((~(arr_1 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (((max(43248, -253)) << (43261 - 43253)));
        var_16 = (min((~var_3), (arr_0 [i_1] [i_1])));
    }
    var_17 = (max(-var_4, var_3));
    #pragma endscop
}
