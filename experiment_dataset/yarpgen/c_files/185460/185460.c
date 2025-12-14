/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = 3;
                    arr_9 [i_0] = ((14376959007473459930 ? (((((10422 ? var_11 : -27171))) ? 1528360016 : 2)) : (!var_2)));
                }
            }
        }
    }
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_14 = -422922561;
                                var_15 = ((24 ? var_10 : 0));
                                arr_26 [i_3] [i_4] [i_4] [i_5] [i_7] = ((!-18) ? var_1 : ((96 ? 499597630 : var_7)));
                                arr_27 [3] [3] [i_5 - 2] [i_6] [i_5] = (!1960601646048150755);
                            }
                        }
                    }
                    arr_28 [i_3] [i_5] [i_5] = ((var_4 ? (~-2082820389) : 4095));
                    arr_29 [i_5] [i_5] = 59035;
                }
            }
        }
    }
    #pragma endscop
}
