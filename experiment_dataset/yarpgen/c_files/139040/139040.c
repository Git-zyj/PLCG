/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = (((18446744073709551596 ^ 14721317550692350117) ? -var_4 : ((((arr_12 [i_0] [i_1] [i_0] [i_3] [i_0]) > -25397)))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [i_0] = ((max(var_6, 4585)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_11 = (((((var_7 & (((arr_19 [0] [0] [i_2] [i_5] [i_6 + 1]) << (var_0 + 146)))))) ? (min((arr_7 [i_0] [i_0]), 0)) : (((1 >= ((var_2 ? 183 : var_7)))))));
                                var_12 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 += (max(var_9, var_6));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_14 += (((((((arr_21 [3] [i_8 + 1]) - var_8))) ? ((-66 + (arr_20 [i_7] [i_7]))) : ((var_2 ? var_2 : (arr_27 [i_7] [i_7] [i_9] [i_9]))))));
                    arr_29 [i_7] [23] = 36768;
                    var_15 ^= var_2;
                    var_16 &= (((((arr_24 [i_8 + 3] [i_8 - 3] [i_8 - 2]) ? 36768 : (arr_24 [i_8 - 2] [i_8 + 3] [i_8 - 3]))) < (arr_24 [i_8 - 3] [i_8 - 1] [i_8 - 3])));
                    var_17 &= ((((~(arr_24 [i_8 + 1] [i_8 + 2] [i_8 - 3]))) ^ (arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
