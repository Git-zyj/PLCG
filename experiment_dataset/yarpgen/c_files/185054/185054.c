/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 ? var_0 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_1] = ((~(arr_7 [i_0 + 2])));
                        arr_12 [i_0 - 1] [i_0] [i_1 + 2] [i_2] [i_1] = ((!(((arr_4 [i_0]) && var_9))));
                        arr_13 [1] [i_1 - 1] [i_1 - 1] [i_1] = (arr_10 [14] [i_2 - 1] [i_2 + 1] [i_1] [8]);
                        var_18 = (var_0 ? (arr_1 [i_2 - 1] [i_1 + 2]) : (arr_3 [i_0] [i_1]));
                        arr_14 [i_0] [i_1] [i_1] [5] = var_4;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_2 - 1] [i_4] [i_1] = (arr_8 [i_1] [i_1] [i_2] [i_1] [i_0]);
                            var_19 = ((((!(arr_9 [i_4] [i_5])))));
                            arr_21 [i_0] [1] [i_2] [i_1] [i_5] = 118;
                        }
                        var_20 = (var_1 * var_15);
                        var_21 *= ((90 ? (((max((arr_2 [i_0] [i_1] [i_0]), -119)) - (((-119 ? 792491313 : (arr_8 [i_0] [2] [i_0] [0] [i_4])))))) : -118));
                        var_22 = ((!(arr_5 [i_1] [i_2] [i_4])));
                        arr_22 [i_1] [i_1] [i_2] [i_4] = ((!((((arr_3 [i_1] [i_1]) % var_10)))));
                    }
                    arr_23 [i_1] [i_1] [i_1] = (164 | 208);

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_28 [i_0 + 1] [i_0 + 1] [i_1] = (((((max((arr_27 [i_0 + 1] [i_2 + 1] [i_1 + 2]), 63612)))) | (arr_6 [i_0 + 1] [i_2 + 1] [i_1] [i_6])));
                        arr_29 [i_0] [i_0] [i_2] [i_2 - 2] [i_2] [i_1] = (((min(((var_15 << (var_8 + 38))), ((max((arr_16 [i_0] [i_1]), 3542923147))))) * ((((!((max(var_2, (arr_4 [i_1 + 2]))))))))));
                        var_23 = var_10;
                        arr_30 [i_1] = ((-(max(((-(arr_10 [i_0] [i_1] [i_0] [i_6] [4]))), (((arr_15 [i_0 + 1] [i_1] [i_2] [i_0 + 1]) ? var_4 : (arr_25 [i_2] [i_2] [1] [i_0 + 1])))))));
                        var_24 = 37788;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = (max(var_25, (((min((arr_5 [0] [i_1 - 1] [i_2 - 2]), (~54)))))));
                        var_26 = (min(var_26, (((!(arr_19 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))));
                        var_27 ^= -118;
                    }
                }
                var_28 = ((-(arr_5 [i_1] [12] [14])));
                arr_34 [i_0] [i_1] [i_1] = (min(4088, ((max((arr_32 [i_0] [i_1] [i_0] [i_1]), (arr_32 [i_0 + 1] [i_1] [i_1] [i_1 + 2]))))));
            }
        }
    }
    #pragma endscop
}
