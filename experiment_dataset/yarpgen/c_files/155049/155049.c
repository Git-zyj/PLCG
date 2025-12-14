/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (((arr_4 [i_0] [i_0] [i_0]) ? -20112155 : ((8978 ? 1 : (arr_5 [i_0] [i_0] [i_0])))));
                            var_19 += var_15;
                            var_20 = (min(var_20, ((((((var_0 & var_5) ? var_15 : (((arr_5 [i_3] [i_2] [i_1]) / -8979)))) & 1)))));
                            var_21 *= (min(((((((arr_1 [i_2]) ? var_2 : var_7))) ? (-8978 - var_12) : ((var_3 - (arr_7 [i_2]))))), (((arr_4 [i_1] [i_2] [i_3]) ? var_13 : (arr_4 [i_2] [i_1] [i_0])))));
                            var_22 = (max(var_10, ((8978 ? (max(var_7, var_16)) : var_8))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = (~var_10);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 17;i_8 += 1)
                            {
                                var_23 = (min(var_23, ((max((((min(69, (arr_21 [i_8]))) & (((arr_23 [i_4] [i_5 + 1] [i_6 + 3] [i_8]) ? -7930048273939514881 : (arr_27 [i_8] [i_7] [i_6] [i_5 + 1] [i_4 + 2]))))), 1)))));
                                arr_28 [i_4 - 1] [i_4] [i_4] [i_7] [i_8] = (!var_12);
                                arr_29 [i_4] = (!-793732863);
                            }
                            var_24 = var_14;
                        }
                    }
                }
                arr_30 [i_4 - 2] [i_5] [i_4] = ((((((((var_16 ? (arr_20 [i_4 + 1] [i_4] [i_4 - 1] [i_4]) : var_15))) ? ((-(arr_24 [i_4] [i_5 - 1] [i_5 - 4] [i_4]))) : (arr_16 [i_5 - 1] [i_5 + 3] [i_4 + 1])))) ? ((((max(var_12, (arr_25 [i_4 - 2] [i_5])))) ? var_7 : (arr_13 [i_4]))) : (!var_11)));
            }
        }
    }
    var_25 = var_15;
    #pragma endscop
}
