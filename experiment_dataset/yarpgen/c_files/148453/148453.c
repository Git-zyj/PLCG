/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (min(var_7, ((((var_9 || var_4) || (~var_2))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, ((min((((arr_1 [i_0]) ? (arr_3 [i_0]) : var_4)), (((arr_0 [i_0]) ? ((var_3 ? 0 : var_10)) : (arr_3 [i_0]))))))));
        var_16 ^= (arr_2 [13] [13]);
    }
    #pragma endscop
}
