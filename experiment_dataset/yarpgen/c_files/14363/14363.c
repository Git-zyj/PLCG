/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 32764;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (min(15152463931215420693, 3294280142494130908));
                arr_5 [i_0] [i_1] = max(-1330457959, (((3294280142494130931 < (arr_0 [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((var_10 ? ((~(arr_9 [i_4] [i_3] [i_2] [i_1] [i_0]))) : (max(2441, (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))), ((-1330457948 & (((arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) ? (arr_8 [i_3] [i_2] [i_1] [i_0]) : 1))))));
                                arr_15 [i_0] [i_0] = ((((1 ? 3215697688 : 0))));
                                var_18 = (max(var_18, ((min((((((max(1, (arr_2 [i_4])))) ? var_13 : ((var_6 ? 2418 : var_13))))), ((~((16431836292075898328 ? (arr_12 [i_2] [i_1] [i_2] [i_1]) : -32759)))))))));
                                var_19 *= ((((((((arr_0 [i_3]) + var_14))) ? (arr_13 [i_0] [i_1] [i_2] [i_2] [i_4]) : (1 & 1951148656))) - (((((16384 ? 4294967295 : 1)))))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] = max((((((3493552578698718949 ? (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : -18)) > (!var_2)))), (((((718834614 ? 56798 : (arr_2 [i_0])))) ? ((((arr_4 [i_0] [i_1] [i_1]) != (arr_8 [i_0] [i_0] [i_0] [i_0])))) : 852368277)));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = (max(var_20, ((((((~(arr_13 [i_5] [i_5] [i_1] [i_0] [i_0])))) ? 1638958550 : (!4))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_21 *= (((((136 & (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((~(arr_17 [i_0] [i_6] [i_5] [i_0])))) : (((arr_17 [i_0] [i_6] [i_5] [i_0]) | (arr_7 [i_0] [i_1])))));
                                var_22 = ((((((arr_24 [i_0] [i_1] [i_5]) ? 146 : (arr_24 [i_0] [i_1] [i_7])))) ? -12696 : (max(var_4, ((-1 ? 852368277 : 6871))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
