/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = var_8;
    var_17 = ((~((-(18014398509481952 / 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_4] [i_1] = var_0;
                                var_18 = (((max((arr_12 [i_4] [i_3] [i_3] [i_3 - 1]), (arr_12 [i_4] [i_4] [i_1] [i_2]))) ? 242 : ((max((arr_8 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]), (arr_7 [i_2] [i_2] [i_2] [0]))))));
                                arr_15 [i_4] [1] = ((59989 ? ((((!(arr_7 [i_0] [1] [i_2] [i_3]))))) : (arr_6 [i_3] [i_3] [i_2])));
                                arr_16 [i_4] [1] [i_4] [i_3] [i_3] [i_3] = 0;
                                arr_17 [i_2] [i_4] [i_2] [i_3 - 1] [8] = 131071;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_3] [i_5] = var_13;
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = (arr_5 [i_5] [i_2]);
                            }
                            arr_22 [i_1] = (((max((arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1]), var_5)) ? (arr_10 [i_3] [i_1] [i_2] [i_3 + 1] [i_0]) : (((((var_11 ? 1 : (arr_1 [i_0])))) + ((var_7 ? var_1 : 3375222327))))));
                        }
                    }
                }
                arr_23 [i_1] [i_0] = (arr_8 [i_0] [i_0] [17] [i_0] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
