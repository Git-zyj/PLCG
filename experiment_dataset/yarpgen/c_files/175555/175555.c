/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_2;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((-3761342446627737447 != -19) % 263882790666240))));
        var_11 = 935786825;
    }
    var_12 = 0;
    #pragma endscop
}
