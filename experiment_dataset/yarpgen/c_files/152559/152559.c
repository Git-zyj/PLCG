/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = (min(var_15, ((((((var_6 ? (min((arr_3 [1] [i_0] [i_1]), (arr_0 [i_0]))) : ((var_5 ? var_12 : 6))))) ? (arr_5 [i_1] [i_0]) : (((((1 / (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_2 [18]))))))));
            arr_6 [i_0] = 1;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = ((min(var_1, (((arr_2 [i_0]) ? (arr_8 [i_0]) : (arr_2 [i_0]))))));
            var_16 = ((var_13 ? var_13 : ((~((max((arr_2 [i_0]), (arr_9 [i_0]))))))));
        }
        arr_11 [i_0] = (min(var_11, ((var_5 ? (arr_2 [i_0]) : (arr_8 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (min((((arr_8 [i_3]) ? ((min(3009, (arr_4 [i_3] [i_3] [i_3])))) : (arr_5 [i_3] [i_3]))), (arr_1 [16])));
        var_17 = ((!(arr_12 [i_3])));
        var_18 = (max(var_18, ((((arr_3 [6] [i_3] [i_3]) ? (min(((var_2 ? var_5 : (arr_12 [i_3]))), (arr_1 [4]))) : var_9)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_5] [i_5] [10] = (min(var_9, (min((((arr_5 [i_3] [i_5]) ? (arr_15 [i_3] [i_5]) : (arr_5 [i_4] [i_3]))), (arr_12 [i_3])))));
                        arr_24 [i_4] [i_5] = (((((arr_17 [i_6] [i_4]) * (arr_17 [i_4] [i_5]))) <= (((arr_16 [i_3] [i_3]) & (arr_17 [i_3] [i_6])))));
                        var_19 = arr_5 [i_4] [i_5];
                    }
                }
            }
        }
        var_20 = ((-3013 ? 1279705438 : ((-3032 ? (var_4 > var_13) : (((arr_18 [i_3]) ? 3009 : -12348))))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_21 = (((arr_3 [i_8] [i_8] [i_8]) ? (arr_4 [i_8] [1] [i_9]) : (((arr_31 [i_8]) ? (arr_31 [i_8]) : (arr_31 [i_8])))));
                    var_22 ^= 1;
                }
            }
        }
        var_23 = (!21598);
    }
    var_24 = var_1;
    var_25 = var_11;
    #pragma endscop
}
