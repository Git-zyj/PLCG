/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = ((-(arr_11 [18] [18] [18])));
                                var_18 = ((((((((arr_7 [i_0]) > (arr_12 [i_2] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))) ? (arr_2 [i_0] [i_0] [i_2]) : ((((var_2 || (arr_8 [i_2] [i_1] [i_2] [i_3])))))))) ? (arr_11 [i_0] [16] [i_2]) : (max((arr_6 [i_0] [i_1]), (arr_6 [i_1] [i_3])))));
                                var_19 = (max(var_19, (((18446744073709551615 ? (0 ^ 1) : 18446744073709551615)))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (((((((max((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [3]), var_14))) || var_7))) < ((((18108116915759139023 ? var_8 : (arr_1 [i_0])))))));
                                arr_15 [i_0] [i_1] = (i_0 % 2 == zero) ? (((~(((arr_0 [i_0]) << (((arr_0 [i_0]) - 11007))))))) : (((~(((arr_0 [i_0]) << (((((arr_0 [i_0]) - 11007)) - 6896)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = var_12;
                                var_21 = (((arr_13 [i_0] [i_0] [i_5 + 1] [22] [i_5] [i_5] [i_6]) ? var_13 : var_16));
                                var_22 = (((((((var_1 == (arr_4 [i_0] [i_1]))))) % (~5921064785107334555))));
                                var_23 = arr_1 [i_2];
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_24 += 0;
                    var_25 = (min(var_25, ((((((~(((var_0 < (arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))))))) ? ((31995 ? 18393 : 33556)) : (arr_5 [i_1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_26 += min((~var_10), (arr_27 [i_0] [i_1] [i_7] [i_7] [i_9]));
                                var_27 += (((var_16 | var_7) * (!var_3)));
                                var_28 = (max(var_28, (arr_27 [i_9] [i_8] [i_7] [i_1] [i_0])));
                                var_29 += (((((~((-3599 ? var_16 : var_15))))) ? (var_13 ^ var_0) : ((~(arr_3 [i_8] [i_0] [i_7])))));
                            }
                        }
                    }
                }
                var_30 = (max(var_30, (((+(((arr_0 [i_1]) + var_8)))))));
                var_31 = ((((max(116, 0))) <= ((+(((-32767 - 1) ? -32749 : 228))))));
            }
        }
    }

    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_33 [i_10] [i_10] = var_12;
        var_32 = ((~(((!(((arr_13 [i_10] [0] [i_10] [0] [i_10] [i_10] [i_10]) == 18446744073709551615)))))));
        arr_34 [i_10] = ((1963 ? 2 : 0));
    }
    #pragma endscop
}
