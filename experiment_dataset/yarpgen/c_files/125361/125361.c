/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((var_11 / ((-1 ? 3808268324742900059 : 24))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] &= (min((((arr_7 [i_1 + 2]) * (arr_7 [i_1 - 2]))), (((arr_0 [i_1 - 2]) ? var_1 : (arr_7 [i_1 + 2])))));
                                arr_14 [i_4 + 1] [i_3 + 1] [i_2] [10] [10] = ((-10490 | (((var_11 <= 17) ? (((((arr_3 [i_4] [19]) > 17184886174123695125)))) : (arr_4 [i_1] [i_1 - 3] [i_2 + 2])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_7] [i_1] [i_1] [i_5] = ((((min(((~(arr_0 [i_0]))), ((max(var_1, (arr_19 [i_0] [i_5]))))))) && (((-((3733647304 ? (arr_3 [i_1] [i_7]) : 3404560076)))))));
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] [i_0] [i_7] = (arr_8 [i_0]);
                                arr_24 [i_6] [i_1] [i_6] [i_6] [i_6] [i_1] [i_5] &= (((-var_5 & var_7) ? (arr_21 [i_1] [i_0] [i_6] [6] [16] [i_7 + 2]) : ((-(max((arr_17 [i_1] [1] [i_1]), var_5))))));
                                arr_25 [i_0] [i_1 - 1] [i_5] [8] [i_7] = (max(var_10, 3617541638));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
