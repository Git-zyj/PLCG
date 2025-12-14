/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((arr_6 [i_0] [i_1] [i_3 - 3] [i_0]) ? ((((max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_4]), var_11))))) : var_2))));
                                var_15 = ((((((arr_10 [i_0] [i_4] [i_2] [i_3 - 1] [i_4]) >= (arr_10 [i_0] [i_1] [i_1] [i_3 - 3] [i_1])))) / ((-(arr_10 [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 1])))));
                                arr_12 [i_0] [i_0] = ((!(((~(arr_3 [i_3 - 1]))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] = ((4290946034 ? ((((((arr_1 [i_0] [i_1]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_5 [i_0])))) ? (!65527) : (~var_5))) : ((((!4290946034) ? ((min(var_10, var_12))) : ((max(7, (arr_0 [i_0])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_16 ^= (((arr_22 [i_8 - 1] [i_5] [i_5] [i_5] [i_5 - 2] [i_5]) - (min((arr_21 [i_6] [i_7 - 1] [i_8 - 1] [i_8 - 1]), var_3))));
                                arr_28 [i_5] [i_8] [i_8] [i_7 + 2] [i_8 - 1] [i_8] = (!1381084687);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_17 = ((((((min(4290946045, var_5))) ? (12 - 78) : ((var_0 ? (arr_21 [i_6] [i_7 + 2] [i_10] [i_10]) : var_8)))) / (((max((arr_27 [i_5] [i_6] [i_6] [i_10] [i_10]), (arr_26 [i_10] [i_10] [i_10])))))));
                                arr_34 [i_5] [i_5] [i_5 - 1] [i_10] = (((arr_30 [i_5 - 2] [i_5 - 2]) << (((max(65527, (arr_25 [i_5] [i_6] [i_6] [i_10]))) - 65514))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            {
                                arr_39 [i_13] [i_6] [i_7 - 2] = (((((1 ^ (~var_8)))) < (max(((~(arr_32 [i_13 + 1]))), ((max((arr_18 [i_6]), (arr_36 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5]))))))));
                                var_18 ^= 7963;
                                var_19 = (max(-1723622191, 15));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = -var_0;
    var_21 = var_12;
    var_22 = var_13;
    #pragma endscop
}
