/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = ((!((max((arr_0 [i_0]), var_8)))));
                                var_17 = (arr_2 [i_0]);
                                arr_12 [i_3] [i_1] = var_8;
                                arr_13 [i_0] [i_0] [i_2] [5] [i_3] = -var_0;
                                arr_14 [i_2] [10] [i_3] [i_2] [i_4] = var_6;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_17 [1] [i_1] [i_1] [i_5] = (255 >= 19);
                    arr_18 [i_0] [i_0] [i_5] = (((arr_3 [i_0] [i_1] [i_5]) ? (arr_3 [i_1] [i_1] [9]) : 6590785105108505908));
                    arr_19 [i_1] [i_1] = ((var_5 + (arr_7 [i_0] [i_1] [i_1] [i_5])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_18 += 12;
                                var_19 |= ((var_7 ? (arr_27 [i_0] [i_1] [i_1] [i_6] [i_1] [7] [i_8]) : var_0));
                            }
                        }
                    }
                    var_20 = (((~var_13) ^ (var_4 >= 2379)));
                    var_21 = (arr_10 [i_6] [i_6] [i_1] [i_6] [i_6] [i_0]);
                }
                var_22 = ((((!0) < (~236))));
                arr_29 [i_0] [i_0] &= (((1 ^ 65535) ? (((!(10 % var_13)))) : (!21874)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {

                            for (int i_11 = 0; i_11 < 12;i_11 += 1)
                            {
                                var_23 = (max(var_23, (((19 ? 1 : -7919353825781258283)))));
                                arr_38 [i_0] [i_10] [1] [i_10] [i_10] [i_11] = ((~(max(6550102406007630155, 237))));
                                arr_39 [i_0] [i_10] [9] [i_0] = (max(65531, 1));
                                arr_40 [i_10] [i_10] = (max((((arr_30 [i_0]) & var_7)), (((arr_30 [i_1]) ? var_12 : (arr_30 [i_0])))));
                            }
                            arr_41 [i_0] [i_1] [i_10] [i_9] [i_10] [i_10] = -var_12;
                        }
                    }
                }
            }
        }
    }
    var_24 = ((~((((min(var_14, var_5))) | (~44152)))));
    #pragma endscop
}
