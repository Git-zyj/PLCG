/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 |= var_1;
        var_11 &= var_2;
        arr_4 [i_0] [i_0] = (!var_6);
        arr_5 [i_0] [i_0] &= 12319;
        var_12 *= ((((min(53221, var_4))) ? ((var_6 ? var_6 : (arr_2 [i_0]))) : -2051238020));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (min(var_13, var_1));
        var_14 = var_5;
        var_15 = (max(var_15, (arr_7 [i_1] [20])));
        arr_10 [i_1] = ((3883413115211329259 ? (~-12307) : var_6));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_13 [i_2] = (15 ^ 53216);
        arr_14 [i_2] = 523;
        arr_15 [4] = (((var_4 ? 53216 : -7651575138236992467)));
        arr_16 [i_2] = 523;
    }

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_16 = 12342;
        arr_19 [i_3] = ((!((((arr_18 [i_3]) ? 157 : ((var_3 ? (arr_18 [i_3 + 2]) : var_0)))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_17 = (min(var_17, 12319));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_24 [i_4] [i_5] [i_5] = ((8 ? 53216 : (!var_4)));
            var_18 ^= var_4;
            arr_25 [i_4] [i_5] [i_5] = var_1;
            var_19 = -88;
            var_20 = ((((var_0 ? 53172 : (arr_1 [i_5] [i_4])))) ? ((~((7651575138236992466 ? var_8 : var_9)))) : (max((var_5 >= -6833320703815789293), ((-7899517418688874805 ? 53187 : -501)))));
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            arr_28 [i_4] = (-3664848059415877649 % ((((!(((0 ? var_5 : var_7))))))));
            var_21 = (arr_20 [i_6] [i_4]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_22 = var_1;
            var_23 = (((arr_18 [i_4]) ? -7651575138236992485 : 3595511291629624077));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_33 [i_8] [i_4] [i_4] = (~var_5);
            arr_34 [i_4] = ((1548164311464612614 ? 62726 : 1));
            var_24 = (max(var_24, -523));
        }
        var_25 = ((~(var_5 && var_2)));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = (var_0 ? (arr_36 [i_9] [i_9]) : var_1);

        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            var_26 ^= (~var_9);
            arr_40 [i_9] [i_10 - 1] = var_1;
            arr_41 [i_10] [10] [i_9] = var_7;
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_27 = var_9;

            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                var_28 = (((arr_42 [i_11]) ? var_7 : (arr_11 [i_13])));
                arr_49 [i_11] [2] [i_11] = ((+((4 ? (-2147483647 - 1) : var_9))));
                var_29 += (((arr_1 [i_11] [i_12]) ? (arr_1 [i_13] [i_13]) : -5588152220217249357));
                arr_50 [i_11] [i_12] [i_11] = (2267130291 % -8397374090606411947);
            }
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                var_30 += ((var_4 ? 1 : var_3));
                arr_53 [i_11] = -768771377;
                var_31 = (max(var_31, ((((arr_39 [i_14] [i_14] [i_14 + 1]) ? var_5 : (((-(arr_9 [i_12])))))))));
            }
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_32 = (min(var_32, var_1));
            arr_57 [i_11] [i_11] [i_15] = ((var_0 != (!var_4)));
        }
        var_33 -= ((-1 ? (!2147483647) : ((var_4 ? var_4 : 7651575138236992466))));
    }
    #pragma endscop
}
