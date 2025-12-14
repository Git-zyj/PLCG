/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((max(((max((arr_4 [1] [i_0]), (arr_5 [i_0] [i_1])))), ((var_14 ? (arr_5 [i_0] [i_1]) : var_8)))));
                var_17 = (min(var_17, (((((-(min(-2263671427142184953, 0)))) / (arr_4 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_4 [i_0] [i_1])));
                                var_19 = (max(var_19, (((((((~1) ? var_13 : (1 | 1)))) ? (arr_8 [i_0] [i_0] [i_0] [10]) : ((((arr_8 [i_0] [9] [i_3] [i_4]) >= var_12))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 1;
    var_21 = (max((min((min(var_6, var_6)), (~var_12))), (((var_6 && (!57))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_22 |= (max(((((min(var_16, (arr_17 [i_5] [i_6])))) ? var_0 : (arr_1 [i_5]))), (arr_14 [i_5])));
                arr_19 [i_5] [i_5] = (arr_3 [i_6] [i_5]);
                var_23 = (max(var_23, (arr_9 [i_5] [i_6] [i_6] [i_6])));
            }
        }
    }
    #pragma endscop
}
