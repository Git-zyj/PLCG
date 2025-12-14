/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_12;

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 = var_12;
        var_16 -= (0 * var_9);
        var_17 = (((arr_1 [4] [i_0 - 2]) ^ var_0));
        arr_3 [8] |= (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] = (((arr_5 [i_3] [i_4]) < (((24888 ? var_12 : 2341966649)))));
                        arr_14 [i_1 + 2] &= (((arr_12 [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) ? (arr_12 [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1]) : (arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 2])));
                    }
                }
            }
            var_18 = (1 / -27);
            arr_15 [i_1] [i_1] = (((arr_11 [i_1 + 1]) << (arr_11 [i_2])));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_19 [i_1] [i_5] = ((arr_1 [i_1] [0]) >= var_12);
            arr_20 [i_5] [i_5] [i_1 + 1] = (((arr_12 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [8] [i_1 + 1]) / (((arr_18 [i_1 - 1]) ^ var_0))));
        }
        arr_21 [i_1] [i_1] = ((var_6 & (arr_8 [i_1 - 2])));
        arr_22 [i_1] = (((((((arr_12 [i_1 - 2] [i_1] [i_1] [i_1 + 2] [i_1] [i_1]) + 2147483647)) << (var_0 - 64787))) >= ((var_3 ? var_7 : var_9))));
        arr_23 [i_1] = (-75 | -8983982035555877780);
    }
    var_19 = (max(var_19, (((max(var_9, var_4)) >> (var_6 - 24239)))));
    #pragma endscop
}
