/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = ((~(min((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] &= (max(((max((arr_0 [i_0]), (min(-21166, var_2))))), (min((!-6236370279503075025), (max(67108848, 1653678344))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_11 = (arr_5 [i_1]);
            var_12 = (min(var_12, (arr_4 [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_1] [4] = (((arr_12 [i_1] [i_1 - 2]) && 0));
            arr_14 [i_3] [i_1] = 6236370279503075031;
        }
        var_13 += max((arr_11 [i_1 - 1] [i_1 - 3] [i_1]), (((arr_1 [i_1]) ? (((var_3 ? (arr_10 [i_1] [i_1]) : var_2))) : (min(11193374598515483021, (arr_4 [i_1] [i_1 - 3]))))));
        arr_15 [i_1] = (1 || (arr_7 [i_1] [i_1 + 2] [i_1 - 2]));
    }

    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] &= (arr_0 [i_4]);
        var_14 = (((arr_17 [i_4]) ? (min((arr_1 [i_4 + 2]), (arr_1 [i_4 + 2]))) : var_4));
        var_15 = 11193374598515483028;
        var_16 = (arr_2 [i_4]);
        arr_19 [i_4 + 2] = 33229;
    }
    #pragma endscop
}
