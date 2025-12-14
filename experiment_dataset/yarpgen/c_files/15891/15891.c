/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_10 = (min((min(var_9, ((var_6 & (arr_6 [i_2] [i_2] [i_1]))))), ((7 ? ((var_2 ? 18 : (arr_0 [i_1]))) : ((-90 ? 237 : 219))))));
                            arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((var_4 ? 17158644024102395809 : ((((var_3 + var_3) ? (arr_4 [i_0] [i_1]) : ((~(arr_4 [i_0] [i_0]))))))));
                            var_11 = arr_3 [i_1];
                            var_12 += arr_9 [i_2] [i_2] [1] [i_2];
                            arr_12 [i_0] [1] [i_0] [i_0] = (arr_7 [i_2 - 2] [i_2] [i_2 + 1]);
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = -221647559;
                var_13 = ((~(max((219 == -18985), (max(var_0, var_8))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    var_14 = 35777;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_6] [i_6] [i_7] [i_8] = (max(1306104050, -101));
                                var_15 = (max(var_15, (((((max((arr_18 [i_5 - 2] [i_6 + 3] [i_8]), var_1))) ? (((var_1 ? -13 : (!3)))) : (arr_22 [i_4] [i_4]))))));
                                var_16 = (arr_18 [i_5 + 2] [i_5 + 2] [2]);
                                var_17 = (max((((((((arr_16 [i_4]) ? var_1 : (arr_7 [18] [i_5] [i_8])))) ? -17128 : (arr_15 [i_5 + 1] [i_6 + 2])))), (min((((arr_14 [8] [8]) | (arr_20 [i_4] [i_6] [i_8]))), ((max(35777, 29760)))))));
                                arr_29 [i_4] [i_5 + 2] [3] [i_6] [i_5 + 2] [i_7] [i_8] = (((~27106) ? ((((arr_4 [9] [9]) || (arr_20 [i_4] [i_6] [i_4])))) : ((max((arr_0 [i_6]), -60)))));
                            }
                        }
                    }
                    arr_30 [i_4] [i_4] [i_6] = (((arr_21 [i_4] [i_6] [i_6] [i_6 + 3]) ? var_4 : var_6));
                }
            }
        }
    }
    #pragma endscop
}
