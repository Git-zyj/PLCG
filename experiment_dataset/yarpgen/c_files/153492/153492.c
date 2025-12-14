/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = 41861;
        var_11 = (((max((((~(arr_2 [i_0])))), (max(var_1, 10660077427652458459)))) ^ 3609917207231484661));
    }
    var_12 = var_2;
    #pragma endscop
}
