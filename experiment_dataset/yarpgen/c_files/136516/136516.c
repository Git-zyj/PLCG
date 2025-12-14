/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [1] [1] = ((((~var_3) ? (~8118) : ((~(arr_0 [i_0]))))));
        var_15 = ((((min(1, (arr_0 [i_0])))) ? ((((max(-3421934523020280643, 1312668750))) ? (((-(arr_1 [i_0])))) : (max(var_5, var_11)))) : (((-100 ? 44677 : 960517600)))));
        var_16 += ((((var_8 * (arr_1 [i_0]))) == var_11));
    }
    var_17 = (min((var_13 && 16328), ((((min(200, var_7))) ? ((1 ? var_12 : 14)) : (~-30143)))));
    #pragma endscop
}
