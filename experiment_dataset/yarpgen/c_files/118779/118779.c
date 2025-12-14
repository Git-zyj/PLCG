/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_1;
    var_14 = (min(var_14, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((((~(arr_1 [i_0] [i_0])))) ? (((-(arr_1 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))));
        var_16 = 521433704;
        arr_2 [i_0] [i_0] = (max(-var_2, (43 * var_2)));
    }
    #pragma endscop
}
