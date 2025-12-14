/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 122;

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 31;
        arr_3 [i_0] [1] |= 18446744073709551609;

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_11 [i_0 - 3] [i_0 - 3] [i_0] = 18;
                arr_12 [i_0] = 237;
                arr_13 [i_0] [i_1] [i_1 + 1] [i_1] = 1;
                arr_14 [i_0] [i_1 - 1] [i_1] = 1;
            }
            arr_15 [i_0] = 1;
            var_11 = 18446744073709551615;
            var_12 &= 121;
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_13 += 250;
            arr_22 [i_3 - 2] [i_3] = 4;
        }
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_14 = 147;
            arr_25 [i_3] = 9081245505628932887;
            arr_26 [i_3] [1] [i_5 - 2] = 1;
            var_15 = 1;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_16 = 31;
            var_17 = 0;
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_34 [i_3] [i_3] = 0;
            var_18 = 18095915067528554839;
        }
        var_19 = (max(var_19, 225));

        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_38 [i_3] [i_8] = 255;

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_20 = 13150331855084774404;
                arr_43 [i_3] [i_8] [i_9] = 18095915067528554828;
                arr_44 [i_3] [i_8 - 1] [i_3] = 274810798080;
            }
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                var_21 = 102;
                arr_47 [i_10 - 2] [i_3] [i_3 - 2] = 350829006180996777;
                arr_48 [i_10 - 1] [i_3] [i_3] [i_3] = 1;
                arr_49 [i_3] [i_3] = 1;

                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    var_22 = 1;
                    var_23 = 154;
                }
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_24 = (max(var_24, 1));
                var_25 += 0;
                arr_58 [i_3] [i_3] [i_12 - 1] = 17;
                arr_59 [i_3] [i_8] [i_3] [i_8] = 112;
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    arr_64 [i_13] [i_13] &= 1;
                    arr_65 [i_3] [i_3] [i_3] = 6;
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    arr_68 [i_13] [i_8 - 1] [i_8 - 1] [i_8 - 1] |= 4289006286329430695;
                    arr_69 [i_3] [i_3] [i_13] [i_15] = 2931696172743956989;
                }
                var_26 = 18;
                var_27 = 18;
            }
            var_28 = 15;
        }
        for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
        {
            var_29 = 64;
            arr_72 [i_3] [1] [i_16] = 4289006286329430674;
        }
    }
    for (int i_17 = 1; i_17 < 1;i_17 += 1)
    {
        arr_76 [i_17] = 1;
        var_30 = 1;
        arr_77 [i_17] = 213;
    }
    var_31 ^= 1;
    #pragma endscop
}
