/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = (min(var_11, (((var_0 ? ((((-5193 && -49) ? var_5 : (-127 - 1)))) : (min(var_1, 3615360055739733752)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 |= (-127 - 1);
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((-(arr_4 [i_0 - 1] [i_0 - 1])));
                    }
                }
            }
        }
        var_13 = 1193451933;
        arr_12 [i_0 + 1] = var_3;
        arr_13 [i_0] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) << var_7));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_16 [8] [i_4] |= ((((((((-127 - 1) + 2147483647)) >> (((min((-127 - 1), 4294967295)) - 4294967161))))) ? ((min((min(76, 221)), 84))) : 50));
        arr_17 [i_4] = (((!0) ? ((min(-16994, 50))) : (!6653922387756428813)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5] &= ((((((var_8 + 9223372036854775807) << (((arr_20 [i_5]) - 113))))) ? var_5 : (22805 >> 15)));
        var_14 *= (arr_19 [i_5]);
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_27 [i_6] = (((arr_5 [i_6] [i_6] [i_6]) ? (min((arr_5 [i_6] [i_6] [i_6]), var_7)) : (arr_5 [i_6] [i_6] [i_6])));
        arr_28 [i_6] [i_6] = var_4;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_15 = var_3;
        arr_31 [i_7] = (((arr_29 [2] [9]) ? (var_9 ^ var_1) : (-207582654 && 66060288)));
        var_16 = (min(var_16, var_0));
        var_17 ^= ((((var_7 ? var_8 : var_0)) ^ (arr_25 [i_7] [i_7])));
    }
    #pragma endscop
}
