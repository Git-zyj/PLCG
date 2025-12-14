/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((((var_12 ? var_7 : var_8))) && (((var_12 ? var_13 : var_6)))))), (48780 && 33119)));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_9 ? (arr_0 [i_0 - 3] [i_0]) : (arr_1 [i_0 - 3])))) ? (var_9 ^ var_4) : (((~(arr_0 [i_0 - 1] [i_0]))))));
        arr_4 [20] [i_0] = (((((50464 ? 48780 : -1498))) ? ((var_4 ? (arr_1 [i_0 - 2]) : var_9)) : (((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 + 1])))));
        var_18 = ((((var_13 & (arr_2 [i_0] [i_0 - 3]))) ^ (~var_5)));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_19 = (((((var_3 ? (min((arr_6 [i_1]), var_11)) : (arr_6 [i_0 - 1])))) ? (((-var_13 ? var_14 : (!10243)))) : ((((max((arr_5 [i_1] [i_0]), (arr_1 [i_0])))) ? var_13 : (~var_0)))));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_20 = ((((!(((var_3 ? var_1 : var_6))))) ? 48780 : var_16));
                arr_13 [i_0] |= (((((((var_16 ? (arr_12 [i_2] [i_1] [i_0]) : var_6))) ? (arr_12 [10] [i_0 + 1] [i_0 - 2]) : (arr_10 [20])))) ? var_1 : var_8);
                var_21 = (min(var_21, ((min((arr_11 [i_0] [i_0 - 1]), (max(((-(arr_12 [13] [13] [i_2]))), ((var_11 ? var_14 : var_10)))))))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_16 [i_3] = var_13;
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = (((((-(arr_7 [i_5 - 1] [i_5] [i_0 - 2])))) ? (((~(arr_0 [i_5] [i_3])))) : ((((arr_7 [i_4 + 2] [14] [i_4 + 2]) | (((min(var_6, var_15)))))))));
                            arr_21 [1] [i_4] [i_3] [10] [i_0] = (max(((((((var_8 ? var_4 : (arr_7 [i_0] [i_0] [i_5])))) ? (var_1 || var_13) : (arr_20 [i_0] [1] [i_3] [i_3])))), ((max(var_12, var_2)))));
                            var_23 = (((((arr_19 [i_4 - 3] [i_5 - 1] [i_3] [i_0] [i_4 - 3] [9] [i_3]) >= ((var_12 ? var_13 : var_1)))) ? (max(var_11, var_10)) : (((((~var_11) <= (min(var_9, (arr_7 [i_1] [i_3] [i_1])))))))));
                        }
                    }
                }
                var_24 = var_14;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_25 = var_15;
                            var_26 |= arr_12 [i_6] [i_3] [i_1];
                        }
                    }
                }
            }
            arr_27 [i_0] [i_1] [i_1] = (((((arr_20 [i_0] [i_1] [i_1] [i_1]) * var_14))));
        }
    }
    var_27 += ((1476 ? var_3 : 5605));
    #pragma endscop
}
