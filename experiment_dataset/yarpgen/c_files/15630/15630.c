/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = min(-1679468469, ((((arr_2 [i_0] [i_1]) | 0))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_1] = (1679468468 | 1);
                    var_16 = (1 & 5747);
                    arr_10 [i_1] [i_1] [i_2] = (!((var_1 || ((((arr_7 [i_0] [i_1] [i_1] [i_2]) ? -29383 : (arr_7 [i_0] [i_1] [3] [i_2])))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 ^= ((((((((~(arr_5 [i_0 - 2] [i_0] [i_0])))) ? (((arr_4 [i_0 - 3]) ? -1679468469 : var_10)) : (817012352 * var_3)))) ? (((arr_1 [i_0 - 1]) ? (arr_8 [i_1] [i_3] [i_3]) : (((arr_11 [i_0] [i_4] [i_3] [i_4]) ? var_9 : (arr_3 [i_0]))))) : (min(var_13, var_3))));
                            arr_15 [i_1] [13] [i_1] = ((var_9 ? var_1 : ((240 & (arr_8 [i_0 - 2] [i_0 + 3] [i_0 - 2])))));
                            arr_16 [i_1] [17] = var_5;
                        }
                    }
                }
                var_18 = ((((var_4 | ((max(1, 16383))))) / ((((2462489890 % 127) || (((var_5 ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) : var_2))))))));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_19 ^= (((((((3486574995 ? var_12 : var_6)) >> (-9682 + 9688)))) ? (arr_3 [i_0 - 1]) : var_4));
                                var_20 ^= var_3;
                                arr_26 [i_6 - 1] [i_1] [i_6 - 1] [i_6] [i_1] = ((-((~(arr_23 [i_6 - 1] [i_6 + 1] [i_6 + 2] [i_6])))));
                                var_21 = ((((-(arr_1 [i_6]))) ^ (min(((11977 ? 0 : (arr_6 [i_1] [i_5]))), 231))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_22 *= var_5;
                        arr_29 [i_0] [i_0] [i_1] = var_7;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_32 [i_0 + 1] [i_1] [18] [i_1] [i_5] [i_1] = (((arr_22 [14] [i_0 + 1] [12] [i_0] [i_0]) ? var_12 : (arr_22 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])));
                        arr_33 [i_1] [i_1] [i_5] [i_9] = (~(arr_20 [i_0 + 2] [i_1] [i_5] [i_9]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
