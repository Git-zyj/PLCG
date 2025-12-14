/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [12] [i_0] [10] |= (max(((max((arr_5 [i_1]), (arr_5 [i_1])))), (min(8985567680252997012, -8985567680252997013))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] [i_2] = ((!((((((arr_2 [5] [i_0]) ? (arr_3 [4]) : var_1))) < -8985567680252997013))));
                    arr_10 [i_2] [i_1] [i_2] |= (arr_8 [1] [i_1] [1] [4]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] = ((var_7 / ((((max(-29023, (arr_16 [i_1] [i_4] [i_2] [i_1] [i_4])))) ? (arr_16 [i_4] [i_3] [i_2] [i_1] [i_0]) : ((max(-21272, (arr_3 [10]))))))));
                                arr_18 [i_4] [i_1] [i_1] [i_2] [i_3] [12] = (min(-10680, -1));
                                arr_19 [i_0] [10] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_2]);
                                arr_20 [i_0] [5] [1] [7] [i_4] = ((838877991734925675 ? -1 : 1));
                                arr_21 [0] [i_0] [i_2] [6] [i_2] [i_3] [i_4] = (((((1 ? (arr_0 [i_0]) : (arr_8 [i_4] [i_3] [i_2] [i_1])))) ? (max((min((arr_1 [0] [i_4]), -1)), ((max(-1146, -8985567680252996990))))) : ((((arr_8 [i_0] [1] [i_2] [7]) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((var_5 ? 1 : var_0))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_2;
    var_14 = (min(((!(((7287 ? var_8 : var_11))))), (min(0, (var_0 >= 1)))));
    var_15 = var_4;
    #pragma endscop
}
