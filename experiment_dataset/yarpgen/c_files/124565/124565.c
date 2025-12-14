/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((min(28724, var_6)) != (((var_5 ? var_6 : 28724)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [10] [i_3] [i_3] |= 13211332136819976788;
                            var_12 = (max((arr_7 [i_3] [i_2] [i_1] [i_0]), (arr_1 [i_2 + 1])));
                            var_13 = ((~(arr_5 [i_3])));
                            arr_12 [i_1] = (i_1 % 2 == zero) ? ((max(((+((var_5 >> (((arr_2 [i_1]) - 268143610)))))), var_4))) : ((max(((+((var_5 >> (((((arr_2 [i_1]) - 268143610)) - 2593707661)))))), var_4)));
                        }
                    }
                }
                var_14 = (arr_7 [i_1] [i_1] [14] [14]);
                var_15 = (min(var_15, ((((min(var_7, -28726)))))));
            }
        }
    }
    var_16 = min(var_1, ((max(var_5, (var_3 != var_7)))));
    var_17 *= 1;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_18 = ((+(((((arr_5 [i_4]) + 2147483647)) >> (((arr_5 [i_4]) + 19283))))));
                arr_20 [i_5] [i_4] [i_4] = 75;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_19 = 6995166442816149058;
                                arr_30 [i_4] [i_4] [i_4] [i_5] [i_8] [i_4] [i_4] = ((((min(4341, 12))) ? -2061060540406598036 : -6995166442816149059));
                                var_20 = (min((((arr_0 [i_5]) / var_4)), ((min((arr_0 [i_4]), (arr_0 [i_4]))))));
                                var_21 -= (min((max((arr_9 [i_4] [i_4] [i_4] [3]), (arr_8 [i_4] [i_4] [i_4] [12] [i_4] [i_4]))), 0));
                            }
                        }
                    }
                }
                arr_31 [i_4] = ((-598755548 ? 1 : 1));
            }
        }
    }
    #pragma endscop
}
