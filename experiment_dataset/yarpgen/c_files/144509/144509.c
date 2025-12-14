/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_1 + 4] [11]) ^ (arr_7 [i_0] [i_3] [i_2 + 1] [i_0])));
                        var_16 += (arr_3 [i_0] [12] [i_0]);
                        arr_13 [i_0] [i_1] [i_1] [i_1 + 3] = ((((var_6 < (arr_8 [i_0] [i_0] [i_2] [7]))) || (arr_3 [i_0] [i_0] [5])));
                        var_17 += (((arr_6 [i_0] [i_2 - 2] [i_2 - 2]) + (arr_6 [13] [i_2 - 2] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_18 = (max(var_18, (arr_15 [i_1] [10] [i_4])));
                        var_19 ^= (arr_10 [10] [i_4] [10] [14] [6] [10]);
                        var_20 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_19 [i_2 - 1] [i_0] [i_0] [i_2 - 1] = (arr_15 [i_2 - 2] [i_5] [i_0]);
                        var_21 = (min(var_21, (max((((~(arr_14 [i_2] [8] [i_5])))), (((0 || 65515) | (min((arr_1 [i_5]), (arr_7 [i_5] [i_0] [i_0] [i_5])))))))));
                    }
                    var_22 -= ((+(((arr_11 [12] [i_1]) ? ((((arr_5 [i_1 - 1] [12]) ? (arr_6 [i_0] [i_1] [10]) : (arr_4 [i_2] [i_2])))) : (arr_10 [i_0] [8] [i_0] [i_0] [i_2 - 2] [i_2])))));
                    var_23 = arr_3 [i_0] [i_0] [i_0];
                    arr_20 [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                    var_24 = ((((min((arr_14 [i_0] [i_1] [i_0]), (arr_7 [10] [i_0] [i_1 + 4] [i_0])))) ? (((((((arr_18 [i_0] [i_1 + 3] [i_0] [i_0]) & (arr_18 [i_0] [i_1] [2] [2])))) || var_13))) : (((arr_7 [i_1 + 2] [i_2] [i_2 + 1] [i_0]) * (arr_7 [i_1 + 2] [i_1] [i_1 + 2] [i_0])))));
                }
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
