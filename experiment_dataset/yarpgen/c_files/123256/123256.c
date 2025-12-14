/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 ^= var_15;
        arr_2 [i_0] = 26332;
        var_18 = (min((2199022206976 % var_16), 65535));
        var_19 = var_16;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_20 = (((var_14 || 2199022206976) ? ((((arr_7 [i_1] [i_2] [i_1]) >= (arr_7 [i_1] [i_1] [i_2 + 4])))) : (6692 && 2199022206982)));
                var_21 = ((((15583510393644783412 + (arr_3 [i_1] [18]))) ^ (arr_5 [i_1])));
                arr_11 [i_1] = (arr_6 [i_3] [i_1] [i_3]);
            }
            arr_12 [i_1] [i_1] [i_1] = var_6;
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_15 [i_1] = (((arr_7 [i_1] [20] [i_4]) + ((var_0 ? 20 : (arr_3 [i_1] [i_4])))));
            var_22 = ((((!(arr_8 [i_1] [i_4] [i_1]))) ? ((((arr_8 [i_1] [i_4] [i_1]) || (arr_8 [14] [i_4] [i_1])))) : (arr_8 [i_1] [i_1] [i_1])));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_19 [i_1] = (max(-18446741874687344644, ((((255 || 2305842974853955584) == (min(18254178991820888527, 29)))))));
            var_23 += 127;
            var_24 = (11506 / 3203430610);
            arr_20 [i_1] = 2199022206976;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_25 = ((var_6 && var_11) / ((var_11 ? 18 : (arr_16 [i_1] [i_6] [8]))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        var_26 *= (arr_24 [i_8 - 1] [22] [i_8 + 1] [i_8]);
                        arr_28 [i_1] [i_1] = (arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 2]);
                        arr_29 [i_1] = ((!(arr_17 [i_1])));
                    }
                }
            }
            var_27 = (((((-(arr_13 [i_1] [i_1] [i_6])))) ? (arr_9 [i_1] [i_1] [i_1]) : 25210));
        }
        arr_30 [i_1] [i_1] = ((!((((11363175620485557724 || 18446744073709551602) - (~0))))));
        var_28 += 1;
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_29 += (arr_8 [i_9] [i_9] [20]);
        arr_34 [i_9] [i_9] = (!1);

        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            arr_38 [i_9] [i_10] [i_10] = -626393284502108512;
            var_30 = 0;
            arr_39 [i_10] = ((0 ? 0 : 112));
            arr_40 [i_10] [i_10] = ((-1099183678296931213 > ((((arr_6 [i_9] [i_9] [i_9]) ? 54056 : (arr_23 [i_10]))))));
            arr_41 [i_10] = ((((!(arr_3 [i_9] [i_9]))) ? var_2 : (((626393284502108487 ? 4294967295 : 189)))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_31 = (((arr_9 [i_11] [12] [i_9]) ? -224 : (arr_21 [8])));
            arr_45 [i_9] [i_11] [i_11] = ((192 ? (var_0 * 48502) : (((arr_0 [i_9] [13]) ? var_14 : var_1))));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_49 [i_12] = (arr_43 [i_12]);
            var_32 += (((~var_13) & 96));
        }
        var_33 = -13487662759218901343;
    }
    #pragma endscop
}
