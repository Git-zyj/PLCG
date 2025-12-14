/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, (((!((((((arr_1 [1] [10]) + 2147483647)) >> (((arr_0 [6]) + 5119243390987225309))))))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [4] [i_0] = ((-(arr_2 [i_0])));
            var_18 *= var_7;
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = var_1;
        var_19 = ((var_3 ? (arr_8 [i_2] [i_2]) : (arr_1 [i_2] [i_2])));
        var_20 *= ((((((arr_3 [i_2]) - (arr_9 [i_2])))) ? var_2 : (((arr_1 [9] [9]) / (arr_1 [i_2] [i_2])))));
    }
    #pragma endscop
}
