/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_2 ? var_13 : var_5))) ? (((var_7 ? 1198388897 : 1198388897))) : var_2)) % var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((((-1198388897 + (arr_8 [i_2] [i_2] [i_2] [i_1]))) + (((0 + (1198388897 - 58681))))));

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = (((((-1198388898 % (arr_10 [1] [i_3] [i_3 + 1] [i_3 - 2])))) ? (((!(arr_10 [i_3] [i_3] [i_3 + 2] [i_3 - 1])))) : ((1198388896 % (arr_10 [i_3] [i_3 - 2] [i_3 + 2] [i_3 - 2])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 = ((arr_7 [i_0] [i_0] [i_4]) % (arr_3 [i_0]));
                            arr_17 [i_4] [i_0] [6] [i_2] [i_2] [i_0] [i_0] = (((arr_15 [i_0] [i_1] [10] [10] [i_3 + 1] [i_3]) % (arr_15 [i_4] [i_4] [i_2] [i_3] [i_3 - 1] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_22 [i_0] [i_0] = (~280925220896768);
                            arr_23 [i_5] [0] [i_1] [i_0] [i_0] &= (((arr_15 [i_3 + 1] [7] [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_5]) ? 0 : 1198388897));
                            arr_24 [i_0] [i_0] [i_2] [i_2] [i_0] [i_3] = (0 ? (arr_7 [i_3 - 2] [i_3 + 2] [i_3 - 2]) : (arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 1]));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_27 [10] [i_1] [i_0] [i_6] [i_2] [i_0] = (~var_0);
                        var_21 = (max(var_21, (arr_26 [i_0] [i_1] [i_1] [i_6])));
                        var_22 = (arr_18 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_23 ^= (~(arr_7 [i_7 - 1] [i_7 - 1] [i_7 + 1]));
                        var_24 = ((~(arr_28 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1])));
                        var_25 = (min(var_25, -1198388898));
                        var_26 = var_16;
                    }
                }
            }
        }
    }
    #pragma endscop
}
