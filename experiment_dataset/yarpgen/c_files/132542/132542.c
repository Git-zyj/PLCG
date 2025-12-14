/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((~(arr_2 [0] [i_0])));
        var_12 = var_8;
        var_13 = 1;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = ((~((~((max(var_7, var_5)))))));
        var_14 -= (max(((!(arr_3 [i_1]))), (max((min(1, 1)), (1 && 28884)))));
        var_15 = (max(((((~var_9) > (arr_0 [i_1] [i_1])))), var_3));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = (min(var_1, var_9));
            var_16 = ((((min((((arr_1 [1] [1]) ^ -30228)), (((arr_6 [i_1] [i_1]) ? var_5 : var_9))))) ? var_7 : (max((arr_4 [i_1] [i_2]), (min(1, (arr_6 [i_1] [i_1])))))));
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_13 [i_4] = -1;
                var_17 = (min(var_17, (((((((min(var_1, var_4)) & (((min((arr_4 [i_1] [i_1]), (arr_10 [i_1] [i_3] [9])))))))) ? (arr_6 [i_3] [i_3 + 1]) : 1)))));
            }
            var_18 = (min(var_18, (((1 ? var_2 : (min(var_9, var_4)))))));
        }
    }
    var_19 = ((var_0 ? var_1 : ((~((min(var_8, 1)))))));
    #pragma endscop
}
