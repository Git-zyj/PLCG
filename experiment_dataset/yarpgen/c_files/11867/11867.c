/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(1070342752, 3224624543));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = ((((min((arr_6 [i_3]), (arr_6 [i_2])))) ? (((arr_13 [i_0] [i_1]) ? (arr_13 [i_2] [i_1]) : (arr_9 [i_0] [i_0] [i_0]))) : var_6));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((((((arr_1 [i_0]) | (arr_1 [i_0])))) ? ((57931 ^ (arr_3 [i_0] [i_1] [i_2]))) : (arr_3 [i_4] [i_4] [i_4])));
                            }
                        }
                    }
                }
                arr_15 [i_0] = (((466 * 41520) < 1));
            }
        }
    }
    var_11 += (((((~((var_8 ? var_6 : var_1))))) ? (min((((54629 ? 41544 : 1070342752))), var_0)) : ((min(var_5, ((var_7 ? 1070342752 : var_7)))))));

    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        arr_18 [i_5] [i_5 - 1] = (min(((((arr_17 [i_5] [i_5 - 2]) ? (arr_12 [i_5] [i_5 + 1] [i_5 - 2] [i_5 + 2] [i_5] [i_5]) : (arr_1 [i_5])))), (var_5 / 3224624572)));
        arr_19 [i_5] = (min(((min((!1921085513), ((var_2 ? var_3 : -1921085513))))), (((((var_5 ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_6))) ? var_5 : var_8))));
        arr_20 [i_5] [i_5 + 1] = (arr_12 [i_5] [15] [i_5 + 3] [i_5 + 2] [i_5] [i_5 + 2]);
    }
    var_12 = (min(var_0, var_4));
    #pragma endscop
}
