/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_14 + (~var_4))))));
    var_18 *= ((var_7 - (((var_2 && var_9) ? var_13 : 12579308071795055889))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_19 = (max(var_19, ((var_2 / (arr_1 [i_0 - 2] [i_0 + 1])))));
        arr_2 [i_0 - 1] = (((-(arr_1 [i_0] [i_0 + 1]))));
        var_20 = (((((~var_0) ? (arr_0 [i_0 - 1]) : var_11)) <= (min(6871107131874473197, (var_5 * 10)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((min((arr_4 [i_1] [i_1]), (12579308071795055884 == 65533))) % var_9)))));
        var_22 ^= (max((min((arr_4 [i_1] [i_1]), var_9)), (arr_3 [i_1])));
        var_23 = (arr_3 [7]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_24 -= (max((13565632130091638857 * 384), (((arr_6 [i_2]) / (arr_6 [i_2])))));
        var_25 *= ((-((var_4 << ((((var_5 ? var_16 : (arr_6 [i_2]))) - 15154462873875696464))))));
    }
    var_26 = (max(var_26, (((13565632130091638879 ? var_5 : ((((var_4 ? var_15 : var_3)) | (min(var_9, var_2)))))))));
    #pragma endscop
}
