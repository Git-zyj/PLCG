/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = 1209761242;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                arr_17 [i_0 - 2] [1] [i_1] [i_0] [i_0] = ((-(arr_12 [8])));
                                var_14 ^= (((((min((arr_6 [i_1] [i_3] [7]), var_12))) - (var_5 / var_10))));
                                var_15 = (((max((arr_14 [i_0 + 3] [i_0 + 4] [i_4 + 4] [i_2] [19]), var_3)) / (arr_14 [i_2] [i_1] [i_4 - 1] [12] [18])));
                                var_16 -= ((!(arr_2 [i_1])));
                                var_17 = (0 >> 0);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_18 = ((var_11 ? (arr_13 [i_2 + 2] [i_1] [i_2 + 3] [i_0 - 2] [i_5]) : var_6));
                                var_19 *= ((-(arr_16 [2] [i_0 - 2] [2])));
                                arr_21 [i_3] [i_1] [4] [i_5] [i_5] [11] = ((((((arr_11 [i_5]) & var_9))) && (((var_4 ? var_1 : var_2)))));
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_5] = ((32760 ? 1 : 1));
                                var_20 *= (((var_0 <= (arr_12 [14]))));
                            }
                            var_21 = (min(var_21, (1 / 1)));
                            arr_23 [i_0 + 4] [i_1] [i_1] [13] [i_2] [9] = (((arr_13 [i_0] [6] [11] [i_3] [18]) ? 32761 : ((32760 / ((32783 ? 1 : var_0))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                var_23 = (max(var_23, (((((((arr_9 [i_6] [i_6] [i_7]) & var_3))) ? (arr_2 [i_7]) : ((max((arr_9 [i_7] [0] [18]), (arr_9 [i_7] [1] [6])))))))));
                arr_29 [4] [5] = (max((max(((~(arr_1 [i_6] [i_6]))), ((max((arr_14 [i_6] [i_7] [i_7] [6] [7]), (arr_7 [14] [i_7])))))), ((max((arr_19 [1] [i_7] [i_7] [i_6]), (arr_19 [i_6] [i_7] [11] [i_6]))))));
            }
        }
    }
    var_24 = (var_11 / 1);
    #pragma endscop
}
