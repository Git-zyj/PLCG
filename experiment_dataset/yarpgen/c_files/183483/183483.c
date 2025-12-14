/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 1266190660))) ? ((((arr_1 [i_0]) < (arr_1 [i_0])))) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 -= arr_4 [i_1] [4] [i_1];
            var_14 = var_1;
            var_15 = (((((arr_3 [i_0]) ? (arr_0 [i_0]) : 41)) - ((-((((arr_4 [5] [i_0] [5]) >= 1266190664)))))));
            arr_5 [i_0] [i_0] = (i_0 % 2 == 0) ? ((~((var_9 >> (((arr_0 [i_0]) + 88)))))) : ((~((var_9 >> (((((arr_0 [i_0]) + 88)) + 28))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 = (((((((min(255, (arr_14 [i_0] [i_0] [i_0])))) ? (((arr_13 [i_4] [i_0] [i_0] [3]) * (arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] [i_5]))) : (arr_4 [1] [i_0] [i_3])))) ? (max(var_3, ((-32758 ? var_7 : 63)))) : var_1));
                            var_17 = ((((min((arr_8 [i_2] [i_3] [i_0]), var_1))) ? (((min((arr_8 [i_0] [i_2] [i_0]), (arr_8 [i_0] [i_0] [i_0]))))) : var_4));
                            arr_16 [i_2] [i_0] |= (arr_13 [i_2] [i_4] [2] [i_5]);
                            var_18 = var_3;
                        }
                    }
                }
            }
            var_19 &= (((((arr_14 [1] [4] [i_2]) ? (arr_14 [i_0] [i_2] [i_2]) : (arr_1 [i_2]))) * ((((arr_1 [i_2]) >= (arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]))))));
        }
        arr_17 [10] |= (((min(var_0, var_1))));
        var_20 = (arr_6 [i_0] [i_0]);
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6] = (arr_0 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_7] = 34;
                    arr_29 [9] [i_6] [i_6] [i_8] = var_2;
                    var_21 = var_1;
                }
            }
        }
        var_22 = var_2;
        var_23 = (min((((arr_19 [i_6]) ? var_1 : (arr_18 [i_6] [i_6]))), (arr_14 [i_6] [i_6] [i_6])));
    }
    var_24 = (min((min(-var_6, ((var_0 ? var_5 : var_6)))), ((min((!var_2), (~var_9))))));
    var_25 = ((3028776635 ? var_7 : (min(var_5, ((0 ? var_2 : var_3))))));
    #pragma endscop
}
