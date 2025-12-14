/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = 11493030036303896227;
        var_11 = var_2;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = arr_3 [i_1] [i_1];
        arr_6 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (((arr_3 [i_2] [i_2]) ? (max((arr_4 [i_2]), (arr_4 [i_2]))) : ((((arr_8 [i_2]) ? -8 : 0)))));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_12 = (min(var_12, ((10 ? (arr_12 [i_2] [i_3] [i_2]) : ((max(9, (arr_7 [i_2]))))))));
            arr_14 [i_3] = (max((arr_12 [i_3] [i_3] [i_2]), (!-4)));
            arr_15 [i_2] [i_3] [i_3] = var_5;
            var_13 = (max((~739254159), (((max(var_1, (arr_11 [i_2] [i_3] [i_3])))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_14 ^= var_1;
                            arr_23 [i_2] [i_3] [i_4] [i_3] [i_4] [i_3] [i_5] = (!-1);
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            arr_27 [11] [i_2] [i_7] = (max(((((4248890094 || 18446744073709551606) && ((((arr_24 [3]) >> (var_9 - 1390215840))))))), (((max(18446744073709551606, (arr_18 [i_7] [i_7] [i_7] [i_7]))) ^ (arr_25 [i_7 + 1] [i_7 - 1])))));
            arr_28 [i_2] [i_7] = 18446744073709551606;
            arr_29 [i_7] = (((arr_20 [i_7] [i_7 + 1] [i_7 + 1] [i_2]) ? ((((!(arr_7 [i_7 + 2]))))) : 18446744073709551607));
            var_15 = (min(var_15, (arr_11 [i_2] [i_7 + 2] [8])));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_16 = (((4294967291 % var_7) ? 5 : ((var_5 ? (arr_19 [16] [16] [i_2] [i_8] [1] [i_8]) : var_4))));
            arr_33 [i_2] [i_2] = (arr_24 [i_8]);
            arr_34 [i_8] [i_2] [i_2] = (10 / 1586689017);
            var_17 = (((arr_12 [i_2] [i_2] [i_8]) ^ var_9));
            arr_35 [i_2] = (((arr_22 [i_2] [i_8] [i_8] [i_8] [i_2] [i_8] [i_2]) ? var_9 : (arr_22 [i_2] [i_2] [i_2] [i_2] [i_8] [i_8] [i_8])));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_18 = (((((1586689017 ? ((18446744073709551607 ? 2708278278 : (arr_13 [i_2] [i_9] [i_9]))) : (7 && var_2)))) ? (arr_19 [i_2] [i_9] [i_9] [i_9] [i_2] [i_2]) : var_4));
            var_19 = (arr_10 [i_2] [i_9]);
        }
    }
    var_20 = 13;
    var_21 = (min(var_21, var_8));
    #pragma endscop
}
