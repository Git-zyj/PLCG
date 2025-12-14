/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (min(var_8, var_7));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 ^= (max((max((min(var_2, (arr_3 [i_0] [i_0]))), ((((arr_3 [i_0] [i_0]) == var_0))))), ((max((arr_2 [i_0]), (max((arr_0 [i_0]), var_9)))))));
        arr_4 [i_0] = ((var_0 ? ((min((arr_2 [i_0]), var_2))) : ((max((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_14 = (min(var_14, ((((var_8 >= ((((arr_3 [i_0] [i_0]) && var_4)))))))));
        arr_5 [i_0] = (max((max((arr_1 [i_0]), (arr_0 [i_0]))), ((min(var_8, (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [10] [i_1] = var_6;
        var_15 = ((-(arr_7 [11] [i_1])));
        var_16 += var_0;
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_17 = (max(var_17, ((((((((arr_10 [i_2 - 2]) - (arr_10 [i_2]))) & (arr_10 [i_2 - 1]))) << ((min((arr_9 [i_2 + 1]), (arr_9 [i_2 + 1])))))))));
        var_18 = ((((var_8 + ((var_7 ? (arr_9 [i_2 + 1]) : (arr_6 [i_2 - 1]))))) - (((max(var_8, var_10))))));
        arr_11 [8] = (max(((((max(var_0, (arr_10 [i_2])))) ? (arr_7 [i_2 + 1] [i_2]) : var_2)), (((var_2 * var_9) ^ ((max((arr_10 [0]), var_8)))))));
        var_19 = (min(var_3, (!var_4)));
    }
    var_20 = var_3;
    #pragma endscop
}
