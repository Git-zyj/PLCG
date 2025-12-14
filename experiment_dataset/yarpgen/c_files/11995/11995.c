/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -10622;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_9;
        var_14 -= (((arr_0 [i_0 - 1] [8]) ? (arr_0 [i_0] [1]) : -20600));
        arr_4 [i_0] = (((!var_11) ? 5160856264361331148 : (-17452 || -13953)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [6] [i_0] [i_0] [6] [i_0 + 2] = ((1715226126 ? 54913 : (arr_9 [i_0 - 1] [i_2] [i_3] [i_4])));
                                arr_17 [1] [20] [i_0] [1] [i_4] = (((arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]) == (arr_15 [i_0] [i_0] [i_1 + 3] [i_0] [i_3] [i_4] [i_0])));
                                var_15 = (arr_13 [i_0] [i_1 + 3] [i_0] [i_3] [i_4]);
                                arr_18 [i_4] [i_4] &= (~13926);
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        var_16 |= (((((var_3 ? 59763 : 26544))) ? 846947103 : var_6));

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_0 - 1] [i_0 - 1] [1] [i_0] [1] [1] [i_0] = (((arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) % (arr_20 [i_2] [i_1 + 1] [i_2] [i_1 + 1])));
                            var_17 -= (10623 == 46722);
                        }
                        arr_26 [i_0] [i_2] [10] [i_0] = (((arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_5] [i_1 + 1]) | (~1)));
                        arr_27 [i_0] [i_0] [i_2] [i_5] = ((((((arr_10 [i_0] [16] [i_2]) ? (arr_2 [i_0]) : var_5))) ? -2776288706451611722 : ((((arr_15 [i_0] [i_1 + 3] [i_1] [i_2] [i_5 + 2] [i_2] [6]) == var_5)))));
                    }
                    var_18 = (((!-5045246279995393541) | (arr_23 [i_0 + 1] [i_0] [i_2] [i_0] [i_1 - 1])));
                }
            }
        }
        var_19 = (i_0 % 2 == 0) ? ((((arr_2 [i_0]) >> (((arr_19 [i_0] [i_0] [i_0] [i_0]) - 61069))))) : ((((((arr_2 [i_0]) + 2147483647)) >> (((((arr_19 [i_0] [i_0] [i_0] [i_0]) - 61069)) - 3703)))));
    }
    for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = -10160;
        var_20 &= ((-((-846947104 ? var_9 : (arr_19 [i_7 - 2] [18] [6] [i_7 - 2])))));
        var_21 |= ((~((var_4 ? (846947115 ^ -846947103) : ((~(arr_1 [2] [2])))))));
        var_22 ^= (((arr_12 [1] [1] [1] [i_7]) ? (arr_29 [i_7]) : (arr_13 [4] [i_7 + 1] [i_7 - 1] [i_7 - 2] [4])));
    }
    #pragma endscop
}
