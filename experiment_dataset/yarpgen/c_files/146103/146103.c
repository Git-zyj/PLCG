/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (max((max((max(var_2, (arr_10 [i_0] [i_3] [i_0] [i_0] [i_0]))), (arr_0 [i_0] [i_0]))), (((~((var_1 ? var_6 : (arr_7 [i_0] [i_3] [i_4]))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] &= (!2124863676);
                                arr_14 [i_0] [i_0] [i_0] [7] [i_0] [i_0] [i_0] = (min(var_7, (~var_2)));
                                arr_15 [i_0] [2] [i_0] [i_1] [i_1] |= -var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_20 [2] [i_2] [i_0] [5] [i_6] = ((((max((arr_6 [i_0] [i_0] [i_2] [i_5]), var_6))) ? ((min((!var_3), (max(var_3, var_1))))) : -var_9));
                                var_16 = (((min((var_7 / var_14), (arr_0 [i_5] [i_0]))) ^ ((max(((var_10 ? var_1 : var_3)), var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_9;
    var_18 = (max(var_18, (((!((min(((var_12 ? var_8 : var_10)), var_0))))))));
    #pragma endscop
}
