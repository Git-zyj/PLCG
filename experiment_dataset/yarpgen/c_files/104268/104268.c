/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = (arr_2 [i_0 - 1]);
        arr_3 [18] = 18354;
        arr_4 [i_0] = 820735863;
        var_14 += (arr_2 [i_0 - 1]);
    }
    var_15 = -286418137;
    #pragma endscop
}
