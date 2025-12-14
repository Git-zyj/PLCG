/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-25648 ? (var_9 & 51256) : (51891 % 5137406846249861329))));
    var_21 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] = var_9;
            var_22 = (min(var_22, (((1 ? ((var_12 ? 13309337227459690275 : var_7)) : 13535)))));
        }

        /* vectorizable */
        for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] [i_0] = 13634;

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                arr_13 [i_0] [i_0] [i_3] = 30;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_4] [i_3] [i_2] [i_0] = 12208138395183393523;
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_3] = 13651;
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                            var_23 &= (810392826 ? ((51915 ? var_0 : -86)) : ((var_1 ? var_16 : -1178414866)));
                        }
                    }
                }
            }
            var_24 = (max(var_24, (~-var_0)));
            arr_21 [i_0] [i_0] = 810392826;
            arr_22 [i_0] [i_2] = 57344;
        }
        for (int i_6 = 4; i_6 < 18;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_8] = 13309337227459690267;
                        arr_31 [i_0] [i_0] = var_6;
                    }
                }
            }
            arr_32 [i_0] [i_0] [i_6 + 1] = 4183908981;
            arr_33 [i_0] [i_6] |= 2;
            var_25 ^= (((13615 ^ var_12) <= (((-2147483647 * ((246 ? 0 : var_5)))))));
            arr_34 [i_0] [i_0] = (-13309337227459690308 != 1260533207);
        }
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_26 = ((((((6 > -2445120408946597628) % 240))) ? 5137406846249861343 : ((((15 ? 13610 : 13309337227459690309)) + 4183908981))));
                        arr_43 [i_0] [i_0] [i_0] [18] [18] [i_0] &= var_7;
                        arr_44 [i_11] [i_0] [i_0] [i_0] = 11;
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        arr_48 [i_12] = 3384513029;
        arr_49 [i_12] |= 3484574447;
        arr_50 [i_12] &= (((!2147483647) ? 106 : 910454249));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 22;i_16 += 1)
                        {
                            {
                                arr_61 [i_12] [i_13] [i_12] [i_13] [i_12] = (!18446744073709551600);
                                var_27 = ((0 ? var_10 : var_8));
                                var_28 = 51896;
                            }
                        }
                    }
                    var_29 -= ((~((((29 ? 4294967295 : var_4))))));
                    var_30 = var_18;
                }
            }
        }
    }
    #pragma endscop
}
