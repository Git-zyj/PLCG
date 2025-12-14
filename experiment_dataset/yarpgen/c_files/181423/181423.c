/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [6] [i_1] [i_0] = (~-5899345715571240368);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [8] [i_3 + 3] [i_0] [i_1] [i_0] = ((-((-(arr_8 [i_0] [i_2 + 2] [i_3 + 1] [i_4 - 1])))));
                                arr_15 [i_0] [i_2] [0] [i_4 + 1] = (arr_8 [3] [i_1] [i_2] [i_3]);
                                var_20 = ((((!(((var_16 ? (arr_7 [i_0] [21]) : var_2))))) ? (((!var_5) ? var_15 : ((var_17 ? 2466254566 : var_7)))) : -17612));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_2] [0] [i_6] [i_5] = 24;
                                var_21 &= (max(((((!7) > ((var_12 >> (var_12 - 29)))))), -388789591));
                                arr_21 [i_0] [i_1] [18] [i_5] [i_1] [i_6] &= (min(428930683, (~var_7)));
                                arr_22 [i_0] [19] [i_0] [i_5] [15] = 16244;
                                arr_23 [i_0] [13] [i_2] [i_0] [17] [13] = (!237571695);
                            }
                        }
                    }
                    var_22 = (max(var_22, ((min(((((arr_5 [i_0] [i_2 + 4] [i_2 + 1]) == var_18))), -9293)))));
                    var_23 = ((!(!var_17)));
                }
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
