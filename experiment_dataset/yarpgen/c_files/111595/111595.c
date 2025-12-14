/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = ((((max((max(var_4, var_5)), -16484))) ? ((((var_13 < var_12) ? ((2928885607 ? var_1 : var_0)) : (((min(0, 1))))))) : ((var_15 ? var_12 : (!var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] |= ((+(min((((arr_2 [i_0] [i_1]) ? (arr_6 [i_1]) : (arr_0 [i_0]))), ((max(3923697861, var_14)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((((((((arr_1 [i_0]) / (arr_17 [i_0] [i_3] [i_2] [i_1] [i_0]))) >= (arr_13 [1] [i_1] [1] [i_0])))) << var_3));
                                var_23 = (arr_6 [i_0]);
                                arr_18 [i_4] [12] [i_0] [i_1] [i_0] = var_17;
                                arr_19 [12] [i_1] [i_2] [i_3] [i_0] = (((var_11 ? var_15 : (var_8 != 4294967289))));
                            }
                        }
                    }
                }
                var_24 = (!((((arr_3 [i_0] [i_1]) ? (arr_13 [i_0] [i_0] [i_1] [i_0]) : (arr_13 [2] [2] [i_1] [i_0])))));
            }
        }
    }
    var_25 = ((1 >> (29113 - 29082)));
    #pragma endscop
}
