/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = (+((((arr_2 [5] [9]) != (arr_7 [i_0] [6] [i_0])))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [0] [5] [i_2] [i_3] = (((arr_7 [i_1] [4] [i_3]) >> (var_2 - 3561615401114619053)));
                        arr_13 [i_0] [i_0] [7] [i_0] = var_7;
                        arr_14 [i_0] [6] = ((~((-(arr_10 [i_0] [i_0] [2] [2] [2])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_15 = ((((((arr_1 [i_1]) % var_13))) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (~var_12)));
                        var_16 = (((arr_5 [i_0] [i_1] [i_2] [i_4]) - var_11));
                        arr_18 [i_4] = (((arr_3 [i_0]) ^ (((var_8 % (arr_7 [i_0] [1] [i_0]))))));
                        arr_19 [i_4] [11] = 48142;
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_22 [7] [7] [7] [i_5] [i_5] [i_5] = 44930;
                        var_17 += ((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]));
                    }
                }
                var_18 = (((arr_7 [i_0] [i_0] [i_0]) <= (((((min((arr_7 [i_0] [i_0] [i_0]), 9514))) && var_8)))));
                arr_23 [4] = ((((((((arr_17 [i_1]) & 2860))) ? ((max((arr_16 [i_1] [i_1] [10] [4] [4]), (arr_11 [i_0] [i_0] [7] [7])))) : (arr_9 [i_1]))) | (((~(arr_21 [i_0] [8] [i_0] [i_1] [1]))))));
            }
        }
    }
    #pragma endscop
}
