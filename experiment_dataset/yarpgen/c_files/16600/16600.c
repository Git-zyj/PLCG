/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = max((((17397480983860985569 || (arr_8 [i_4] [i_3] [0])))), ((((144115050636902400 * (arr_6 [i_4] [11] [i_0]))) * 0)));
                                arr_14 [4] [i_1 - 1] [i_2] [i_3 - 2] [i_3 + 1] [i_4] = (var_13 | var_9);
                                var_19 = 3213535035083381417;
                                var_20 = 18446744073709551587;
                            }
                        }
                    }
                    arr_15 [7] [i_1] [i_1] = (((((~(arr_10 [i_0]))))) ? ((~((~(arr_12 [4] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 + 1]))))) : ((~(~18446744073709551608))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_21 = arr_9 [i_0];
                    arr_19 [i_5] [i_1] [i_0] = (((max((((arr_10 [i_5]) ? var_13 : 4663316377590899204)), (arr_1 [i_5] [i_1 + 1])))) ? (arr_0 [5] [12]) : 17397480983860985562);
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_31 [i_6] [i_7] = ((~((((arr_29 [0] [i_6] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1]) > 11098577179979103650)))));
                                arr_32 [i_0] [i_1 - 1] [i_6] [11] [i_8] [i_7] = (~var_9);
                                var_22 = min(18446744073709551615, var_4);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_35 [i_0] [0] [i_1 - 2] [i_9] = arr_12 [i_0] [i_1 + 1] [i_6] [i_9] [i_1 - 2] [i_1 + 1];
                        arr_36 [i_0] [i_1] [i_6] [i_1 - 2] [i_1 + 1] = (((arr_10 [i_0]) | var_17));
                        arr_37 [i_0] [i_0] [i_1 - 1] [i_1 - 2] [4] [i_9] = (~((~(arr_24 [2]))));
                        arr_38 [i_0] [i_1 + 1] [i_6] [i_9] &= (arr_0 [11] [i_1 + 1]);
                    }
                    var_23 = (max(var_23, var_14));
                }
                arr_39 [3] [i_1] = arr_27 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1];
                arr_40 [1] = (((~(arr_4 [i_1 - 2] [i_1 - 2]))) & (min(var_11, var_10)));
            }
        }
    }
    var_24 = (~(~9980593949844495514));
    var_25 = (max(var_25, var_17));
    #pragma endscop
}
