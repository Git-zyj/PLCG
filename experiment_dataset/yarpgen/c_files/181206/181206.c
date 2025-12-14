/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = max((min((arr_1 [i_0] [i_0]), ((min(var_11, 65535))))), (((~((min(30, var_10)))))));
        arr_4 [i_0] = (min(((min(1, 127))), (min(var_9, (!var_1)))));
        arr_5 [i_0] [i_0] = 1024;
    }
    var_14 = var_3;
    var_15 = 64514;
    var_16 = (max(((((var_8 << (3 - 3))))), (6788727153387251726 * -20574)));
    var_17 = (21 ? -25 : 0);
    #pragma endscop
}
