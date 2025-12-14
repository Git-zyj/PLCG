/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = ((~(((!((((arr_1 [i_0] [i_0]) >> (((arr_3 [i_0]) - 3336657744255810224))))))))));
        arr_4 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = (max((max(var_4, (arr_6 [i_1] [i_1]))), (~var_0)));
        var_11 = (max((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))), var_2));
        var_12 |= (((((((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? (max(var_3, var_6)) : -var_3))) ? (((((min(var_9, (arr_6 [i_1] [i_1])))) ? var_3 : ((1651530513 ? var_3 : var_2))))) : (arr_6 [20] [20])));
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_13 += var_1;
        var_14 = (max(var_14, (((+(((arr_8 [i_2] [i_2]) ? (((arr_9 [i_2]) ? -1651530500 : var_3)) : ((((arr_5 [i_2]) / -1021764328))))))))));
        var_15 = (max(var_15, ((((arr_8 [i_2] [i_2]) % ((((max(var_7, (arr_6 [i_2] [i_2])))) ? (((~(arr_9 [i_2])))) : (max((arr_8 [i_2] [i_2]), var_9)))))))));
        var_16 -= ((!(((((28898 ? var_9 : var_2))) || (var_9 && var_5)))));
        var_17 -= ((1651530537 ? (((arr_9 [i_2]) ? var_6 : var_1)) : ((((arr_8 [i_2] [i_2]) != (arr_8 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = ((!(arr_5 [i_3])));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_18 += var_3;

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_19 = ((~(arr_5 [i_4])));
                arr_19 [i_3] [i_4] [i_5] = (max((((!(arr_5 [i_3])))), ((var_0 ? ((~(arr_13 [i_3] [i_3]))) : (arr_15 [i_3] [i_3])))));
                arr_20 [i_3] [i_3] [i_5] = (((((28895 ? ((((arr_11 [i_3]) - var_3))) : ((-(arr_16 [i_3] [i_3] [i_5] [i_4])))))) ? ((((((-(arr_9 [i_3])))) ? 1651530501 : (arr_14 [i_4])))) : ((var_1 - ((var_1 ? (arr_17 [i_3] [i_4] [i_3] [i_4]) : var_4))))));
            }
            var_20 = ((((-(arr_6 [i_3] [i_4]))) == (arr_13 [i_3] [i_3])));
            var_21 &= ((((max((arr_16 [i_4] [i_4] [i_4] [i_4]), 3713607160))) ? (((1 ? (arr_8 [i_3] [i_4]) : (arr_8 [i_4] [i_4])))) : (max(var_1, ((var_9 ? var_4 : 1193424350))))));
        }
    }
    var_22 = var_6;
    #pragma endscop
}
