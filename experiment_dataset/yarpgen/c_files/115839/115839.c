/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 % -85);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 *= 27533836;
        arr_4 [i_0] = 27533849;
    }
    #pragma endscop
}
