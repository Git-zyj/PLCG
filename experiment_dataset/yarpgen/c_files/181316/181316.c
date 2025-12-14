/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (max(1, (min((max(1876594363765077547, 34)), (max((arr_1 [i_0]), 50))))));
        var_20 = max((max(var_7, (!-3670862539234961772))), (((!((max((arr_2 [i_0]), -74)))))));
        var_21 = (min(var_21, var_7));
    }
    var_22 = ((max((min(var_9, var_8)), 129)));
    var_23 = max((max((max(var_12, var_2)), (((136 ? var_6 : 224))))), var_12);
    var_24 -= var_17;
    #pragma endscop
}
