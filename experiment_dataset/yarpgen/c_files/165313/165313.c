/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((var_1 < var_15) & var_0))));
    var_17 = var_0;
    var_18 = var_15;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 += -1;
        arr_4 [i_0] [i_0] = (0 & 0);
        arr_5 [i_0] [i_0] = 255;
    }
    var_20 = (((!var_10) == var_10));
    #pragma endscop
}
