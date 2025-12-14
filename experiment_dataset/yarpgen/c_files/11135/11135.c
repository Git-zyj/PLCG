/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? -35534392 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((24 * (arr_1 [i_0])));
                var_19 = 7;
                arr_6 [i_1] = ((((((((arr_3 [i_0] [i_1]) && var_2))) << (((min(var_8, var_8)) - 2211738543))))) ? (((((min(3193081038, 0))) >= var_2))) : var_15);
                var_20 ^= 5100287861924360315;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [0] [i_2] [i_3] = (arr_5 [i_3]);
                            arr_12 [i_3] [i_2] [i_1] = (((((var_1 * var_8) ? var_15 : ((var_9 ? var_10 : -3654))))) ? (var_6 - 0) : ((max(var_15, (arr_1 [i_0])))));
                            var_21 += (((((~(min(var_6, 1762072916))))) % -var_7));
                            arr_13 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = (arr_8 [i_1] [i_1] [i_0]);
                            var_22 = var_15;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((((((var_9 ? var_4 : var_3)) - (arr_5 [i_5]))) > ((max((((arr_4 [i_5] [i_5]) * 2532894392)), (~445725963))))));
                var_23 = (max(var_23, var_13));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((min((((((max((arr_25 [i_4] [i_5] [i_6] [i_7] [i_4]), 105)))) ^ (var_14 | -1581611022841599143))), (((max(var_1, (arr_18 [i_5] [i_5]))) | (arr_21 [i_4] [i_4] [i_7]))))))));
                                var_25 += (max((min((((arr_26 [i_4] [i_5]) ? var_15 : 16765444923484053842)), 32177)), (((~(((arr_9 [i_4] [i_6] [i_7] [i_8]) ? (arr_1 [i_4]) : var_12)))))));
                                var_26 = (max((((((var_0 ? (arr_1 [i_6]) : var_3))) ? ((((89 || (arr_8 [i_5] [i_6] [i_8]))))) : (max((arr_22 [i_4] [i_4] [i_4]), (arr_19 [i_8]))))), ((min((!var_4), (var_10 && var_3))))));
                                var_27 = (-825547391 - -119);
                            }
                        }
                    }
                }
                var_28 = (arr_16 [11]);
            }
        }
    }
    var_29 = var_5;
    #pragma endscop
}
