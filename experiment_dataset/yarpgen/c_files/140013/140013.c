/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_11 -= -56;
        var_12 = (min((((!(min(1, var_10))))), ((-(arr_1 [i_0 - 1])))));
    }
    var_13 = (((((~((var_2 ? 1 : 1))))) ? 115 : (~var_6)));
    var_14 = ((~(((((min(17, 50))) > var_0)))));
    #pragma endscop
}
