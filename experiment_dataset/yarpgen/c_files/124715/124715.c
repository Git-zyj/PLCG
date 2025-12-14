/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = ((((((14 ^ 94) ? (((arr_9 [i_0] [0] [i_0]) ? var_13 : var_14)) : (55039 || 21)))) ? (((arr_8 [i_2 + 2] [i_3] [i_3] [i_3] [i_3]) ? (arr_7 [i_2 + 1] [i_3] [i_3]) : 235)) : ((var_6 ? ((((arr_11 [i_3] [i_3] [i_3] [18] [i_3] [i_3] [i_3]) && var_8))) : ((-20518 ? (arr_2 [i_0]) : (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2 + 2] [1] [i_4 - 1])))))));
                                arr_12 [8] = 11;
                                var_17 -= ((((((-76 ? var_15 : (arr_10 [i_4] [i_3] [i_1] [5])))) && ((max(0, 1))))) && 234);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_18 = (min(var_18, var_13));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_19 = (14 | (arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_6] [i_7]));
                                var_20 = (arr_5 [i_5 + 1]);
                            }
                        }
                    }
                    var_21 = ((!(arr_20 [i_0] [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [21])));
                }
            }
        }
    }
    var_22 = (min(var_22, var_9));
    #pragma endscop
}
