/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((15415 ? 197 : 0));
        arr_5 [i_0] = ((118 / ((47010 << (1127113491101278445 - 1127113491101278435)))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_20 = (min(((3217292454924021068 ? 61049 : -242713644)), ((-(arr_6 [i_1] [i_1 - 1])))));
        arr_8 [i_1] [i_1 + 1] = 5740429329438660331;
        var_21 = (min(var_21, ((((arr_6 [i_1 + 3] [i_1 + 2]) + (arr_6 [i_1 + 2] [i_1 - 1]))))));
    }
    var_22 = var_16;
    var_23 = var_19;
    #pragma endscop
}
