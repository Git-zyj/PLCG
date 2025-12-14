/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (min((((arr_5 [i_0] [i_0]) ? var_15 : ((1 * (arr_0 [i_4] [i_1]))))), (((((min(-123, (arr_9 [i_1] [i_2 + 1] [i_3 - 1] [i_4])))) >= 24)))));
                                var_20 *= (var_0 >= (~1));
                                arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_2 + 2] [i_2] [6] = ((!(arr_12 [i_0 + 2] [i_0] [i_0 + 1] [i_2] [i_0])));
                                var_21 = (min(var_21, ((max(1, (arr_6 [i_4] [i_1]))))));
                            }
                        }
                    }
                    var_22 = (max(((((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])))), (((arr_11 [i_0 + 3] [i_1]) ? var_6 : -51))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_23 ^= var_12;
                            var_24 = ((((arr_6 [i_2] [i_1]) | (arr_6 [i_2] [i_2]))));
                        }
                        var_25 &= (max((((!((min(27395, (arr_4 [i_5] [i_1] [i_1]))))))), (arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [0])));
                        var_26 -= ((26 ? 1 : (arr_12 [i_0] [0] [i_1] [0] [i_0 + 2])));
                        arr_19 [i_0] [i_0] [i_2] [i_0] = (((!-74) ? 1 : -54));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_27 = (max(var_27, var_2));
                        arr_24 [i_0] [i_1] [0] [i_7] [0] [i_7] &= (arr_7 [i_0 + 2] [i_0 - 2]);
                    }
                }
            }
        }
    }
    var_28 = var_0;
    var_29 = ((!(((var_5 ? var_7 : (min(var_2, var_12)))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            {
                arr_31 [i_8] = (((min((arr_22 [i_8] [i_9]), (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (((arr_10 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ^ ((var_6 ? 1 : (arr_8 [i_8] [i_8] [8] [i_8] [10] [i_8]))))) : (arr_15 [i_8] [i_9] [i_9 - 1]));
                arr_32 [i_9] [i_9] [i_8] = (((arr_4 [i_8] [i_8] [i_8]) ? (arr_2 [i_9 - 1] [i_9]) : -54));
                var_30 &= (arr_5 [5] [i_9]);
                var_31 = ((-(((!(((~(arr_20 [i_8] [0] [i_8] [i_8])))))))));
            }
        }
    }
    var_32 = (min((var_11 - var_5), -19990));
    #pragma endscop
}
