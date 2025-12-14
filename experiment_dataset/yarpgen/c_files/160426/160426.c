/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-794952300 / var_2) && ((((max(var_13, var_10)) | (((min(13924, var_5)))))))));
    var_17 = (1128247702 & (max(((28516 ? var_12 : var_1)), var_9)));
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [10] |= var_14;
        var_19 -= ((var_13 ? (var_11 & -1418242641) : (((var_3 >> (var_1 - 2227977807))))));
        var_20 = (0 << (224 - 217));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_21 = (max(var_21, ((((((((var_3 ? var_3 : var_13)) / var_6))) && (((((var_11 ? var_2 : var_3)) * 32754))))))));
        arr_6 [i_1] [i_1] = (((var_9 & var_10) << (-var_15 + 25505)));
    }
    #pragma endscop
}
