/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] = -6461;
    }
    var_20 = ((((((min(var_4, 32767)) == -32767))) ^ var_2));
    #pragma endscop
}
