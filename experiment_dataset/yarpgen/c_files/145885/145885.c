/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(726532742, 30056)), var_12));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = 32757;
        var_16 += (min((max((arr_1 [i_0]), 13)), (arr_1 [i_0])));
        var_17 &= (min(53, 23000));
    }
    var_18 = var_2;
    var_19 = (max(var_9, 4294967278));
    #pragma endscop
}
