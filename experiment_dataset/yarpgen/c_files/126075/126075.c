/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((!(((var_14 | (((var_16 ? var_9 : var_5))))))));
    var_20 = var_7;
    var_21 = (max(var_6, (var_8 >= var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = var_11;
                var_23 += (((min((~var_13), ((max(-8689, var_3)))))) ? ((min(8689, ((614991698 >> (16383 - 16379)))))) : (min((arr_3 [i_0] [i_1] [i_1]), 244)));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_24 = (arr_12 [i_3 - 2] [i_3] [i_4] [i_3] [8]);
                                arr_14 [i_4] [9] [i_2] [i_1] [i_4] = (min(((((arr_3 [i_0] [i_0] [5]) || -1))), ((118 ? 614991698 : (arr_3 [5] [1] [i_2])))));
                                var_25 += (max((var_4 + 4294967295), (((!((max(4004402476, (arr_1 [7])))))))));
                                var_26 = (max(var_26, (((((arr_10 [3] [i_3 - 2] [i_3 - 2] [2] [11]) % (arr_10 [i_3 - 3] [i_3 + 1] [i_3 + 1] [0] [9])))))));
                                arr_15 [2] [i_4] [i_2] [i_4] [4] [11] = 25;
                            }
                        }
                    }
                    var_27 = (max((~-8689), ((-9223372036854775793 ? ((10 ? (arr_3 [5] [i_1] [i_0]) : (arr_11 [i_2] [12] [9] [13]))) : (arr_3 [i_0] [1] [13])))));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_28 = (min(var_28, var_1));
                    var_29 -= ((-(max(-8689, -8513983885177330743))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_30 = 127;
                                arr_26 [i_6] [i_6] [i_7] [11] [i_6] = -10237378174739348764;
                                var_31 = -var_7;
                                var_32 = (arr_23 [i_7] [10] [13] [0] [13]);
                                var_33 = (min((((arr_0 [i_7 + 1] [i_7 - 2]) ? (arr_0 [i_7 - 3] [i_7 - 1]) : var_15)), -8689));
                            }
                        }
                    }
                    var_34 = (max(6875025654117991115, 1756443478));
                }
            }
        }
    }
    var_35 = ((!(14969 && 1756443478)));
    #pragma endscop
}
