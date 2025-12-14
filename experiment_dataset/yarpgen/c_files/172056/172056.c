/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((max((var_6 % var_11), (var_3 & var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((((!((min(-1952020313, var_0))))) && ((min(-120, var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = -1073739776;
                                var_18 = (arr_0 [i_0] [i_2]);
                                var_19 = (arr_11 [i_0] [3] [i_1] [i_3] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [18] = var_4;
                                var_20 ^= var_12;
                                arr_19 [i_1] = (((arr_15 [i_5] [i_5] [i_6 - 1] [i_5] [i_2]) / (arr_15 [i_6 - 2] [1] [i_6 - 2] [i_5] [5])));
                                var_21 *= (((((-(arr_15 [i_2] [i_5 - 1] [i_6] [1] [i_6])))) ? var_11 : ((var_6 ? (arr_13 [i_2] [i_5 - 1] [i_6] [i_6]) : (arr_13 [i_2] [i_5 - 1] [12] [i_2])))));
                            }
                        }
                    }
                    arr_20 [i_2] [0] [0] [12] |= ((-(((arr_3 [i_0] [i_2]) ? 2523042901569804433 : var_6))));
                    arr_21 [i_1] [i_2] = 149;
                }
            }
        }
    }
    var_22 *= ((((var_15 ? var_7 : (max(var_10, var_13)))) >= var_14));
    var_23 &= var_8;
    #pragma endscop
}
