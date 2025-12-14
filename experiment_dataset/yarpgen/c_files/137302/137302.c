/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((min(var_8, var_6)))) ? ((((min(var_3, var_8))) ? ((-1952421966 ? var_3 : var_9)) : (min(var_6, -1)))) : (min(((var_10 ? var_12 : var_10)), (var_5 / var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 += (min((((arr_4 [i_0 + 1] [i_0 + 1]) | var_1)), (arr_1 [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_4] |= ((((arr_11 [i_4] [i_1] [i_4] [i_4 + 3] [i_4] [i_4] [i_3]) ? (arr_11 [i_4] [i_1] [i_2 - 1] [i_4 + 3] [i_4] [i_1] [4]) : (arr_11 [i_4] [i_0] [i_2 + 2] [i_4 - 1] [i_4 + 2] [i_2 + 2] [i_1]))));
                                arr_14 [i_0 - 1] [i_0] [i_4] [i_0] [i_0] |= (min(((((!var_12) != -1952421965))), (((arr_9 [i_0] [i_1] [i_2] [i_0] [i_4]) ? 32768 : (arr_7 [i_0] [5] [5] [i_1])))));
                                var_20 = (max(var_20, 32758));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                {
                    var_21 *= ((var_0 ? (((((min((arr_22 [11] [11] [11] [11]), var_6))) ? (((1952421951 >= (arr_24 [11] [0] [i_7])))) : (arr_22 [i_5] [i_5] [i_5] [i_7])))) : (min((arr_2 [i_5 + 2]), (arr_7 [i_6] [i_7 + 1] [i_7] [i_7])))));
                    arr_25 [i_5] [i_6] [i_6] [i_7 + 2] = ((!((min(360423835, (((arr_4 [i_5] [23]) ? 0 : var_3)))))));
                    var_22 = (min(var_22, var_0));
                }
            }
        }
    }
    #pragma endscop
}
