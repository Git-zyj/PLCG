/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_9 ? var_8 : (min(-361765150, var_5)))), (((!((max(var_8, var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [8] [i_0] = (max((((arr_5 [i_1] [i_0]) ? (!1414124404) : ((var_6 / (arr_6 [i_0] [i_1] [i_0]))))), (((((var_4 ? var_0 : var_7)) >= (min(var_5, (arr_6 [i_1] [i_1] [i_0]))))))));
                var_11 = (max(var_11, (((~(!-1))))));
                var_12 *= (((!var_5) ? (~0) : (arr_6 [2] [5] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [10] [i_2] [i_2] = (((arr_5 [i_3] [i_0]) ? ((var_2 ? (((arr_0 [i_2]) ? var_6 : (arr_9 [3] [i_0]))) : (arr_5 [i_0] [i_3]))) : var_5));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 8;i_4 += 1)
                            {
                                var_13 *= (arr_9 [i_0] [i_1]);
                                var_14 = (max(var_14, ((((((~(arr_15 [i_0] [i_0] [i_3] [i_0] [i_0])))) || (arr_5 [i_4 + 3] [i_0]))))));
                                var_15 = var_8;
                            }
                            var_16 = (min(var_16, (arr_13 [i_3] [i_3] [2] [i_3] [4])));
                            var_17 += (min((min(((max(143, (arr_15 [i_0] [i_0] [i_3] [6] [i_0])))), var_6)), (((((max(var_0, var_4))) != var_0)))));
                            arr_16 [i_0] [1] [6] [1] [i_3] |= var_9;
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_8));
    #pragma endscop
}
