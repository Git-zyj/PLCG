/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, ((min((!0), (max(var_7, var_8)))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = var_4;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_16 = (((arr_0 [i_0 + 2] [i_0]) * -var_7));
                        arr_22 [i_4] [i_4] [i_5] [i_4] = ((((-(((arr_18 [i_0] [i_5] [i_4]) * var_11)))) * ((var_12 * (arr_17 [i_0 + 1] [i_4] [11])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        var_17 &= (((((((arr_5 [i_7]) ? -75 : (arr_11 [i_7] [i_7] [i_7 - 1]))) + 2147483647)) >> (var_11 - 15100035882381784827)));

        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            var_18 = (min(var_18, ((((1 ? var_4 : (arr_24 [i_7] [i_7])))))));
            arr_29 [i_7 - 2] [i_8] = (((arr_18 [0] [i_8 + 1] [0]) ? var_10 : ((var_7 ? 65535 : (arr_20 [i_7] [i_7] [i_7 + 1] [14])))));
            var_19 -= ((var_4 <= (arr_16 [i_8] [i_8] [i_8] [i_7])));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_20 -= ((65535 ? (arr_9 [i_9] [i_7 - 2] [i_7 + 1] [i_7 - 2] [i_7 + 1] [i_7 - 2]) : var_7));
            arr_32 [1] [1] &= (((arr_5 [i_7 - 1]) + (arr_5 [i_7 - 1])));
            var_21 += (arr_10 [i_7]);
            var_22 = (((0 + var_6) ? -3921877666355020241 : var_14));
            var_23 = 1;
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_35 [i_10] = 4980608742392037721;
            arr_36 [i_7] [i_10] = 4278190080;
            arr_37 [i_7 - 1] [i_10] = (((var_8 / 1) ? (((arr_28 [i_7] [9] [i_7]) % var_5)) : 1));
            var_24 = (min(var_24, (((0 ? 0 : (((arr_21 [i_7] [2] [i_10] [i_10]) ^ var_14)))))));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    var_25 = (min(var_25, (~var_10)));
                    var_26 -= (((!var_11) != ((((arr_43 [10]) != var_5)))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_27 &= (((var_0 && -8630) && (arr_39 [i_7] [i_7 + 1] [i_14])));
                                arr_49 [i_7 - 2] [i_11] [i_12] = (((arr_33 [i_14] [i_13] [i_7]) + 8998584199103262992));
                                var_28 = var_2;
                                var_29 = (20659 / 10877);
                            }
                        }
                    }
                    arr_50 [i_7] [i_12] [i_12] [i_7] = (((!var_3) >= 1));
                }
            }
        }
    }

    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_30 += (arr_33 [i_15] [5] [i_15]);
        arr_53 [i_15] = ((+((0 ? (!-5759605378548259887) : 13))));
        arr_54 [i_15] = (((((-32767 - 1) + 2147483647)) << (1 - 1)));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            {
                arr_60 [i_17] [i_17] = 549755813887;
                var_31 = 8591131036770909939;
                var_32 = ((137 ? 1 : 1));
            }
        }
    }
    #pragma endscop
}
