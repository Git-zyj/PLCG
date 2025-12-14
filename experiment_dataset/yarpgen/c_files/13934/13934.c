/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max((!2146435072), 2148532237));
        var_12 = var_9;
    }
    var_13 = ((((max(var_11, (max((-9223372036854775807 - 1), var_4))))) + 16562874316681394967));
    var_14 = var_8;
    #pragma endscop
}
