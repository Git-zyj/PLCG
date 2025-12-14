/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 ? -var_16 : var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = ((~(arr_7 [i_3 - 1] [i_3 - 2] [i_3 + 2] [i_3 + 1])));
                                var_21 *= (((var_12 ? var_5 : (arr_0 [i_0 + 1]))));
                                var_22 = ((arr_12 [i_0 + 1] [20] [i_0 + 1] [i_0 + 1] [14] [20]) << (-2054550730 - 2240416557));
                                arr_14 [i_3 - 2] [i_3 + 2] [i_3 - 2] [0] = (arr_11 [7] [i_1] [i_2] [1]);
                            }
                        }
                    }
                    var_23 -= (~var_13);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 &= ((~(arr_8 [15])));
                                var_25 = (max(var_25, (((((arr_6 [1] [18] [i_2] [3]) ? var_18 : (arr_10 [14] [1] [i_2] [i_5] [i_6])))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_26 = (((arr_20 [1] [i_0 + 1] [19] [9]) > ((-7137824333842008963 ? ((max(var_0, (arr_23 [6] [10] [6])))) : ((65535 ? -115 : (arr_16 [i_0] [7] [19] [i_7])))))));
                    arr_24 [i_7] [i_7] [i_7] [0] = ((-((var_7 * (((arr_3 [3]) * 70))))));
                    arr_25 [i_0 + 1] [i_7] [i_7] [i_7] = (var_12 != 3089301640);
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    var_27 = (min(var_27, -7137824333842008965));
                    arr_28 [i_0] [i_1] [10] = (((-31 <= -55) / (arr_7 [i_0] [14] [14] [i_0 + 1])));
                    var_28 = 227;
                    var_29 = (max(var_29, var_12));
                    arr_29 [i_0] [i_0 + 1] [2] [5] = var_10;
                }
                var_30 = (min(var_30, ((((arr_8 [i_1]) & (min((arr_8 [i_1]), (arr_17 [i_0] [9] [3] [i_0 + 1] [i_1] [i_1] [i_1]))))))));
                var_31 += (((((~(((arr_6 [10] [11] [8] [3]) >> (-11 + 12)))))) ^ (arr_11 [i_0 + 1] [14] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
