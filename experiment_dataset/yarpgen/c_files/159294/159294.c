/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((((((var_2 ? 2558914731 : 981556118)) | var_11))) ? ((134217216 ? (var_6 * var_2) : (var_6 | 134217216))) : var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-(arr_0 [i_0] [i_0])));
        arr_4 [i_0] = 1125762467889152;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_13 ^= ((max(((min((arr_0 [i_1] [2]), (arr_2 [i_1] [1])))), ((18445618311241662464 ? var_2 : var_11)))));
        arr_7 [5] = ((max((arr_1 [i_1]), (((18445618311241662457 ? 134217726 : (arr_2 [i_1] [4])))))));
    }
    #pragma endscop
}
