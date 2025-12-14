/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (((((~(-10944 || 4611685743549480960)))) ? (min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1]))) : (arr_0 [i_0] [1])));
        var_20 ^= ((((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_21 += (arr_8 [i_4 - 3] [i_4 - 1] [12]);
                                var_22 -= (arr_2 [i_2 + 1] [i_4 - 1]);
                            }
                        }
                    }
                    var_23 ^= ((7 * 255) != (255 != 913189522));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_21 [0] [i_7] [16] [16] &= ((arr_9 [i_1] [12] [i_7] [0] [16] [12]) ? (arr_19 [i_7] [i_2] [12] [i_6]) : (((arr_4 [i_7] [4]) ? (arr_10 [16] [3] [15] [i_3]) : (arr_11 [i_2]))));
                                var_24 *= ((((((arr_20 [11] [11]) >> (((arr_19 [i_7] [i_3] [1] [14]) - 27))))) ? (arr_18 [8] [i_7] [i_7] [8]) : (arr_6 [i_2 + 1] [i_2] [i_2])));
                                var_25 += ((-((var_3 ? var_3 : (arr_14 [1] [13] [i_3] [i_3] [i_3])))));
                                var_26 *= (arr_20 [0] [i_2 + 1]);
                                var_27 ^= (arr_20 [i_1] [i_2 + 1]);
                            }
                        }
                    }
                    var_28 = (min(var_28, (((var_12 > ((((arr_12 [1] [5] [14]) / (arr_15 [0] [i_2] [i_2] [i_2] [4] [4])))))))));
                }
            }
        }
        arr_22 [9] [i_1] &= var_5;
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        var_29 -= 2147483631;
        var_30 ^= (min((((arr_25 [i_8 + 1]) ? var_12 : (arr_25 [i_8 + 3]))), (arr_24 [17])));
    }
    var_31 *= var_16;
    var_32 = (max(var_32, var_9));
    var_33 *= ((var_12 ? (min(((min(var_0, var_7))), 31)) : var_11));
    #pragma endscop
}
