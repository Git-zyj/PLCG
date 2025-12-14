/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_16 = (((arr_7 [i_0] [4] [i_1] [9]) | (arr_8 [i_0] [i_0])));
                    arr_10 [i_1] [i_0] [i_1] = (((var_2 & var_9) | -18));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_18 [i_4] [i_1] [i_1] [i_4] = (((max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]), var_1)) << (((((arr_16 [i_0] [i_1] [i_4] [i_4] [i_3]) ? (arr_16 [i_4] [i_3] [1] [i_1] [i_0]) : (arr_16 [0] [i_1] [i_3] [i_3] [i_0]))) - 29278))));
                            arr_19 [i_1] [i_1] = (min(-3, (((((11 ? var_12 : (arr_2 [i_0])))) ? ((((arr_5 [i_1]) || 15))) : (((arr_2 [i_1]) >> (var_6 - 3420690593078525936)))))));
                            var_17 ^= (min(-3, var_3));
                            arr_20 [i_1] [0] [i_3] [i_3] = ((6 ? ((max(-25, -3))) : ((max(3, 7)))));
                        }
                    }
                }
                var_18 ^= (((arr_15 [i_0] [6] [6] [6]) < (((-12 ? -12 : 3)))));

                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_25 [i_1] = (((var_8 ? -22 : -3)));
                        arr_26 [i_0] [i_1] [i_0] = ((-((-12 ? -20 : -7))));
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_0] [i_7] [i_1] = (((((+(min((arr_1 [i_0]), 3))))) ? (min(var_9, (var_11 != var_3))) : (max(((-27 ? -20 : var_12)), (max(var_12, var_10))))));
                        var_19 = (((min(19, 17))));
                    }
                    var_20 |= (((((min(19, var_0))) ? (((-17 ? 16 : -34))) : ((var_10 ? (arr_3 [4] [i_1]) : var_1)))));
                }
                var_21 ^= (((((-19 ? (((-24 == (arr_1 [i_1])))) : (arr_8 [i_0] [i_1])))) ? -22 : ((((max(19, 45))) ? ((((arr_22 [i_0] [i_1] [i_0] [i_0]) != (arr_6 [0])))) : (1 | 17)))));
            }
        }
    }
    var_22 = (((min(-16, ((28 ? -21 : -22)))) | 17));
    var_23 = var_10;
    #pragma endscop
}
