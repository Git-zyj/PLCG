/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_1] = ((((658609829 ? var_7 : 21768)) != (arr_3 [i_0] [7] [i_0])));
            var_11 = var_2;
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_0] [0] [i_0] = (arr_8 [i_2] [i_2] [i_2]);
            arr_10 [i_0] [i_2] = (~(arr_6 [i_0]));
            var_12 = (arr_7 [i_0] [i_2]);
        }
        var_13 = ((var_5 ? (((((((-(arr_4 [i_0] [i_0])))) && (arr_8 [i_0] [i_0] [3]))))) : (1923273919 | var_2)));
        arr_11 [12] = ((~(arr_2 [i_0])));
        arr_12 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (max(((max((max(74, (arr_15 [i_3]))), 8016))), -3425983908330223729));
        var_14 = (min(-var_0, (arr_14 [i_3] [i_3])));
    }
    var_15 = (min(((min((!var_2), var_2))), (min(var_8, (-1 && var_8)))));
    var_16 = var_1;
    #pragma endscop
}
