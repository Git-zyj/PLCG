/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_12, (min((var_8 - var_13), ((min(65535, 1)))))));
    var_15 = ((-var_2 < ((((min(var_6, var_1))) ? (var_0 == 1) : ((var_9 ? var_12 : var_8))))));
    var_16 = var_3;
    var_17 = (max(var_17, var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min((var_8 * 0), (((var_8 < (arr_0 [i_0]))))));
        arr_4 [i_0] = ((~(min((min(-23906, (arr_1 [i_0]))), var_11))));
    }
    #pragma endscop
}
