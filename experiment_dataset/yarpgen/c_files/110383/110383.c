/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_15 = ((!(!-10909)));
            var_16 += 248670625;
            arr_5 [i_0] = (((((arr_3 [i_1 + 2] [i_1] [i_0]) != var_1)) ? 397591367 : 7088922800514335814));
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_17 -= (min((max((min(94, (arr_6 [2] [i_2] [i_2]))), (arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 3]))), (((-0 ? (arr_4 [i_0] [6] [i_2]) : var_1)))));
            var_18 = 1;
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_19 = (max((~-8158878779830686983), ((min((arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1]), 4285026504)))));
            var_20 = (((arr_11 [i_3 - 1]) & (arr_6 [i_0] [i_0] [i_0])));
            var_21 = (min((((min(var_1, (arr_10 [i_0] [i_0]))))), (((18446744073709551615 & var_5) ? (((arr_1 [i_0]) % 248670625)) : -13))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 6;i_4 += 1)
        {
            var_22 ^= (((arr_4 [i_0] [i_0] [i_4]) ? (arr_4 [i_4] [i_0] [i_0]) : (arr_4 [i_0] [i_4 + 1] [i_4])));
            var_23 = ((~(((arr_8 [i_0]) & (arr_10 [i_0] [i_0])))));
        }
        var_24 = ((((min((var_7 | 1130882758), -var_7))) ? (((((-(arr_0 [i_0]))) - (arr_3 [i_0] [i_0] [i_0])))) : (min(9007199252643840, var_11))));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = (min(var_25, (((-(arr_15 [i_5] [i_6]))))));
            arr_19 [i_5] [i_6] = (((((225 ? 1523047344 : var_12))) ? (arr_15 [1] [i_5]) : ((-(arr_17 [9] [i_6] [i_6])))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        var_26 -= (arr_22 [1] [i_7] [i_8]);
                        arr_25 [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] = ((((~(arr_16 [i_5]))) & var_6));
                        var_27 = (((((-(arr_22 [i_8] [i_6] [i_7])))) ? (arr_21 [i_5] [18] [i_7] [i_8]) : (2046994556 + 7)));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_28 = -2160000035;
                        arr_33 [i_5] [i_5] [i_5] [i_10] [i_10] [i_5] = -var_13;
                        var_29 *= ((-(arr_22 [14] [i_10] [14])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_30 = -1826117663;
                            var_31 = ((-((-(arr_32 [1] [i_13] [i_12] [1] [10] [i_5])))));
                        }
                    }
                }
            }
        }
        var_32 |= 4046296693;
        var_33 *= ((-((((arr_17 [i_5] [i_5] [i_5]) || (arr_23 [4]))))));
    }
    /* vectorizable */
    for (int i_15 = 3; i_15 < 17;i_15 += 1)
    {
        var_34 = 16819662232349085430;
        var_35 -= (arr_40 [8]);
        var_36 -= ((255 ? 64 : 20711));
    }
    #pragma endscop
}
