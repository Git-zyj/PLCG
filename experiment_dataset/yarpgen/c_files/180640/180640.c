/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (var_2 ? (10397528657692622448 < var_10) : ((-var_10 ? var_14 : var_7)));
    var_16 = 23257;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [11] = 10397528657692622448;
        arr_3 [6] = ((!(((-var_12 ? (-2147483647 - 1) : ((23257 ? -11582 : var_0)))))));
    }
    #pragma endscop
}
