/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_1;
    var_11 = (max(var_11, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_12 = (((-(arr_6 [i_0] [i_1] [i_2]))) + ((min((arr_6 [i_0] [i_1] [i_2]), 14))));
                    var_13 = ((((min((arr_7 [i_0] [i_1] [i_1] [i_2]), (arr_7 [i_0] [i_0] [i_1] [6])))) ? ((~(arr_7 [i_0] [i_1] [i_2] [i_1]))) : ((max((arr_7 [i_0] [i_0] [9] [i_2]), (arr_7 [i_0] [7] [i_1] [i_2]))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_14 = (!15142);
                                var_15 = 1;
                                var_16 = (!0);
                            }
                        }
                    }
                    arr_15 [i_3] = ((arr_10 [i_0] [i_1] [i_1] [11]) ? (arr_10 [i_0] [i_1] [i_3 - 2] [i_3 - 3]) : (arr_10 [i_0] [11] [i_3 + 1] [i_0]));
                    arr_16 [0] [i_3] [i_3] [11] = (((1 - 1) ? ((823 ? (arr_1 [10]) : var_3)) : var_3));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_17 = ((arr_7 [i_0] [i_0] [i_1] [i_6]) ? 252 : 33554431);
                    arr_19 [i_6] = (((arr_10 [i_0] [i_1] [i_1] [i_6]) || var_1));
                    var_18 = (arr_1 [i_0]);
                    arr_20 [i_0] [i_0] = ((9206194375261686305 ? var_8 : (arr_17 [i_0] [i_1] [i_6])));
                }
                arr_21 [i_0] [i_0] = max(1, 1);
                arr_22 [10] = (arr_8 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
