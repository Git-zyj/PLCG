/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((min(4294967293, var_5)));
        arr_4 [i_0] = ((-(arr_2 [i_0])));
        var_20 = (--1140685927);
        arr_5 [i_0] = var_19;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_21 = (~1085350593);
                            var_22 = (min((var_18 && var_8), (max(-1085350596, (((-(arr_9 [i_3] [i_4]))))))));
                            var_23 = (((~var_0) * (max(-942509163006302408, ((max((-127 - 1), (arr_17 [i_0] [i_1] [i_2] [5] [i_4]))))))));
                        }
                        var_24 *= (min((64 + -21317), 14801));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_25 = ((-79 | ((-(arr_17 [i_0] [i_1] [i_2] [i_2] [i_5])))));
                        var_26 += var_0;
                        var_27 *= arr_6 [i_0];
                    }
                    var_28 += ((((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (-100 + 128)))) ^ (~3209616689))) >> (((arr_0 [i_2 + 1]) - 2541323450))));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_29 = (((arr_10 [i_2 + 2]) >= (3209616680 - var_12)));
                        arr_23 [i_0] [i_6] |= ((79 ? (35 / 45) : var_6));
                        var_30 *= (((arr_10 [i_0]) >= (arr_10 [i_2 + 1])));
                    }
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        var_31 &= 64162;
                        var_32 = ((-(arr_8 [i_0] [i_1] [i_2] [5])));
                        var_33 = ((((min(((217 << (var_3 - 101))), -1))) ? (min(((max(var_13, (arr_9 [i_0] [i_7])))), (min(3209616714, 0)))) : (((~((var_10 ? var_6 : (arr_10 [i_1]))))))));
                        var_34 = ((((103 ? -94 : var_1))));
                    }
                    arr_26 [i_1] [i_0] [i_1] [i_2] = ((-4024 ? -var_1 : (arr_11 [i_0] [i_1] [i_0] [4] [i_1])));
                    arr_27 [i_0] [i_0] [i_1] [i_0] = ((((max(-9, (arr_10 [i_2 - 1])))) % 4611650834055299072));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_35 = (max(var_35, (((~((-((231 ? (arr_29 [i_8] [i_8]) : var_18)))))))));
        var_36 = ((~(((((76 & (arr_24 [i_8] [i_8] [i_8] [i_8])))) | (arr_28 [2])))));
        var_37 -= -7974;
        var_38 *= 1;
    }
    var_39 = var_12;
    var_40 = ((~((-21 ? -var_5 : var_18))));
    #pragma endscop
}
