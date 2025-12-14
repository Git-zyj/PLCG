/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 >= (((((var_10 << (var_13 + 86))) == (var_14 == var_9))))));
    var_16 = ((var_10 <= (((((var_7 | var_3) < (var_12 * var_9)))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 -= (((((var_1 > (var_12 != var_13)))) < (((71 < var_14) << (-119 + 124)))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_18 = (1331 || 60259);
            arr_4 [i_0] = (((var_2 >= var_9) <= (var_12 ^ var_7)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                var_19 *= var_12;
                arr_11 [i_0] [i_3 - 3] [i_3] = var_8;
                arr_12 [i_0] = (((var_3 | var_7) >> ((((var_3 << (var_1 - 3766820283))) - 135139))));
                var_20 = (((var_10 + var_8) - (24243963 + 118)));
            }
            var_21 = (min(var_21, (((((var_5 << (var_6 - 4124036211))) / var_3)))));
            arr_13 [i_0] = var_2;
        }
        var_22 = ((((((var_13 && var_3) || (var_6 || var_13)))) >> (var_0 - 42659)));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_23 = var_0;
            var_24 = var_8;
            var_25 = var_1;

            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                var_26 = (min(var_26, var_5));
                var_27 = ((var_1 && ((((var_7 + var_11) * (var_8 || var_10))))));
                arr_22 [i_4] [6] [0] |= ((((((var_6 && (var_14 >= var_4))))) - var_12));
            }
            arr_23 [i_4 + 1] [i_4 + 1] = var_10;
        }

        for (int i_7 = 3; i_7 < 10;i_7 += 1)
        {
            var_28 = (min(var_28, var_10));

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_29 = (max(var_29, (((((var_11 >> (var_2 - 76))) - (((((var_4 <= var_8) != var_3)))))))));
                var_30 = (var_14 > var_11);
                var_31 ^= var_12;
            }
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                arr_31 [i_7] = ((((-103 < 117) / (var_12 - var_13))) * var_7);
                var_32 = var_11;
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_33 = (((((var_9 | (var_10 && var_4)))) != var_10));
                var_34 = var_0;
            }
        }
        arr_36 [i_4] [i_4] = ((((((var_1 >> (var_12 - 2862624430))) << (((32 | 118) - 113)))) * var_14));
        var_35 ^= (((((var_14 ^ var_6) ^ var_2)) == var_10));
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                {
                    arr_42 [i_4] [i_4] [i_4] = ((var_13 <= ((((var_14 + var_12) < var_6)))));
                    arr_43 [i_4] [i_4] [i_4] = var_14;
                    var_36 = var_5;
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_37 = (max(var_37, var_3));
        var_38 = (((((var_7 - var_10) - (var_13 - var_4))) - var_0));
        var_39 = (var_12 - -64);
    }
    #pragma endscop
}
