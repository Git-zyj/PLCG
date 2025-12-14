/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((!-5662613) != (!var_3)));
        var_11 = 5662612;
    }
    var_12 = var_3;
    var_13 = var_2;
    var_14 = var_10;
    #pragma endscop
}
