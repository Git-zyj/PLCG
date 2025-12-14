/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((27968 ^ 33770) ? ((min(var_9, var_1))) : var_3)));
    var_12 *= (max(((max(33770, var_3))), ((13356492948841578581 ? -2369787576233963508 : var_10))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 *= ((((((max(22407, 2369787576233963507)) | 112))) ? ((((arr_1 [i_0]) ? var_10 : -var_8))) : (((arr_1 [i_0]) ? -1962566946 : (min((arr_0 [i_0]), 5772054239337289834))))));
        var_14 *= var_10;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1 - 2] [i_1] = (arr_3 [i_1 + 1]);
        var_15 = (min(var_15, (((41 ? var_6 : ((39560 ? var_3 : (arr_1 [i_1]))))))));
        arr_6 [i_1 + 4] = ((-(arr_3 [i_1 - 3])));
        var_16 = (min(var_16, (arr_1 [i_1 + 2])));
        arr_7 [i_1] = ((237 ? 45201 : (((arr_4 [17] [i_1]) & (arr_4 [3] [i_1])))));
    }
    var_17 = var_5;
    #pragma endscop
}
