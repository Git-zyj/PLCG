/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 ^= (-115 < 120);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_14 = var_2;
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = arr_4 [i_4] [i_2] [i_2] [i_0];
                            arr_14 [i_4] [i_3] [i_2] [4] [i_0] = (arr_0 [i_0] [i_1]);
                            var_15 = (((((2049583932 * -1993146966) ? ((max((arr_2 [i_2] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [14] [14] [i_0] [i_0])))) : (arr_2 [i_0] [i_1] [i_2]))) / ((((-1581875283 / (arr_3 [i_0] [i_0] [i_0]))) / (((arr_1 [i_0] [i_0]) ? (arr_9 [i_0] [i_0]) : -22901))))));
                            var_16 ^= 15005581170906604383;
                        }
                    }
                }
            }
            var_17 ^= (max((arr_7 [i_1] [i_1] [i_0] [8] [i_0] [i_0]), ((max((arr_2 [i_1] [i_0] [i_0]), var_5)))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_21 [i_5] [i_5] [i_0] = ((~(((2810561267 > 25) + 1))));
                    var_18 ^= (arr_20 [i_0] [i_5] [i_6]);

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_19 = (((arr_0 [i_6] [i_7]) || (-115 & var_5)));
                        arr_24 [i_0] [i_5] [i_0] [i_5] [i_6] [12] &= ((((arr_16 [i_7] [i_5]) > (arr_16 [i_0] [i_5]))));
                        var_20 = var_3;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_27 [i_0] = (arr_7 [i_0] [i_5] [i_6] [i_6] [i_7] [i_7]);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_18 [i_0] [8]) ^ 0)) > (arr_26 [i_0] [6] [i_7] [i_6] [7] [i_0])));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_31 [i_0] [i_0] [1] [1] [i_6] [i_7] [i_9] = ((((((1 * 3758096384) + (arr_11 [i_0] [i_0] [i_6] [i_7] [i_9] [i_7] [i_5])))) || (arr_17 [i_0] [i_6] [i_0])));
                            arr_32 [i_0] [i_5] [i_6] [i_0] [i_5] = max((120 + 3758096384), var_6);
                            var_21 = (((var_3 ? (arr_4 [i_9] [i_5] [i_5] [i_5]) : (arr_4 [i_0] [i_6] [17] [17]))));
                        }
                        arr_33 [i_0] [i_5] [12] [i_5] [i_5] = (((arr_25 [i_7] [i_6] [i_6] [9] [17] [i_0]) - ((17864 ? -27 : 10911757972009141572))));
                    }
                    var_22 = ((((arr_22 [i_0] [i_0]) ? 27881 : ((536870912 ? (arr_25 [i_0] [i_0] [i_5] [i_5] [i_6] [i_0]) : 166)))));
                    var_23 *= 37654;
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_24 = (((arr_6 [i_10]) > 114));
        var_25 *= (arr_20 [i_10] [i_10] [i_10]);
        arr_38 [i_10] = (min(((~(max(var_4, (arr_22 [i_10] [i_10]))))), ((((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10] [1] [i_10]) / (arr_26 [i_10] [i_10] [9] [i_10] [i_10] [14]))))));
        var_26 = (~121);
        arr_39 [i_10] [i_10] = (arr_4 [4] [4] [i_10] [i_10]);
    }
    var_27 = (max(var_27, 1));
    #pragma endscop
}
