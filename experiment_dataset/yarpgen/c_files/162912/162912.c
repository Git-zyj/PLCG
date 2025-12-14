/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((var_1 + var_1), -15));
    var_13 = (min(var_13, (((~(min(var_4, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = 3623705716731828619;

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_15 = ((((arr_1 [i_0]) & ((max(15, -726182774))))));
                    var_16 = ((((max((((-212249233 ? 2246287828 : -8576903721380215751))), (arr_4 [i_1 + 2] [i_2 - 1] [i_2 - 1])))) && (~20)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 |= var_6;
                                var_18 &= (-31328 / ((var_8 ? 28008 : (0 * var_10))));
                                var_19 = (max(((!(arr_10 [i_4] [i_4] [i_4] [i_4 - 1] [i_4 + 2]))), var_7));
                            }
                        }
                    }
                }
                var_20 |= ((((max(var_1, var_4) & -var_9))));
            }
        }
    }
    var_21 = (max(((max((!var_11), (min(5, 52))))), -3508));
    #pragma endscop
}
