/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 |= ((-(arr_0 [i_0])));
        var_15 = var_6;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = ((-(arr_2 [i_1 - 1])));
        var_16 = (((((var_7 && (arr_2 [i_1 + 3])))) < ((-(arr_2 [i_1 + 3])))));
        arr_5 [i_1] = ((~((-(arr_3 [i_1 - 1])))));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_11 [i_2] = ((-(var_4 > -605600942)));
            arr_12 [i_2] [i_2] = ((var_5 >> (var_0 - 11383452821719839280)));
            var_17 = (((arr_10 [i_2 - 2]) ? (arr_10 [i_2 - 2]) : (arr_10 [i_2 - 2])));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_18 = (((arr_9 [i_2 + 1]) ? (arr_9 [i_2 + 1]) : ((var_10 >> (arr_9 [i_2 + 1])))));
            var_19 = ((((min(((-605600954 & (arr_15 [i_4] [i_4]))), (arr_2 [i_2])))) ? (arr_9 [i_2]) : ((~(arr_15 [i_4] [i_2 + 2])))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_19 [i_2 - 2] [i_2] = (arr_7 [i_2 + 3]);
            var_20 = (min(var_20, ((min((arr_6 [i_2 + 2]), var_7)))));
        }
        arr_20 [i_2] [i_2] = -605600954;
        var_21 = ((((~(arr_8 [i_2 - 2]))) <= (arr_3 [i_2 + 1])));
    }
    var_22 = 31912;
    #pragma endscop
}
