/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (((187 * 1127697261) ? ((((arr_4 [i_3]) == (arr_11 [i_0] [i_0] [i_0] [i_3] [i_3])))) : -56301));
                                var_16 = ((+(((arr_5 [i_0] [i_3 - 1]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_2 - 1] [i_1])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_0] = (arr_4 [i_0]);
                        var_17 ^= ((-(arr_2 [i_0] [i_2 - 1] [i_0])));
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_18 += (((~(((arr_20 [i_0] [13] [i_0] [i_7] [i_8]) ? 195 : 14712385882525446029)))));
                                arr_23 [i_0] [i_7] [i_6] [i_0] [i_8] = (max((arr_1 [i_6 - 3]), (max(((min(var_7, var_1))), ((var_13 ? var_14 : (arr_19 [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_19 = (min(var_19, 123));
                                var_20 = (!4);
                                arr_32 [i_0] [i_0] [10] [i_9 + 1] [i_9] [i_0] [i_9] = (arr_27 [i_9 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, var_7));
    #pragma endscop
}
