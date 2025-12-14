/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? var_7 : (!-5124747541750535048)))) ? 2283120261008456008 : (max(939642462, (min(-20, var_14))))));
    var_16 = var_12;
    var_17 |= var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = (max((((((min(10852, (arr_5 [i_0]))))) | (min(var_1, var_3)))), var_12));
            var_19 = ((((var_7 ? var_12 : 10852)) > (~65529)));
            var_20 = (min((var_9 + 1477253443), ((var_9 ? var_0 : (arr_3 [i_1] [i_0])))));
            var_21 -= -29944;
        }
        var_22 = (!((!((((arr_1 [i_0]) ^ (arr_2 [i_0] [i_0])))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_23 = (min(-29950, 0));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_24 = ((var_12 - ((((var_10 + (arr_7 [i_2])))))));
                        var_25 = (((!2920330487) % ((max((arr_13 [i_2]), (arr_13 [i_2]))))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_26 = ((((((arr_11 [i_4] [i_5] [i_6]) ? (((arr_15 [i_6] [i_5] [i_4] [i_3] [9] [i_2]) % var_4)) : var_4))) ? (max(((var_8 ? (arr_9 [9] [i_4]) : (arr_11 [i_2] [i_4] [1]))), ((min(20, var_4))))) : 111));
                            var_27 = ((1893910196 ? (arr_7 [i_3]) : ((-(arr_1 [i_4])))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_28 = (min((min((arr_10 [i_2]), ((1020793238557968405 ? -29963 : 15255230962805379861)))), (arr_7 [i_2])));
                            var_29 = (min((((arr_12 [i_4]) | (((arr_11 [i_4] [i_4] [12]) ? 35 : var_1)))), ((((-9 - var_2) != (arr_10 [i_2]))))));
                            var_30 = (min(var_30, ((((((~var_2) ? (~var_6) : (max(var_10, (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) < var_1)))));
                            var_31 *= var_1;
                            var_32 = (var_11 || (((2920330487 ? 255 : 12350070089156972154))));
                        }
                    }
                }
            }
        }
        var_33 = (min(-9, 2452491079377136925));
        var_34 = (min(var_34, ((min(((((18446744073709551612 >= (arr_2 [i_2] [i_2]))) ? var_11 : -var_10)), 221)))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_35 = 196;
            var_36 = (min((((0 > (arr_23 [i_8])))), (((!71) ? (max(var_9, 241)) : 209))));
            var_37 = (-var_1 | var_14);
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
        {
            var_38 = (((arr_6 [i_8]) | (arr_4 [i_8] [i_10])));

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_39 = (arr_14 [i_8] [i_8] [i_8] [i_8] [i_10] [i_8] [i_11]);
                var_40 = (arr_21 [i_8] [i_8]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_41 *= (~((var_0 ? (arr_9 [i_10] [i_12]) : (arr_23 [i_13]))));
                            var_42 = var_9;
                            var_43 = (arr_1 [i_8]);
                            var_44 = (((var_5 && 0) / (arr_9 [i_8] [i_8])));
                            var_45 = (((((15994252994332414716 ? 15994252994332414716 : -4718278416125733489))) ? ((218 ? -1477253468 : -8634562527611544710)) : 4188574755));
                        }
                    }
                }
                var_46 = (min(var_46, 244));
            }
        }
        var_47 = ((((max(((max((arr_31 [i_8] [i_8] [i_8] [i_8] [i_8]), 1))), -var_2))) ? (arr_17 [i_8]) : (((((arr_1 [1]) != (max((arr_6 [i_8]), var_0))))))));
        var_48 -= ((-(arr_10 [i_8])));
        var_49 += ((-(max((203 - 0), -4718278416125733489))));
    }
    #pragma endscop
}
