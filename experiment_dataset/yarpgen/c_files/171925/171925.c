/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 254;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [17] = (max(15458045955441912757, (arr_0 [i_0] [i_0])));
        var_11 = ((~(arr_1 [i_0])));
    }
    var_12 ^= (((var_2 ? ((var_2 ? var_1 : var_3)) : var_5)));
    var_13 = ((~(((min(2988698118267638858, var_6))))));
    var_14 = (max(var_0, (max(var_2, (max(var_3, 4294967295))))));
    #pragma endscop
}
