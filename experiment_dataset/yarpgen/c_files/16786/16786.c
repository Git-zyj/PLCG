/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 && (((5292160862923481077 ? var_14 : ((-35 ? 1 : 16979)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [2] [i_0] = (2147483647 <= var_17);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_21 = ((var_6 ? -4692805636287058930 : var_11));
            arr_5 [i_0] = (var_6 > var_8);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_22 = ((~((var_10 ? var_14 : var_7))));
            var_23 = (max(var_23, ((min((var_6 >= var_2), -var_15)))));
            var_24 = -16979;
            var_25 = min((var_5 ^ 2370), var_9);
            arr_9 [i_0] = -1;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_16 [19] [i_4] [23] = 60256;
                var_26 -= var_7;
                var_27 = var_19;
                var_28 = -36020000925941760;
            }
            for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_29 += (max(16979, (((var_2 ^ 2180513728209429537) ? (!var_11) : (-2147483647 - 1)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_30 = (min(var_4, (max((!0), (var_8 | var_17)))));
                            var_31 ^= ((-(min(2034168359262286362, var_8))));
                            arr_24 [i_0] [22] [14] [i_6] [i_7] = (((171 & -5498262364763488886) * (!var_3)));
                            arr_25 [i_7] = (min((!134217727), -4692805636287058949));
                            var_32 = (((((min(var_15, (~1))) + 2147483647)) << (var_7 - 49477)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_34 [i_8] [i_10] [4] [19] [i_8] [18] [i_8] = 15034;
                            var_33 = (min(var_33, 18446744073709551615));
                            arr_35 [23] [i_3] [i_8] [19] [i_8] = ((-2180513728209429511 ? (!var_16) : var_4));
                        }
                        arr_36 [5] [i_8] = ((var_13 + ((((min(var_17, var_11))) ^ var_4))));

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_39 [i_0] [i_8] [i_8] [i_11] = var_10;
                            var_34 = max((((((var_12 ? var_6 : var_11)) > (~var_3)))), var_18);
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 22;i_12 += 1)
                        {
                            var_35 = 16412575714447265257;
                            arr_42 [12] [1] [i_8] [i_8] [3] [15] = (55463 && var_7);
                            arr_43 [i_8] [3] [15] [i_9] [21] = (var_4 > var_19);
                        }
                        var_36 &= ((-(min(4611686018427387896, var_13))));
                        arr_44 [i_8] = (min((var_6 & 1040733598), ((max(90, var_15)))));
                    }
                }
            }
            var_37 = (min(var_37, (~9597239562022313339)));
            var_38 ^= max(((((var_15 | var_10) << (9205543426661563209 - 9205543426661563195)))), (((!var_8) / (max(var_14, var_3)))));
            var_39 &= ((((1 ? -5292160862923481078 : -158648994))) ? ((min(619153243, 49))) : 4692805636287058929);
        }
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 4; i_15 < 14;i_15 += 1)
            {
                {
                    var_40 = (min((max(var_2, -4692805636287058929)), (~2370)));
                    var_41 = (((-5292160862923481062 ^ 774523784) != (((var_9 ? var_14 : 52756)))));
                    var_42 = (min((min(18446744073709551615, 774523784)), ((((var_3 + 9223372036854775807) << (180 - 180))))));
                }
            }
        }

        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_43 = (min(((min((var_11 ^ var_1), ((var_16 ? 10927 : -3269711990541213017))))), (((!268435456) ^ 2047))));
                            var_44 = var_5;
                            arr_61 [i_18] [12] [i_17] [2] [5] [2] [i_17] = 2048777902849677284;
                            var_45 = -201;
                        }
                    }
                }
            }
            var_46 = (min(var_46, -15349725683779135876));
        }
        var_47 = (var_2 - var_2);
        arr_62 [7] = ((var_3 ? ((~(-9223372036854775807 - 1))) : (5292160862923481078 == var_17)));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_48 |= 158648994;
        var_49 = var_1;
        arr_66 [i_20] = 16646144;
    }
    #pragma endscop
}
