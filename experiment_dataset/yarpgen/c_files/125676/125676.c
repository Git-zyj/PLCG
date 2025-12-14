/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_15 ? var_9 : var_11)) + ((((var_5 < ((var_17 << (((-2085470393 + 2085470423) - 18)))))))));
    var_21 = -var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = (max(((((!(arr_9 [i_4] [i_3]))) ? (((var_4 | (arr_8 [i_1] [i_2])))) : var_2)), (((-6376 > (arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = min((min(-2085470372, -2085470411)), (((var_8 ? 6373 : var_4))));
                                var_22 = (max(var_22, ((((((min((arr_10 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]), 6370))) ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4]) : ((~(arr_5 [i_2] [i_4])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] [i_6] = (((((var_17 ? (arr_11 [i_0] [i_1] [i_2] [i_5] [i_6]) : (((arr_0 [i_5]) ? 1787268956 : var_13))))) == ((var_1 / ((var_19 ? (arr_9 [i_0] [i_2]) : (arr_13 [i_1] [i_1] [i_1] [i_5] [i_6] [i_2] [i_1])))))));
                                var_23 = 2085470404;
                            }
                        }
                    }
                    var_24 = var_3;
                }
            }
        }
    }
    var_25 = ((var_11 == ((-((min(var_12, var_12)))))));
    #pragma endscop
}
