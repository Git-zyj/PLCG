/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = min(((((((arr_4 [i_0]) >> (var_0 + 30621)))) ? 2147483625 : ((-1794465526 ? (arr_1 [i_1]) : var_8)))), (min((arr_3 [i_0 - 1] [i_1]), (arr_1 [i_1]))));
                arr_7 [i_1] = arr_5 [i_0] [i_0];
            }
        }
    }
    var_19 = ((((-((var_17 ? var_17 : var_11))))) ? ((((max(var_13, var_16))) ? ((var_4 ? var_3 : var_16)) : ((min(512, var_15))))) : var_16);
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = var_17;
                                var_21 = (min((arr_18 [i_4 - 1] [i_3] [i_2 + 3] [i_3] [i_4 + 2] [i_4] [i_2 - 2]), (arr_18 [i_4 - 1] [i_3] [i_2 + 2] [i_5] [1] [i_6] [i_5])));
                            }
                        }
                    }
                }
                var_22 = var_16;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_10));
                                arr_27 [i_2] [i_3] [i_7] [i_8] [i_9] = (((((arr_25 [i_2 + 3] [i_7] [i_8 - 2]) ? ((~(arr_21 [i_2 + 2] [i_2 + 2] [i_8] [i_8]))) : (-15466 % -21739))) | ((((min(var_11, (-32767 - 1)))) ? var_13 : var_7))));
                            }
                        }
                    }
                }
                var_24 = (arr_22 [i_3] [i_2] [i_3] [i_2] [i_2] [12]);
            }
        }
    }
    var_25 = ((8023 >> ((((var_4 ? (-32767 - 1) : 573651665)) + 32787))));
    #pragma endscop
}
