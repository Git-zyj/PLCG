/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((((var_11 ? var_2 : 7876051341074487791)) | (((var_7 ? var_8 : var_13)))))));
    var_16 = ((1 ? (((((7876051341074487791 ? -7876051341074487792 : -7876051341074487807))) ? var_11 : (max(var_0, var_7)))) : (min(var_0, var_2))));
    var_17 = var_14;

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = var_3;
        var_19 = ((var_1 ? var_7 : 32));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_20 = (((((var_4 ? var_2 : 2670))) ? (arr_3 [i_1 - 2]) : 0));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_21 -= (var_3 * var_13);
            arr_6 [i_1] [i_1] [i_2] = ((arr_5 [i_2] [i_1 - 3] [i_2]) ? 17 : var_2);
            var_22 += (((arr_3 [i_1 + 1]) >= (arr_3 [i_1 + 1])));
            var_23 = (((var_4 < 9223372036854775797) / ((3741641506 ? var_8 : var_9))));
        }
        var_24 = (min(var_24, (((15003451816592423918 ? var_8 : var_8)))));
    }
    #pragma endscop
}
