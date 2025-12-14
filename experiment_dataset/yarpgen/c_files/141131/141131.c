/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (arr_6 [i_4] [18] [18]);
                                var_14 = (min(var_14, (((-(arr_4 [i_0] [i_0] [i_0]))))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] = ((var_6 == (((arr_5 [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_2] [i_3] [i_3] [i_0] [i_0] [i_3]) : (arr_3 [i_0] [i_1])))));
                                var_15 = ((28 ? (((1 < var_11) ? var_11 : (arr_2 [i_3] [i_3]))) : ((((arr_0 [i_4]) - 223)))));
                            }
                        }
                    }
                    var_16 = ((+((min((arr_11 [i_0] [i_1] [i_2] [i_2] [i_2]), 223)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 = (arr_1 [i_0] [i_0]);
                                arr_18 [i_2] [i_6] = (((((arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6]) - (arr_9 [i_1] [i_2] [i_5] [i_6])))) ? 33 : (arr_0 [i_5]));
                                var_18 *= (arr_15 [19] [i_5] [i_6]);
                            }
                        }
                    }
                    arr_19 [i_2] [19] [19] = (((arr_17 [i_2] [i_1] [i_2] [i_1] [i_0]) ? (((((64229 < (arr_15 [i_0] [i_1] [i_2])))) >> (((((arr_11 [i_0] [i_2] [i_2] [i_1] [i_2]) ? 1298 : (arr_4 [i_1] [i_1] [i_1]))) - 1281)))) : ((((arr_8 [i_0] [i_0] [i_2] [i_2]) == (((arr_11 [i_0] [i_0] [i_1] [i_2] [i_2]) ? (arr_0 [i_1]) : 28)))))));
                    var_19 = (((arr_15 [i_2] [i_1] [i_0]) ? ((var_2 % (arr_4 [i_0] [i_1] [i_2]))) : (arr_17 [i_0] [i_1] [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    var_20 = var_12;
    var_21 += var_5;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                var_22 *= (((((-(arr_14 [i_8] [i_8] [i_7] [i_7])))) ? var_1 : -23221));
                var_23 += -var_12;
            }
        }
    }
    var_24 &= var_5;
    #pragma endscop
}
