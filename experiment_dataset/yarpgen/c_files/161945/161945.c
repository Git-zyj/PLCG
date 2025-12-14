/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = 62871;
                                var_21 = -var_15;
                                arr_15 [i_0] [i_1] [i_2] [8] [i_1] = (((((-99 ? 62859 : 3985))) & ((~(arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_4])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_6] [i_1] [i_1] [2] [i_0] = (((((arr_21 [i_1]) && var_14)) ? (!var_10) : ((((4378971649416806631 && var_6) || 27208)))));
                                arr_23 [i_1] = (min((((var_7 | (arr_21 [i_1])))), (max(14104033433574382522, (arr_21 [i_1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_29 [5] [i_1] [i_8] [i_8] = ((min(-127, 60)));
                            arr_30 [i_0] [i_1] = -0;
                            var_22 = var_3;
                        }
                    }
                }
                arr_31 [i_0] [i_1] = ((var_6 ? (((((457 << (-4378971649416806631 + 4378971649416806631)))) ? -30477 : (~var_9))) : -4378971649416806631));
            }
        }
    }
    var_23 = (max(var_23, -var_4));
    #pragma endscop
}
