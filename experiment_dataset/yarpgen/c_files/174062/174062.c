/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((-346551370 / var_16) ? (arr_5 [6] [6] [6]) : ((var_6 ? (arr_2 [2] [i_1]) : var_4))))) ? (arr_1 [i_0]) : ((((-114 < (((arr_3 [10]) + var_4)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = arr_12 [i_0] [i_0] [8];
                                arr_16 [i_0] [i_2] [i_0] [1] [1] [i_0] = ((-127 - 1) ? 0 : -29930);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_21 = 127;
                            arr_21 [i_0] [1] [i_5] [i_0] = (((((((max(var_19, var_9))) * (((arr_7 [i_6] [i_5]) * (arr_9 [i_1] [4] [i_1] [0])))))) ? -46064660 : (max((max((arr_4 [10]), (arr_4 [i_6]))), ((-(arr_4 [i_6])))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_10 ? (((var_5 ? var_14 : -var_9))) : ((~(min(-29926, var_2))))));
    #pragma endscop
}
