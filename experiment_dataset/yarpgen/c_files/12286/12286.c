/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 &= ((((((1431548972 % (arr_1 [i_0]))))) ? ((((arr_1 [i_0]) ? (26857 == var_1) : (arr_1 [i_0])))) : (min((max(1431548972, (arr_1 [i_0]))), -19325))));
        arr_2 [i_0] = (max(2863418332, 14951749675348278844));
    }
    var_17 = (~var_6);
    var_18 = (max(var_18, var_10));
    #pragma endscop
}
