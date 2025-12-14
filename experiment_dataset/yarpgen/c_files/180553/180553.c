/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) / var_1)) : (8 % 3269938481)));
        var_13 &= (((((var_8 != (arr_1 [i_0])))) ^ (!229376)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = 3269938481;
        var_14 = ((max((1025028814 / 1303311189), 4294967295)));
        var_15 &= (((((-(!120)))) == var_11));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (((((arr_8 [i_2 + 1]) ? var_3 : var_4)) <= (((arr_8 [i_2 + 1]) ? 0 : -34))));
        var_16 = ((-(min(-164208001, (arr_0 [i_2 - 1])))));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        arr_12 [i_3] = var_3;
        var_17 = (((arr_5 [i_3 - 2]) ^ (((((arr_4 [i_3 + 1]) >= (arr_4 [i_3 - 1])))))));
        arr_13 [8] &= -164208021;
    }
    #pragma endscop
}
