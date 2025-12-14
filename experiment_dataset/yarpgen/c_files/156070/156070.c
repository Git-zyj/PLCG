/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [0] &= (max(7649993722105332292, 3847));
        arr_3 [i_0] [16] |= var_14;
    }
    var_17 = (((min(var_10, (var_8 ^ var_12))) <= (((((min(var_4, var_14)) == (((max(var_12, var_15))))))))));
    #pragma endscop
}
