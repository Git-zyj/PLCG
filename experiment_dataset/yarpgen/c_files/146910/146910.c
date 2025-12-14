/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_4 ? var_1 : ((var_7 ? 7271 : var_6))))) ? 15 : var_3);
    var_11 = var_9;
    var_12 = var_1;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = 8192;
        var_14 = (min(var_14, var_0));
        arr_2 [i_0] = (((((arr_0 [i_0 + 1] [i_0]) ? ((2 ? (arr_1 [i_0]) : 3)) : ((-(arr_0 [i_0] [i_0])))))) ? 65533 : (max(((2 ? 63789 : -514605830)), ((1891 + (arr_0 [i_0 - 1] [i_0 - 1]))))));
    }
    #pragma endscop
}
