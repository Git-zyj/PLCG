/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = 27;
                            arr_12 [i_0] [i_1] [i_2] [10] [i_0] = (~27);
                            var_15 = (max((~-6224230225159502127), ((13 ? var_13 : 228))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                arr_16 [i_4] [i_4 + 1] [i_4] = (~var_12);
                                var_16 = 3380664688;
                            }
                        }
                    }
                }
                var_17 = (min(var_17, 3065912834324424026));
            }
        }
    }
    var_18 = (max(var_18, ((max((((0 / var_4) & (2147483647 || var_1))), ((min((-9223372036854775796 != var_12), ((27 ? 228 : var_11))))))))));

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_19 = (!27);
            arr_22 [i_6] [2] = (((arr_20 [i_6 + 3] [i_6 + 1] [i_6 + 1]) ? (arr_21 [i_5] [i_6 + 2]) : (!0)));
        }
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            arr_25 [i_5] [i_7] [i_7 + 2] = ((((((~228) ? ((((arr_23 [i_5] [i_5] [i_5]) ^ (arr_24 [i_5] [i_7 - 2] [i_7 - 2])))) : 225))) != (min((max(var_13, (arr_23 [i_5] [i_7] [i_7 - 2]))), (32767 != 18446744073709551609)))));
            arr_26 [i_5] [i_5] = (((!217) ? (((max(0, (arr_23 [i_5] [i_7 + 2] [i_7 + 2]))) ^ (!var_10))) : (0 != var_2)));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_29 [i_5] [i_5] = (27 ? (max(1, 15869497101533892049)) : (((arr_28 [1]) / (arr_28 [i_5]))));
            arr_30 [i_5] [i_8] [i_8] = ((max(4677714356313362386, 32767)));
        }
        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            arr_34 [i_5] [8] [i_9 - 1] = ((((min(14755676533458063648, (arr_27 [i_5] [i_5])))) ? (((((15798173187297423907 ? var_11 : var_4))) ? (arr_21 [i_5] [i_9 + 1]) : ((var_7 ? var_6 : var_3)))) : var_0));
            var_20 = (max(var_20, (min((min((arr_20 [i_9] [i_9 + 1] [i_5]), 0)), (((var_13 ? (min(var_6, var_1)) : 30347)))))));
            arr_35 [i_5] [i_9] [i_9 + 1] = ((~(arr_28 [i_9 + 1])));
            var_21 *= 190;
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_22 = (max(var_22, (~12639)));
                            var_23 ^= ((((((!((var_13 <= (arr_42 [i_5] [i_9 + 1]))))))) + (max((((arr_19 [i_9] [i_11]) & 1263433344)), (30347 << 1)))));
                            arr_44 [i_5] [i_5] [i_12] [i_5] [i_5] [6] [i_5] = (max(27, 3031533951));
                        }
                    }
                }
            }
        }
        arr_45 [i_5] = (arr_32 [i_5]);
    }
    #pragma endscop
}
