/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = max(((1883747016 & (arr_1 [i_0] [i_0]))), ((min((arr_1 [i_0] [i_0]), -1529140732))));
        arr_2 [i_0] [3] = 18446744073709551615;
        var_15 = (max((((~(arr_1 [i_0] [i_0])))), ((479054106979657630 ? var_3 : (max(-26, var_2))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 -= var_9;
        arr_5 [i_1] = -var_3;
        var_17 = (max(var_17, -534096894));
        var_18 = (max(var_18, -var_0));
    }
    var_19 ^= var_2;
    var_20 ^= var_13;
    var_21 = (max(var_11, (max((max(var_0, var_8)), (!var_11)))));
    #pragma endscop
}
