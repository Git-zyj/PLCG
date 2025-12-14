/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 16647768629798879295;
        arr_3 [i_0] = 58;
        var_11 = (min(65535, 1));
        var_12 = (max(3911319116, 5300037433485916605));
    }
    var_13 = 16647768629798879297;
    #pragma endscop
}
