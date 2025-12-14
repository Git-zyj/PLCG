/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        arr_2 [i_0] = (!var_1);
        arr_3 [15] [15] = var_2;
    }
    var_14 = 1987336838;
    #pragma endscop
}
