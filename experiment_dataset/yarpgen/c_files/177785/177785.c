/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((63305 ? (((max(var_15, var_15)))) : -var_9)) != -115));
    var_21 -= -81;
    var_22 = var_8;
    var_23 -= 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_24 &= ((((arr_7 [i_0] [i_1] [i_1] [i_1]) == 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_2] [i_3] [19] [i_4 - 1] [i_3] = 1;
                                arr_13 [9] [9] [i_0] [i_3] [4] = var_11;
                                arr_14 [i_0] [i_3] = 2147483647;
                                arr_15 [i_0] [3] [i_0] [13] [i_0] = -1076049849;
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] = (min((((4707201989074357017 * 0) ? (((arr_2 [1]) ? var_4 : -7350638626818325825)) : (((var_15 << (84 - 74)))))), ((-(arr_11 [i_0] [i_1] [4] [i_1])))));
                }
                var_25 ^= ((((((var_4 ? (arr_7 [i_0] [i_0] [i_1] [i_0]) : (arr_0 [i_1] [4])))) ? ((((arr_3 [i_1]) ? 67108863 : 1))) : (((arr_4 [i_1] [i_1] [i_0]) & 7445861930402819041)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 18;i_7 += 1)
                            {
                                var_26 = (+(((-113 - 31457280) / ((7 ? var_14 : (arr_22 [i_0] [i_0] [i_1] [1] [i_6] [i_7 - 2]))))));
                                arr_27 [i_5] [i_6] &= (((3228658569658190258 != (arr_22 [i_1] [i_0] [i_6 + 1] [i_7] [i_7 + 3] [i_1]))));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_27 = (max((max((~116), -115)), (((((1 ? 4294967295 : (arr_24 [i_0] [i_1] [i_1] [i_6 + 1])))) ? ((-1076049822 ? 1 : 255)) : ((max(1, (arr_2 [8]))))))));
                                arr_31 [i_0] [i_1] [15] [i_1] [i_8] [i_0] = (arr_9 [i_0] [i_0] [i_0] [9] [i_0] [9]);
                            }
                            arr_32 [i_0] [15] [i_0] [i_6 - 1] = ((arr_26 [i_0] [i_1] [i_5] [11] [i_0] [i_6 - 2] [i_6]) / ((((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_30 [i_0] [i_0] [4] [i_0] [9]) : 10))) ? (max(-126, (arr_23 [i_6] [i_6] [13] [i_6] [i_6]))) : (arr_30 [i_6] [i_6 - 2] [i_6] [i_6] [i_6]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
