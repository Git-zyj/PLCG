/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_1 [18])));
                var_16 = (min(var_16, ((((18446744073709551609 << 1) * ((((min(8918, var_8))))))))));
                var_17 = (min(var_17, ((!(((952624716 ? 4299892604665131846 : -8918)))))));

                for (int i_2 = 4; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] = ((((((max(3342342578, 8891))) && (arr_0 [i_0 + 1]))) ? var_3 : ((((!(arr_8 [i_2])))))));
                    var_18 = (min(var_18, ((((arr_2 [i_1]) != (max(((max(4095, 1))), ((~(arr_0 [i_1]))))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((((3342342579 ? 3342342609 : -9)) << (var_0 - 47)));
                    arr_11 [i_0] [i_0] [i_2 - 4] = (arr_0 [i_2 - 3]);
                }
                for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_19 = var_5;
                    var_20 = (~8917);

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            arr_20 [i_4] [i_1] [i_1] = 1;
                            arr_21 [8] [8] [i_3] [i_4] [i_5] = var_9;
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_1] = (-125 - 1);
                        var_21 = (min(var_21, (3342342579 || 93)));
                    }
                    arr_23 [16] [i_1] [i_3] [i_3] = ((var_14 >= (~8917)));
                }
                for (int i_6 = 4; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_22 = (max(var_22, (arr_6 [i_0 - 1] [i_1] [9])));
                                var_23 = (max(var_23, (((((min(166, 8931))) ? (34 % 74) : ((-102 ? 90 : -8927)))))));
                                arr_32 [i_0] [1] [i_7] [i_7] [i_8] [i_7] = var_2;
                                arr_33 [i_0] [i_0] [i_7] [i_1 + 3] [i_6 - 4] [i_7] [i_8] = ((-9 ? ((952624716 ? 2296588310038852608 : (min(32753, 18446744073709551615)))) : -67314653852414904));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1] [i_6] [i_9 + 2] [i_10 + 1] [i_9 + 2] [i_10] = (var_10 >= var_12);
                                var_24 = var_5;
                                var_25 = (min(var_25, (((!(((~(var_0 | var_4)))))))));
                            }
                        }
                    }
                    var_26 = (9223372036854775805 >> 6);
                    arr_42 [i_0] [i_0] [i_6] = ((((((1 ? -98 : -8941)))) || (arr_0 [i_0])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_27 = (max(var_27, (((!((!(arr_15 [i_11] [i_11] [i_11] [i_11]))))))));
        var_28 = (max(var_28, (!var_14)));
        arr_45 [i_11] = (((10360 ^ -80) ? (arr_36 [i_11] [i_11]) : (arr_12 [i_11] [i_11] [i_11] [i_11])));
        var_29 = (min(var_29, ((((arr_18 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_18 [i_11] [i_11] [i_11] [i_11] [i_11]) : var_5)))));
    }
    var_30 = var_3;
    var_31 = ((54318821 ? 534773760 : var_8));
    var_32 = (!4294967294);
    #pragma endscop
}
