/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(63, ((var_0 ? var_4 : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] [8] |= (min(((-var_4 ? ((max((arr_5 [i_0] [i_0] [i_1] [i_0]), 63))) : (~var_2))), -63));
                    var_11 += (max(((max((((arr_7 [i_0]) && (arr_7 [i_0]))), 0))), (((arr_4 [i_2]) ? ((8054 ? var_9 : (arr_1 [i_2]))) : var_2))));
                    var_12 = ((max((arr_3 [i_0] [i_1]), ((-6621 ? (arr_3 [i_1] [i_2]) : -6631)))));
                    arr_9 [2] [i_2] [i_2] = 2917;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [i_5] = ((-((27146 ? (arr_14 [i_0] [i_1] [i_1] [i_1 + 4] [i_4]) : (arr_14 [i_0] [i_1] [i_3] [i_1 + 4] [11])))));
                                arr_20 [i_3] [i_1 - 3] = arr_0 [i_0] [i_0];
                                var_13 = var_1;
                            }
                        }
                    }
                    var_14 += var_3;
                    arr_21 [i_0] [i_1] [i_3] [i_3] = (arr_7 [i_3]);
                }
                arr_22 [i_0] [i_1 - 1] = 0;
            }
        }
    }
    var_15 -= ((!(((1 ? 6631 : ((0 ? 49829 : 13180859166277468515)))))));
    var_16 *= ((!((((var_9 ? var_4 : 13495))))));
    var_17 = max(((-(max(16383, var_7)))), var_2);
    #pragma endscop
}
