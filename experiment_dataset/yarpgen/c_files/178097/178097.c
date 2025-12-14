/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (13269 | 26);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = var_8;
                                arr_12 [i_0] [i_0] = ((((var_3 ? (arr_10 [i_0]) : var_4)) == (arr_6 [i_0] [i_1] [i_0] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = (((((~(((arr_2 [i_0] [i_0]) | var_10))))) | (((var_2 || var_0) ? (((arr_11 [i_6] [8] [9] [i_2] [i_2] [i_0] [i_0]) ? var_5 : var_14)) : (((max(var_13, (arr_1 [i_2])))))))));
                                var_21 = (~var_3);
                            }
                        }
                    }
                    var_22 = ((((arr_10 [i_0]) ? (arr_10 [i_0]) : (arr_10 [i_1]))));
                    var_23 |= (max((max(var_3, var_14)), ((var_14 ? (arr_2 [4] [4]) : var_17))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_24 = (max(var_24, (arr_4 [i_8] [i_2] [i_1])));
                                var_25 = (26 | 0);
                                var_26 -= ((((max(var_3, (arr_19 [i_0] [i_7 + 1] [i_2] [i_7] [i_7 + 1])))) % (arr_19 [i_0] [i_7 - 1] [i_2] [13] [i_0])));
                                arr_25 [i_0] [i_0] [i_0] [i_7] [i_8] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_9;
    #pragma endscop
}
