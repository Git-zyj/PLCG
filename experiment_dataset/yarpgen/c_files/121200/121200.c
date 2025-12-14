/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(arr_1 [i_0])));
        var_11 = -8889795581289001599;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1 + 1] = var_0;
        var_12 *= arr_6 [12];
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? ((((arr_9 [i_1] [i_1]) << (((((arr_12 [i_1] [i_1 - 1] [i_1]) / (arr_7 [i_1]))) + 256))))) : ((((arr_9 [i_1] [i_1]) << (((((((arr_12 [i_1] [i_1 - 1] [i_1]) / (arr_7 [i_1]))) + 256)) - 287)))));
                    var_13 = var_6;
                }
            }
        }
        var_14 = ((var_1 ? 8 : 4087678077));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_4] [i_5] [i_6] [i_1] [i_7] = (-(arr_14 [i_4]));
                                var_15 = (max(var_15, ((((((arr_18 [i_1] [i_1 + 1] [i_4] [0] [i_1]) / (arr_18 [i_1] [i_1 + 2] [i_7] [i_1] [i_1]))) / -var_1)))));
                                var_16 = ((100 ? ((-(arr_17 [i_5] [i_1] [i_5] [i_5 + 1]))) : ((-(min(var_0, var_8))))));
                                var_17 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_18 = arr_21 [i_9] [i_8] [i_8] [i_5] [9] [9];
                                var_19 = ((((-168 - (var_9 - 43249))) | (((((arr_18 [i_9] [i_8] [i_1] [3] [i_1 - 1]) ? var_2 : var_1)) * (arr_27 [i_1] [i_1 + 1] [i_1] [i_1] [11] [i_1 + 1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 *= (min(((var_8 ? (0 / var_4) : (var_5 > var_5))), ((max(var_2, var_9)))));
    var_21 = (((((max(var_6, var_2))) ? -var_3 : (!1737695586072847216))));
    var_22 = (((((1 ? 168 : ((var_0 ? 8889795581289001599 : 0))))) ? var_9 : (max(-var_2, -84868288941324510))));
    #pragma endscop
}
