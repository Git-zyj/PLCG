/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -9463471106706561248;
    var_14 = (((min(-1627983029, 67108863) ^ ((2246406354987492637 ? 4227858457 : var_1)))));
    var_15 ^= (~((var_9 ? ((265967112 ? 9479654079281104964 : var_4)) : (min(14358236184323955166, var_9)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (~(!9463471106706561248));
        arr_3 [i_0] = var_9;
    }
    #pragma endscop
}
