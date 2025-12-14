/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = (((((1 * 1) <= ((((arr_5 [i_0 + 3] [i_0 - 2] [i_1]) < (arr_1 [i_1])))))) && 1));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 *= (((((1 ? ((1 ? -7705 : 4009968972)) : (((min(27544, 0))))))) ? (((arr_14 [i_0 + 1] [i_1] [i_2 - 1] [i_3 + 1] [i_4]) & (arr_14 [i_0 - 2] [i_1] [i_2 - 1] [i_3 + 1] [i_4 - 2]))) : 1));
                                var_17 = ((((((196 ? 1827417697 : 123)) < (((arr_15 [i_1] [i_1] [i_1] [i_1] [9] [i_1] [i_1]) ? -9648 : 1)))) && (((-3217890551666625845 ? -90 : 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                arr_22 [1] = (49406 != 0);
                arr_23 [i_5] [i_5] [i_6 - 1] = 0;
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_18 = ((93 & (((arr_4 [i_6 + 2] [i_6 - 1] [i_6 - 1]) & (arr_4 [i_6 + 2] [i_6 - 1] [i_6 - 1])))));
                            var_19 -= 56405;

                            for (int i_9 = 1; i_9 < 12;i_9 += 1)
                            {
                                var_20 -= (((arr_27 [i_5] [i_5] [i_6] [i_7 + 1] [i_8] [12]) ? (((((-9648 & (arr_9 [i_5])))) ? 1 : ((17851 ? (arr_18 [9]) : (arr_9 [i_7 + 1]))))) : ((231 ? 1 : 3696))));
                                var_21 = (((arr_30 [i_5] [i_5] [i_7]) ? ((((max(-9648, (arr_31 [i_5])))) & (12480 * 2047))) : (((arr_30 [i_5] [i_8] [i_7]) - (arr_25 [i_5] [7] [i_5])))));
                                var_22 = (max(var_22, ((((32253 & 116) < (((24576 || (arr_29 [i_6 + 2] [i_6 + 2] [i_7] [i_8] [i_9] [i_7 + 1])))))))));
                                arr_35 [i_5] [i_5] [i_5] [i_7] [i_5] = (((arr_2 [i_5]) ? (max((0 && 168), ((14 ? (arr_19 [i_5]) : 196)))) : (((52236 < (arr_3 [i_6 + 1] [i_7 - 1]))))));
                            }
                        }
                    }
                }
                var_23 = (min(var_23, ((((arr_7 [i_5]) ? ((-1 ? 31500 : ((max(89, -5112))))) : (arr_21 [i_5] [i_6 - 3] [i_6 - 3]))))));
                arr_36 [i_5] [2] = (((((-((0 >> (65535 - 65509)))))) ? 46 : (((170 != 9647) & -5112))));
            }
        }
    }
    #pragma endscop
}
