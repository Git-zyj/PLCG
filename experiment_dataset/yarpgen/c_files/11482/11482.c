/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_17 = (min((((var_2 + (((arr_1 [i_0 - 2] [i_0]) ? 1195930800 : var_2))))), var_12));
        arr_2 [i_0 - 2] [i_0 - 1] = ((((min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 3])))) ? (arr_1 [i_0 - 2] [i_0]) : (arr_0 [i_0])));
        var_18 *= ((-((var_8 ? var_12 : (arr_0 [i_0 - 2])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                var_19 = (min(((((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_2])))), ((var_12 << (((arr_4 [i_1] [i_2]) - 696692709))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_20 = (min((((((((arr_14 [i_1] [i_3] [i_5]) / var_8))) ? var_0 : ((((arr_9 [i_1] [i_2]) == (arr_5 [i_1] [i_2] [i_5]))))))), ((var_9 ? var_12 : var_11))));
                                var_21 = (max((arr_15 [i_1]), var_9));
                                arr_17 [i_1] [i_1] [i_2] [i_1] [i_4] [i_5] = (((((var_7 ? (arr_12 [i_2] [i_2] [i_4] [i_5]) : (arr_12 [i_1] [i_2] [i_4] [i_4])))) ? (((-57 + 2147483647) >> (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (min((arr_13 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5]), -101))));
                                var_22 = ((~((((min((arr_8 [i_1] [i_2] [i_4]), var_9))) ? (((min(var_5, var_6)))) : (arr_4 [i_3] [i_4])))));
                            }
                        }
                    }
                }
                var_23 = -17403;
                var_24 = (((((var_15 + 2147483647) >> (((arr_11 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2]) + 426569550))))) ? (max((((arr_7 [i_2] [i_1]) ? var_3 : (arr_3 [i_1] [i_2]))), (~var_3))) : ((((!(arr_8 [i_1] [i_1] [i_1]))))));
            }
        }
    }
    var_25 = (min(7, var_3));
    #pragma endscop
}
