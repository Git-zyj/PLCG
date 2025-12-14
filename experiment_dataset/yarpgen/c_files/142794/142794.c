/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((min(var_10, var_10)) + -var_5))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max(((-(min((arr_0 [i_0]), (arr_3 [i_0]))))), (((!(arr_4 [i_1] [i_2])))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0] [i_1 + 1]) + var_4));
                    arr_8 [i_0] [i_0] = (min(((max(var_7, (min(var_7, var_11))))), ((-90 ? 2596835280 : var_10))));
                }
            }
        }
        arr_9 [i_0] = var_1;
        arr_10 [i_0] = ((((((var_11 ? var_6 : var_2) <= (2596835280 % var_1))))));
        var_14 = ((~(((((var_11 & (arr_4 [i_0] [i_0])))) ? (((~(arr_6 [i_0])))) : (min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_8))))));
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] &= (var_9 >= 130023424);
        arr_15 [i_3] = var_2;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_15 -= (max((arr_4 [i_4] [i_4]), -10));
        var_16 = ((+((var_11 ? (arr_13 [i_4] [i_4]) : var_5))));
    }
    #pragma endscop
}
