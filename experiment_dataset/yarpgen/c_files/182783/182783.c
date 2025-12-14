/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_13;
    var_15 = ((((((var_10 * 49884) / ((min(54833, -27234)))))) * (1391566920 * 0)));
    var_16 = (max(var_16, ((((((((min(var_0, var_0))) < var_9))) * -var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_17 = var_13;
                        var_18 = (max(((max((arr_3 [i_3 - 3]), 155))), (((arr_4 [i_3 + 1] [i_1]) ? ((0 ? 6320736416781071270 : 64)) : (((arr_8 [i_2] [i_2] [i_2] [i_2]) + var_11))))));
                        arr_12 [i_0] [i_0] [i_0] [15] &= (2910625462385625155 - 1);
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_19 = ((((((arr_10 [i_4] [i_4 - 2] [i_4] [i_4 + 2]) / (arr_10 [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 2])))) ? (arr_8 [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2]) : (arr_7 [i_0] [i_0] [i_0])));
                        var_20 = (min((((((!(arr_9 [i_0] [i_0] [i_2] [i_4])))))), (((((min((arr_0 [i_2]), (arr_11 [i_1] [i_1] [i_1] [i_1]))))) & (max(16383, var_4))))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1] = (((((~(arr_21 [i_2] [i_1] [i_0])))) ? ((((arr_11 [i_5] [i_5] [i_5] [i_5]) || 64512))) : (4918 || 9223372036854775807)));
                            var_21 = (((min(var_5, (arr_0 [i_0])))) ? (max((((arr_21 [i_0] [i_2] [i_6]) ? (arr_8 [i_1] [i_2] [i_5] [i_1]) : 16377)), (arr_14 [i_0] [i_0] [i_2] [i_5]))) : ((((((((arr_2 [i_1] [i_5]) ? var_9 : (arr_3 [i_2])))) != (min(10196738954642146707, (arr_2 [i_0] [i_1]))))))));
                            var_22 = var_6;
                        }
                        var_23 = (max(1391566933, var_12));
                        var_24 = (max(var_24, ((((arr_19 [i_1] [i_1] [i_1] [i_5] [i_1] [i_0]) ? (max((arr_5 [i_0] [i_2] [i_2]), (arr_14 [i_0] [i_0] [i_2] [i_5]))) : (((~(!1)))))))));
                        var_25 = (max((((2903400380 > (max(6433782432798516551, var_5))))), (min(-4355472594724487371, -3831053278659494083))));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_26 = (((((4355472594724487371 ? ((((arr_7 [13] [i_1] [i_1]) <= (arr_7 [i_0] [i_1] [i_7])))) : var_2))) <= (max(155, (-6770432408581436261 / var_3)))));
                        var_27 = (min(var_27, (((max((~-105), 4294950917))))));
                    }
                    var_28 = (min(((min((-51 != var_3), (9 - -1914006172)))), (max((arr_7 [i_0] [i_1] [i_2]), 93))));
                }
            }
        }
    }
    #pragma endscop
}
