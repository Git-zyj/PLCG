/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_11 + 1) ? var_10 : ((((min(var_12, var_4))) ? -var_7 : ((var_1 ? 0 : var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 10;i_4 += 1)
                            {
                                var_19 = arr_11 [3] [i_4] [i_3] [i_2] [i_1] [i_0];
                                var_20 += ((arr_10 [i_4 - 4] [i_4] [5] [i_4 + 1] [i_4 + 1]) ? (arr_10 [i_0] [i_2] [i_4] [i_4 + 1] [i_4]) : (arr_10 [i_4 - 2] [5] [5] [i_4 + 1] [i_4]));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_15 [2] = (((arr_2 [i_0] [i_0]) == (arr_2 [i_1] [i_2])));
                                arr_16 [i_5] [i_3] [i_2] [5] [i_1] [i_0] [i_0] = (arr_2 [i_0] [i_1]);
                                var_21 = 241595867;
                                var_22 = (min(var_22, -1));
                            }

                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 8;i_6 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_1] [i_6 - 1] [i_3] = (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_6]) + ((((var_5 < (arr_12 [i_0])))))));
                                var_23 += (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                                var_24 ^= (3076583554130641009 == -53);
                                var_25 = (max(var_25, ((((1 ? 135 : 18446744073709551615)) | (((4748 ? (arr_0 [i_0]) : var_6)))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_14 [3] [i_6 - 1] [i_6] [i_6 - 2] [i_6]);
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_0] = ((((min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), -3076583554130641010)) + 9223372036854775807)) << (((var_9 + 87) - 15)));
            }
        }
    }
    #pragma endscop
}
