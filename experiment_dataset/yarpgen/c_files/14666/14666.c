/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] = -3;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_1] [i_3] [i_4] = (max((((var_12 ? (arr_10 [i_2] [i_3 - 2] [i_2] [i_3 - 2] [i_3]) : var_12))), ((~((var_17 ? 2958960872845393393 : 61))))));
                                arr_17 [i_2] [i_2] [i_2] [i_4] [i_2] [i_2] = (((((arr_11 [i_2] [i_1 + 1] [i_0 + 3] [i_2]) ? (~3270903767606369063) : var_10))) ? (max((((var_14 ? var_12 : var_15))), (arr_13 [i_0] [i_1 + 1] [i_4]))) : (arr_5 [i_2] [i_2]));
                                var_18 = (min(var_18, -var_6));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] = var_12;
                                arr_25 [i_0] [i_1] [i_2] = (max((arr_8 [i_1] [i_2] [i_2] [i_6]), ((((arr_19 [i_0] [i_0 + 4] [i_0 + 4] [10]) ? ((((arr_11 [i_0] [i_1] [i_5] [i_2]) < var_8))) : ((0 ? 1 : 200)))))));
                                arr_26 [i_0] [i_1 + 1] [i_0] [4] [i_2] = (((((var_13 && -6562048743115089502) ? (arr_13 [i_2] [i_0 - 1] [i_6]) : var_7))) < (arr_22 [i_0] [i_0] [i_2] [i_0] [i_0 + 2] [i_2] [i_5]));
                                arr_27 [i_0] [i_1 + 1] [i_2] [i_5] [i_2] = (arr_23 [i_0] [i_1] [i_2] [i_0] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(((((0 ? var_1 : var_13)))), (max((max(6075605433420160537, var_14)), var_4))));
    var_20 = ((var_1 || var_2) >= (min(var_16, var_7)));
    #pragma endscop
}
