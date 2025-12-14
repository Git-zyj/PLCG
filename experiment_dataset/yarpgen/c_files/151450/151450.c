/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 ^= ((-((((max(var_10, var_8)) == var_5)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] &= var_1;
                            var_13 ^= ((((((arr_1 [i_0 - 3]) < (arr_1 [i_1])))) >> (((max(var_4, (((!(arr_0 [i_2] [i_3])))))) - 14331960924020474171))));
                            var_14 = (max((min(var_9, (arr_5 [i_1] [i_2] [i_3]))), var_9));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((((-(min(var_7, var_6))))) ? (var_7 - var_11) : ((-(max(var_4, var_3)))))))));
                            arr_16 [i_0] [i_0 + 1] [i_0] [i_0] = (min(var_5, var_5));
                            arr_17 [i_0] = (max((max((arr_14 [i_0 - 2] [i_0 - 2] [i_1]), (arr_14 [i_0] [i_0 - 2] [i_4]))), (((~(arr_12 [i_0] [8] [i_0 - 4] [i_0]))))));
                        }
                    }
                }
                var_16 = ((min((arr_8 [i_0] [i_0 - 4] [i_0]), var_3)) != (((-(((var_6 || (arr_9 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_17 = var_4;
                    arr_26 [i_6] [i_6] [i_6] = (arr_19 [0]);
                    var_18 = (((arr_20 [i_6]) ^ -var_7));
                    var_19 = (((arr_20 [i_6]) ? var_0 : (!var_2)));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_20 = ((var_3 / -var_11) ? (((((min((arr_22 [i_6] [i_9]), var_6))) >> (((arr_28 [i_7] [i_7] [i_7] [i_7]) + 74))))) : (min((9223372036854775788 >> 0), var_11)));
                        var_21 = (((min(var_3, (min((arr_22 [i_6] [5]), var_11)))) + (((var_0 > (arr_18 [i_6]))))));
                        var_22 = min(var_3, var_9);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_33 [i_7] [i_10] [i_8] [i_7] [i_6] = (((var_11 / var_6) == ((var_9 ? ((var_10 ? var_2 : var_1)) : (arr_27 [i_6] [i_6] [i_6] [i_6] [i_6])))));
                        var_23 = -var_2;
                        var_24 = ((+(((arr_29 [i_6] [i_7] [i_7] [i_10]) ? (arr_25 [i_6] [i_7] [i_8]) : (arr_29 [i_6] [i_6] [i_6] [i_6])))));
                        var_25 = var_0;
                    }
                }
            }
        }
    }
    var_26 = -var_9;
    #pragma endscop
}
