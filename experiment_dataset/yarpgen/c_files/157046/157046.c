/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (2449116669 < (-2147483647 - 1));
    var_18 = (((3199817693370520990 << var_1) >> (var_12 + 73)));
    var_19 *= var_6;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 = (max(var_20, 1845850630));
        arr_2 [4] |= ((((8192 ^ (arr_0 [i_0 - 1]))) & (2449116694 % -115)));
    }
    #pragma endscop
}
