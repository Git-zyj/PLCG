/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((max(var_9, var_1))) ? (((var_11 ? var_8 : 14819))) : -var_5)), (((~var_9) ? ((4891346237946034669 ? var_5 : var_3)) : (max(var_16, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 |= (max((((~(max(1505704837, 223))))), ((12139411529704295437 ? ((((arr_1 [i_1]) ? var_14 : var_16))) : 4891346237946034669))));
                var_20 ^= ((+(max(((var_1 ? (arr_1 [i_1]) : (arr_3 [i_0 - 1]))), -var_10))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_21 += (+-4891346237946034669);
                                arr_18 [i_2 - 2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((-((((max((arr_17 [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_2]), var_3))) ? ((218 ? 4891346237946034669 : 0)) : (!var_3)))));
                                var_22 = (((-((var_8 ? var_4 : (arr_4 [i_4] [i_4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_23 += ((((((((var_15 ? var_3 : var_4))) ? (((max(26014, var_17)))) : var_4))) ? ((max(124, -6))) : (((((var_16 ? var_16 : var_5))) ? 1 : (((arr_12 [i_2] [i_2] [i_3] [18]) ? (arr_8 [i_4] [i_3]) : 1))))));
                                var_24 += (max((((arr_22 [i_4] [i_3 + 2] [i_4] [i_4] [4] [i_8 + 2]) ? 21124 : var_3)), (((arr_19 [0] [i_4] [0] [i_7] [i_3] [1]) ? var_15 : var_11))));
                            }
                        }
                    }
                    var_25 = ((((((!16467688254457258513) ? 14265240670867903865 : ((var_8 ? 576460752303423487 : var_15))))) ? (((((-(arr_13 [i_2])))) ? (max(218, var_12)) : (((var_12 ? 805306368 : var_10))))) : var_7));
                    arr_25 [i_2] [i_3 + 2] = ((!(((-((21124 ? var_2 : (arr_9 [i_2] [i_2] [i_3] [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
