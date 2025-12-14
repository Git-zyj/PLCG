/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((16378928287264447683 ? 89 : (min(0, var_15)))));
    var_18 = ((!((((var_11 & var_3) ? (var_4 && 0) : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (min((arr_10 [i_0] [i_0] [i_1] [i_0] [i_1] [i_4]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_20 *= ((((arr_13 [i_0] [i_0] [i_2] [i_1] [i_2]) << (((arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]) - 2401714636)))));
                                var_21 = (max((arr_6 [i_0] [i_0]), ((108 ? 663833790 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_4])))));
                            }
                        }
                    }
                }
                var_22 = ((+(((arr_3 [i_0]) + ((-(arr_6 [i_0] [i_0])))))));
                var_23 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((166 ? (arr_3 [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : 162))) ? (((((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) == var_1))) > (~var_14)))) : ((~(~35085)))));

                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    var_24 = var_8;
                    var_25 = (arr_1 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_26 ^= ((+(((-1030081947 - 18446744073709551591) ? -29 : 18446744073709551615))));
                                var_27 = (max(var_27, (((!(((var_2 ? 65535 : (arr_6 [i_6 - 1] [i_7])))))))));
                            }
                        }
                    }
                }
                for (int i_8 = 4; i_8 < 10;i_8 += 1)
                {
                    var_28 += (min((max((min(4, -9223372036854775807)), -55040)), ((((arr_8 [i_8 + 1] [i_8 - 3] [i_8] [i_8] [i_1] [i_1]) && 1229871286)))));
                    var_29 = ((((var_16 && (arr_15 [i_8 + 1] [i_8 + 1]))) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1634));
                    arr_26 [i_0] = var_0;
                    arr_27 [i_0] [i_0] [i_0] = ((((((((26433 ? var_4 : var_3))) || 939524096))) < -14548));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_0] = -123;
                    var_30 = (((arr_11 [i_9] [i_9] [i_0] [i_9 + 4] [i_9 + 4] [i_9 - 1]) ? (((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_15 : 2229802589))));
                    var_31 += ((127 ? 8191 : 63474));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = (!62);
                                var_32 = var_14;
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 8;i_12 += 1) /* same iter space */
                {
                    var_33 = -26441;
                    var_34 = (((((8437103144005008722 ? 32755 : 255))) ? ((var_6 ? (arr_35 [i_0] [i_0] [i_12 + 4] [i_0] [i_0]) : -5280610978752997885)) : ((((((-26433 ? 26441 : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_21 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 2] [i_0] [i_12 + 1]) : var_0)))));
                    var_35 = (15 - 136);
                    var_36 = (((arr_24 [i_0]) != var_9));
                }
            }
        }
    }
    var_37 = ((((((33871 ? -105 : 9534)))) ? ((((min(123, 56001))))) : var_0));
    #pragma endscop
}
