/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((var_11 ? 22 : -1421019990)));
    var_18 = (var_6 ? ((((6346 || 1) == (max(var_6, 18446744073709551606))))) : (~var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = ((145 <= (((arr_6 [i_1 + 1] [i_1 + 2] [i_0] [i_0]) >> (((arr_6 [i_1 - 1] [i_1 + 3] [i_1] [0]) - 5795655216129264312))))));
                            arr_8 [i_0] [i_3] [i_3] [9] [i_2] [i_3] = (arr_1 [i_0]);
                            arr_9 [i_3] [i_1] = ((!(((-3128131022 >> (-255 - 4294967041))))));
                            var_20 |= (arr_5 [i_0]);
                            var_21 -= (arr_4 [i_1 + 3] [i_3] [i_3]);
                        }
                    }
                }
                arr_10 [i_1] = (arr_7 [i_1] [i_1] [i_1 + 2] [i_1]);
                arr_11 [i_0] [i_0] = (arr_2 [i_0] [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_4] [i_5] = (arr_0 [i_1] [22]);
                            arr_19 [i_0] [i_1] [i_4 - 2] [i_0] = (((((min(2017619788, var_7)) ? 3623171718 : -var_8))));
                            var_22 = ((var_14 / ((-(3947 + 1)))));
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_23 = (--42);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_33 [i_6] [i_6] [i_8] [i_8] = (max((((arr_12 [i_8] [i_9] [i_10]) ^ (arr_29 [i_6] [i_6] [i_6] [i_6 + 1] [i_6] [i_9]))), (arr_4 [i_7] [i_7] [i_9])));
                                arr_34 [i_6 + 2] [i_6 + 2] [i_7] [i_8] [i_8] [i_6] [i_10] = ((46 ? (((((arr_12 [i_8] [i_9 - 2] [i_10]) || 34)) ? 527654451 : 62)) : (((((671795597 || (arr_31 [3] [i_6] [i_6] [i_6]))))))));
                                arr_35 [i_6] [i_6] [i_6 + 2] [i_9] [i_10] = (((max((arr_24 [i_6] [11] [i_8]), (arr_0 [i_7] [i_7]))) >= (((arr_27 [i_6] [i_7] [i_6]) - (arr_17 [i_6] [i_6] [14] [i_6] [i_6] [1])))));
                                arr_36 [i_6 + 1] [i_7] [8] [i_9] [10] [i_10] &= (((!var_2) <= ((max((arr_26 [2]), (arr_17 [i_6] [1] [i_8] [i_8] [1] [i_6]))))));
                            }
                        }
                    }
                    var_24 = (max(var_24, -var_15));
                    var_25 -= 6556709279678926336;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_26 = -121;
        var_27 -= 14126;
    }
    #pragma endscop
}
