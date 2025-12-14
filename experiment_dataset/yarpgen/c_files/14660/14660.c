/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (~511);
                var_19 = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            {
                var_20 = (max(var_20, (arr_1 [i_2] [i_3 + 4])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_21 = (((arr_0 [i_4]) ? ((min((arr_14 [i_2] [i_3] [i_4] [i_5]), (arr_0 [i_5])))) : ((-((max(var_6, 62722)))))));
                            var_22 = var_1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_25 [i_7] [i_3] [i_7] [i_7] [i_8] [i_2] = 65280;
                                arr_26 [i_6 - 1] [i_7] [i_8] = (min(3410964426119960078, 67));
                                var_23 *= (min(((!((((((arr_22 [i_2] [i_8] [i_8] [i_2]) + 2147483647)) >> (((arr_19 [i_2] [i_7] [i_8]) + 23707))))))), var_8));
                                arr_27 [i_2] [i_7] = (min(var_5, (arr_17 [i_2] [i_2] [i_7] [i_8])));
                            }
                        }
                    }
                }
                arr_28 [i_2] [i_2] = var_2;
            }
        }
    }
    #pragma endscop
}
