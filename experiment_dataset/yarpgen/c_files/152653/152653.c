/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(18, 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 = (arr_13 [i_3] [i_3] [i_3] [i_1] [i_3]);
                                var_12 = (max(var_12, var_1));
                                arr_16 [i_2] [i_2] [i_2] [i_3] [i_3] = var_5;
                            }
                        }
                    }
                    var_13 = (((((-(arr_4 [i_1] [i_2])))) < var_7));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_14 = ((var_4 ? (arr_21 [i_0] [i_6] [i_5] [i_6]) : (arr_14 [i_6] [i_5] [i_6])));
                                var_15 = max((((var_1 < (3932160 / 1)))), ((((((arr_6 [i_0] [i_0] [i_0]) ? var_8 : (arr_8 [i_0] [i_1] [i_5] [i_6])))) ? ((var_3 ? var_0 : var_8)) : ((((var_5 || (arr_3 [i_0] [i_6] [i_7]))))))));
                                var_16 = 840179389901073456;
                                arr_25 [i_6] [i_1] [i_6] [i_6] [4] [i_0] = ((189 ? (arr_1 [i_7 + 2]) : (max((arr_11 [i_7] [i_7] [i_7 - 2] [i_7 - 1] [i_7 - 1]), (arr_11 [i_7 + 3] [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 - 2])))));
                            }
                        }
                    }

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_17 = 32;
                        var_18 = (arr_2 [i_1]);
                        var_19 = (((189 ? (arr_21 [i_0] [i_8 - 1] [i_8 + 2] [6]) : (((arr_26 [i_8 - 2] [1] [1] [1]) + (arr_0 [8]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_20 ^= (arr_8 [5] [i_5] [i_1] [8]);
                                var_21 = (((((((var_6 && (arr_15 [i_0] [i_5] [i_9] [i_10]))) ? -16929483 : var_5))) > (((((0 ? var_3 : 4294967295))) ? var_7 : (arr_17 [i_9 - 2] [i_9 - 1] [i_10])))));
                            }
                        }
                    }
                }
                var_22 = ((((arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) & var_9)));
                var_23 -= ((((((arr_18 [i_0] [i_0]) ? 1712227732 : -16929483))) ? (min(1, (arr_18 [i_1] [i_0]))) : ((((arr_18 [i_0] [i_1]) ? (arr_18 [i_0] [i_1]) : var_4)))));
                var_24 &= arr_0 [i_0];
            }
        }
    }
    #pragma endscop
}
