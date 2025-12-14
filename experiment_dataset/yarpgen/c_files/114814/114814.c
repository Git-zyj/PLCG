/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_10 = ((var_5 ? (min((((arr_8 [21] [i_1] [i_1] [i_1]) ? (arr_10 [i_0] [i_1] [i_0] [i_3] [i_0]) : var_6)), -var_2)) : (((167 ? ((3670016 ? (arr_2 [i_0] [i_1]) : var_8)) : var_5)))));
                                arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [15] [i_0 + 1] = ((3670001 ? ((max(4294967295, (arr_4 [i_3 + 4])))) : ((var_7 ? var_2 : (((arr_13 [i_0] [i_1] [i_1] [i_0 + 1] [i_4]) ? var_3 : (arr_5 [i_3])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] = max((((((-(arr_21 [i_0] [i_0] [i_1] [i_0] [i_5 - 3] [i_6])))) ? (((var_7 ? var_8 : (arr_16 [i_1] [i_1] [21] [3])))) : -14)), ((((2484137889 - 1) + -7140))));
                            arr_24 [i_5] [i_1] = min(var_5, (((arr_12 [i_0] [8]) ? (max(var_6, (arr_0 [i_1]))) : (max((arr_3 [i_5 + 2]), var_7)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_11 = 11549;
                                var_12 = (arr_15 [i_0 - 2] [i_1] [i_8] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_41 [i_12] [i_11] [i_10] [i_10] [i_10] [21] [i_0] = 13954927853267711643;
                                var_13 = ((((((((37 ? 12790104799252056347 : -14546))) ? var_5 : ((var_2 ? var_2 : var_8))))) ? ((var_1 ? var_4 : (max(var_5, var_6)))) : (((0 ? var_8 : (arr_9 [i_11] [i_11] [i_11] [i_11]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((12 ? 18446744073709551615 : 4294967290));
    var_15 = (min(var_15, var_2));
    var_16 = (((~var_9) - (max(var_7, -1))));
    var_17 = var_1;
    #pragma endscop
}
