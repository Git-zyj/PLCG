/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (max((~var_7), (((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 2] [i_0 - 1]) : (max(var_5, var_5))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (min(var_14, ((((max(var_3, ((min(-6553596563936150807, 4095))))) > (arr_0 [i_2 + 2]))))));
                        var_15 -= arr_2 [i_0 + 2];
                        arr_12 [i_0 + 2] [i_1 - 1] [i_2 - 2] [i_1 + 1] [i_2 + 2] = 3091;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_0 + 1] [i_1 + 2] [i_2 + 1] [i_4] = (arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                        arr_16 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] = (max(((((max(-6553596563936150807, var_5))) ? var_0 : ((((arr_2 [i_0 + 1]) ? var_6 : (arr_13 [i_4] [i_4] [i_4] [i_4])))))), (min(var_12, (((arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_4]) ? (arr_1 [i_0 + 1] [i_0 - 1]) : 4564300311413845562))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] = (var_2 & -var_13);
                                arr_22 [i_5] [i_5] = -8599415509020689698;
                            }
                        }
                    }
                    arr_23 [i_2 + 3] [i_1 + 1] = var_8;
                }
            }
        }
    }
    var_16 = (max(var_16, ((((var_0 ? var_11 : (~var_4)))))));
    var_17 = (((((var_7 != ((6553596563936150806 ? var_3 : var_11))))) > (((!(((var_5 ? var_9 : 183))))))));
    var_18 = (!(((-((6553596563936150806 ? 58013 : var_13))))));
    var_19 -= var_10;
    #pragma endscop
}
