/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (~var_2);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0]) <= 2743721966)) ? (1551245330 == 191) : var_2));
        var_13 ^= ((-(arr_0 [i_0])));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_14 = (max(var_14, (arr_3 [i_1 - 2] [i_1])));
        var_15 = ((!(((arr_4 [i_1]) == (var_0 != var_6)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_16 = (arr_5 [i_2]);
        var_17 -= (((arr_1 [i_2] [i_2]) ? (-32767 - 1) : var_7));
        arr_8 [i_2] = ((-(arr_1 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_11 [4] |= var_4;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_18 = var_2;
                        var_19 += -1822233613;
                        var_20 += (((((arr_10 [i_3]) || (arr_16 [i_3] [1] [0]))) ? ((2279 ? 18446744073709551615 : (min((arr_17 [1] [i_5] [i_4] [1]), var_6)))) : ((((min(1965649772, (arr_0 [i_5])))) ? 2279 : ((var_10 ? (arr_4 [18]) : (arr_13 [8] [i_5])))))));
                    }
                }
            }
        }
        var_21 = (((((2095897398564369218 ? 232 : (-2147483647 - 1)))) | (min(((((arr_6 [12]) <= (arr_18 [2] [i_3] [i_3] [i_3])))), ((-1988280061 ? var_2 : var_9))))));
        var_22 += (arr_1 [i_3] [18]);
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_23 ^= ((((226 ? 6167072933702086669 : 1)) <= var_2));
                                var_24 = (min(var_24, (((((arr_4 [i_7]) - (arr_4 [i_7])))))));
                                arr_29 [i_8] [3] [i_9] [i_9] [i_8] [i_8] = (arr_21 [0] [i_8] [i_11]);
                                arr_30 [i_7] [6] [i_9] [i_9] [i_9] &= arr_25 [i_7] [i_8] [i_10] [i_7];
                            }
                        }
                    }
                }
                var_25 = (arr_27 [i_7] [1] [i_7] [0] [i_7] [i_8]);
                var_26 &= ((((max(((var_6 / (arr_25 [i_7] [i_7] [i_8] [i_7]))), (((arr_1 [i_7] [i_7]) + var_1))))) < (((arr_1 [i_7] [i_7]) / var_0))));
            }
        }
    }
    #pragma endscop
}
