/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 = (min(var_12, var_1));
            arr_5 [2] = var_10;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_13 = var_0;
                            var_14 -= (((arr_8 [i_3 - 2] [i_4 - 1] [11] [5]) ? (-1137877956 >= 1) : ((-1137877956 ? 65535 : -1137877962))));
                            arr_16 [14] [16] [18] [2] = (((1137877953 - 2119614060) / var_1));
                            var_15 = (-37 <= 245760);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [13] [i_6] [i_6] [19] = ((arr_20 [11] [9] [20] [12] [16] [i_5 + 2]) + (arr_20 [1] [14] [5] [19] [17] [i_5 + 2]));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_16 += ((var_3 == (arr_23 [1] [i_5 + 1] [8] [i_5 - 1] [16] [10] [5])));
                            arr_26 [i_6] [11] [15] [1] [17] = (arr_14 [1]);
                            arr_27 [12] [i_6] [9] [2] [17] = arr_15 [14] [0] [i_5 + 2] [i_5 + 2] [17];
                            arr_28 [i_6] [1] [4] [15] [i_6] = (((arr_2 [i_5 + 1] [i_5 - 1]) * -var_5));
                            var_17 = ((2140165777 + (((arr_3 [14] [7] [6]) / var_7))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_18 = -16;
                            var_19 = (((arr_30 [19] [i_5 + 2] [14] [6]) || 1));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, (var_3 == 703944874)));
                            var_21 = ((((0 ? (arr_15 [4] [3] [3] [4] [12]) : -119)) * (2097151 || var_1)));
                        }
                    }
                }
            }
            var_22 = (((2140165777 || -60) < 3872));
        }
        arr_35 [15] = (((((min((arr_3 [17] [17] [0]), 1)) != (min((arr_33 [i_0]), (arr_4 [2] [9]))))) ? (min((min((arr_25 [13] [0] [5] [4]), var_9)), 1544)) : var_2));
    }
    #pragma endscop
}
