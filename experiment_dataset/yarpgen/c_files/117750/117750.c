/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) ? ((12 ? 30 : -30)) : (((arr_1 [i_0]) ? ((min(var_9, 24076))) : (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((((var_9 * (max(87054226, var_1)))) != (!-3)));
        var_17 = (min(var_17, (var_0 && 228)));
        var_18 = (max(var_18, (arr_0 [13])));
        arr_3 [2] = ((-10223 != ((max(167, 1230)))));
    }
    var_19 = ((var_4 ? (max(var_11, (var_13 >= var_3))) : 228));
    #pragma endscop
}
