/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((var_2 ? var_4 : var_7)) < 2147483647));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = (var_9 - (min((-41 < var_3), var_8)));
                    var_15 *= (arr_5 [i_0] [i_2]);
                    arr_7 [i_0] [i_1] [i_2] [i_2] = var_6;
                    var_16 ^= ((((~(max(63, -2147483647)))) % (arr_1 [i_0] [i_1 - 1])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_12 [i_0] [12] [i_3] = ((-((var_13 ^ (arr_11 [i_0] [i_0])))));
                    arr_13 [i_0] [i_3] [i_4] = var_3;
                }
            }
        }
        arr_14 [i_0] [i_0] &= ((18446744073709551609 >> (164 && 18446744073709551615)));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((((((arr_9 [i_5] [i_5] [i_5]) ? 92 : var_13))) ? (max(18446744073709551584, var_5)) : (((((-27388 % 32763) >= (91 << 1)))))));
        var_17 *= (((((((max(151, var_2))) < 1))) / ((max(var_6, (min((arr_11 [i_5] [i_5]), 28523)))))));
        var_18 *= 11130830740496660203;
        arr_20 [i_5] [i_5] = 14294259891834634723;
        var_19 -= (arr_17 [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_26 [i_6] [i_7] [i_7] = ((-32763 ? -14750 : ((32752 << (14294259891834634723 - 14294259891834634721)))));
            arr_27 [i_6] [i_7] = ((105 << (32759 - 32738)));
        }

        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            arr_31 [i_8] = var_7;
            arr_32 [i_8] [i_8] [i_8] = (arr_4 [i_8]);
            var_20 = (28518 > ((421536669 ? var_10 : (arr_3 [i_6] [i_8] [i_8]))));
        }
        var_21 = (((arr_8 [i_6] [i_6] [i_6]) && var_5));
        var_22 -= (arr_23 [i_6]);
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_35 [i_9] [i_9] = (max(((max(var_13, var_13))), 108));
        var_23 ^= (max((63 <= -12), (arr_33 [i_9] [i_9])));

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_39 [i_9] = (((!var_1) >> ((min(0, 138)))));
            arr_40 [i_10] = var_4;
            arr_41 [i_9] [i_9] [i_9] = var_3;
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_44 [i_9] [i_11] [i_11] = var_7;
            arr_45 [i_9] [i_11] = (((!var_8) && ((!(arr_42 [i_9] [i_11] [i_9])))));
        }
        arr_46 [i_9] = (((max(108, -836775927)) <= 3141));
    }
    #pragma endscop
}
