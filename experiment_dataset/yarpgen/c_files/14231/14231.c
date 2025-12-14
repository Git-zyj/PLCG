/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (248 / -1500294591);
    var_12 ^= 1500294595;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 += ((~(arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (((((0 ? -1500294591 : 1500294591))) ? ((((((arr_0 [i_0] [i_0]) > (arr_1 [i_0]))) ? (((arr_1 [i_0]) ? -1500294595 : -116)) : -1500294591))) : (max((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), 9007199254740991))));
    }
    #pragma endscop
}
