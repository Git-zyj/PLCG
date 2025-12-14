/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_1] [i_0] [i_1] |= var_3;
                    arr_10 [i_0] [i_1] [1] [i_1 - 1] = ((!((((arr_3 [i_0] [i_1 + 1] [8]) ? (arr_3 [i_2 + 4] [i_1 - 3] [i_0]) : (arr_3 [i_2 + 4] [i_1 + 1] [i_0]))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (min(var_12, ((((((var_1 ? ((87 ? (arr_4 [i_2] [i_1]) : (arr_2 [i_0] [i_0] [i_2]))) : (((321047191 ? (arr_12 [i_1] [i_1]) : (arr_12 [i_1] [i_2]))))))) ? ((max(384, var_3))) : (((max((arr_8 [i_1] [i_2 - 1]), var_5)))))))));
                        arr_13 [i_0] [i_1 - 2] [15] [i_0] = (i_0 % 2 == zero) ? ((max(((3 * (arr_1 [i_0]))), var_10))) : ((max(((3 / (arr_1 [i_0]))), var_10)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_13 = ((((23081 ? 1 : (arr_15 [i_4] [i_1] [i_0]))) | (arr_7 [i_0] [i_1] [i_2 + 2])));
                        var_14 = (arr_11 [i_1 - 1] [i_1 + 1] [i_2 + 3] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_20 [i_0] [0] [i_1 + 1] [0] [i_0] [i_0] = (((!(((~(arr_11 [i_0] [6] [i_2 - 1] [i_0])))))));
                        var_15 = (min((((~(arr_3 [i_1 - 4] [i_2 + 2] [i_2 + 2])))), (max(((min(1, 2147483647))), (max(625772647, 15094096301179290317))))));
                        var_16 = 3352647772530261298;
                        var_17 = (min(var_17, (((~((var_6 >> (((~var_2) - 166944927)))))))));
                        arr_21 [i_0] [i_1] [i_2] [i_2] = ((((min(((0 ? 65532 : 4283309789526900086)), ((max((arr_5 [i_0] [i_2] [i_1] [i_0]), (arr_12 [i_0] [i_0]))))))) ? (((arr_17 [i_2] [i_2 - 2] [i_2 + 3]) ? (arr_17 [1] [i_2 + 3] [i_2 - 1]) : (arr_17 [i_2] [i_2 - 1] [i_2 + 1]))) : ((var_6 / (arr_14 [i_5] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [10] [i_2] [i_2] = (((~var_0) ? -102 : (arr_4 [i_0] [i_0])));
                                arr_28 [i_0] [i_1] [i_2] [i_6] [i_0] = (((arr_17 [i_7] [i_1] [i_0]) ? ((((-1 >= (arr_3 [i_6] [i_2] [i_1 - 4]))))) : (min((~-581201821), ((var_1 ? 109 : (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                                var_18 |= (max(((((var_10 * 3) ? (((min(1, 0)))) : 1224616214))), (arr_11 [14] [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_9] [i_0] = -1560813771;
                                arr_37 [i_8] [1] [i_8] [1] [i_0] = ((var_4 - (!var_8)));
                                arr_38 [i_9] |= ((((-(var_3 + 18446744073709551605)))) ? (min((max((arr_18 [11]), 1892625443)), -1801)) : (((-(arr_26 [10] [i_1] [i_8] [i_1] [i_1] [10])))));
                                var_19 |= ((((~(arr_23 [i_0] [i_10] [i_8] [i_1 + 1] [12] [i_10])))) ? (((1294777995786066609 + ((((arr_34 [i_1] [i_1]) ? var_1 : (arr_34 [i_1] [i_1]))))))) : (((arr_30 [i_1] [16] [i_1 - 2] [i_9]) ? ((~(arr_4 [i_9] [i_1]))) : var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
