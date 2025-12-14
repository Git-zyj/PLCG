/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 += ((-(((454685328 || (arr_0 [i_0 - 1]))))));
        var_13 = (max(var_13, (arr_1 [2])));
        var_14 ^= (min(((((arr_0 [i_0 - 2]) << 1))), (min((arr_1 [i_0 + 1]), var_2))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_15 ^= var_9;
            arr_6 [i_1] = 22;
            arr_7 [6] = -var_11;
            var_16 = (min(var_16, 32));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_17 = (min(((var_4 ? (((max(15, var_6)))) : (min(1, 4294967284)))), (~var_4)));
            var_18 ^= 61;
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_19 = ((((((((1 << (454685334 - 454685324)))) ? (max(32767, 6391363520335111246)) : var_3))) ? (((max((arr_10 [i_4]), var_0)))) : (((-9223372036854775807 - 1) - -3586773725488059869))));
            var_20 = (min(var_20, ((((min((-74428186 & var_6), ((-705542673 / (arr_3 [i_1] [i_4]))))) > var_4)))));
            var_21 = (min(var_21, 24132));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            var_22 += (arr_17 [0] [9] [i_8]);
                            var_23 = ((-((((arr_11 [8]) == 18446744073709551615)))));
                            var_24 = 164;
                            var_25 = (min(var_25, ((((~454685328) ? (arr_22 [i_1] [i_5 + 3] [i_6] [i_7] [12]) : ((59 ? (-9223372036854775807 - 1) : var_1)))))));
                            var_26 = -268435456;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_27 = var_2;
                            arr_27 [i_1] [i_1 - 1] [i_1] [i_1] [1] [i_1] = (((arr_22 [0] [i_6 + 2] [i_6 - 1] [i_6] [0]) ? var_7 : (arr_22 [i_6] [i_6 + 4] [i_6 - 1] [i_6] [4])));
                            var_28 = (max(var_28, (((!(!var_10))))));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_29 = (((((2998 ? (arr_24 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]) : 1))) ? ((-(arr_5 [i_1 - 2] [i_1 - 2] [i_6]))) : 113));
                            var_30 = (!1);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_31 = (min(var_31, (var_0 || 1)));
                            arr_33 [i_1] [i_1] [6] [i_6 - 1] [i_7] [i_11] = var_2;
                        }
                        var_32 *= (2760 * 1023);
                    }
                }
            }
            var_33 = ((var_10 && (arr_3 [i_1 - 1] [i_1 - 1])));
        }
        var_34 = ((+(max((arr_18 [i_1] [i_1] [i_1] [i_1 - 3] [i_1]), 1))));
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 13;i_12 += 1) /* same iter space */
    {
        var_35 = ((var_3 ? 16256 : (!192)));
        var_36 *= ((!47441) >= var_3);
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_37 = 9223372036854775807;
        var_38 = (arr_28 [i_13] [i_13] [i_13 + 2] [i_13]);
    }
    var_39 *= var_6;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            {
                var_40 |= (((((arr_40 [i_14] [8]) ? var_6 : 255)) <= (-3216326409 >= 18446744073709551615)));
                arr_45 [i_14] = ((var_6 >= (max(8818471301807411472, (~-2325)))));
                var_41 *= (min(64, (((arr_42 [i_15] [24]) ? (arr_42 [i_14] [24]) : (arr_42 [i_14] [12])))));
            }
        }
    }
    #pragma endscop
}
