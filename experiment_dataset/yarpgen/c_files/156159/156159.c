/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = ((((0 ? 18446744073709551615 : ((((-32767 - 1) & -120))))) * ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_21 &= ((+(min((-369290465 > 3573195573597895084), 369290464))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 6;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_3 + 1] [i_3] = var_4;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_22 = (((max(133955584, 10)) << (((min(var_11, var_14)) + 4801267989441411378))));
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = (arr_14 [i_0]);
                            var_23 = (max(var_23, ((min((((!(arr_2 [i_3 + 3])))), ((((var_2 ? (arr_5 [i_4] [i_4]) : var_14)) & var_18)))))));
                        }
                        for (int i_5 = 4; i_5 < 8;i_5 += 1)
                        {
                            arr_19 [0] [i_1] [i_1] [i_3] [0] &= ((149 ? (((arr_17 [i_3] [0] [4] [i_5] [i_5] [i_2] [i_2]) ^ 4748324973618948860)) : (((0 << (306662591 - 306662590))))));
                            var_24 = (max(var_24, -1));
                        }
                        var_25 = var_13;
                    }
                }
            }
        }
        var_26 |= var_5;
        arr_20 [8] &= 8642727727907953363;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((90 << (((((25937 - -4748324973618948861) << (var_6 * 0))) - 4748324973618974792))));
        var_27 = (arr_6 [0]);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_28 = (((((arr_14 [i_7]) ^ var_9)) ^ (((((!124) >= (((arr_1 [i_7]) ? (arr_13 [i_7]) : (arr_24 [i_7])))))))));
        arr_27 [i_7] = (((var_15 ^ ((0 | (arr_8 [i_7] [i_7] [i_7]))))));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_29 = var_19;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_30 = (arr_31 [i_8] [i_9]);
                    var_31 = (((!-90) & (-32767 - 1)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_32 = ((var_2 ? (((65526 ? 1 : 65530))) : var_11));
                                arr_40 [i_8] [i_9] [i_11] [i_11] [i_8] = ((((arr_33 [i_8] [i_8]) && 0)));
                                var_33 = (arr_36 [i_8] [i_10] [i_9] [i_8]);
                            }
                        }
                    }
                    arr_41 [i_8] = -var_18;
                    arr_42 [i_8] [i_10] = (((var_12 & 1) ? ((var_6 ? var_7 : (arr_31 [i_8] [i_9]))) : (~95)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {
        arr_46 [i_13] = (((!var_16) % (var_5 / -369290465)));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                {
                    var_34 &= arr_35 [i_14] [i_15] [i_14];
                    var_35 = (min(var_35, (arr_34 [i_15 - 2] [i_14] [i_13 + 2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    var_36 = (((arr_31 [i_13] [i_13 - 1]) != (arr_37 [i_16] [i_16] [14] [6] [i_13 + 2])));

                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        arr_60 [18] [i_16] [i_17] [i_18] |= (arr_30 [i_13] [22] [i_13]);
                        var_37 = (max(var_37, (((4018472158253864091 - (arr_36 [i_13] [i_13 - 1] [i_16 + 1] [i_18]))))));
                        var_38 = (arr_29 [i_16]);
                    }
                    for (int i_19 = 2; i_19 < 19;i_19 += 1)
                    {

                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            var_39 += (arr_62 [i_16 + 3] [i_13 + 1] [6]);
                            arr_66 [i_13] [i_16] [6] [i_19] [i_20] [i_20] [i_19] = (((arr_49 [8] [i_13 + 1] [i_19]) | (arr_49 [i_17] [i_13 + 1] [i_17])));
                        }
                        arr_67 [i_19] [i_16] [i_17] [i_17] [i_16] [i_16 + 1] = (((((1083566483 * (arr_53 [i_16] [i_16])))) && 0));
                        var_40 = ((var_10 > (arr_34 [i_17] [i_16] [i_17])));
                    }
                }
            }
        }
        var_41 = (((((12500517056458599551 ? (arr_34 [i_13] [16] [i_13]) : (arr_30 [i_13] [1] [i_13 - 1])))) ? ((var_0 ? 1 : var_3)) : -32));
    }
    var_42 = (max(var_42, (((((~(4018472158253864076 >= 68)))) & (max(19, (min(var_11, 18446744073709551595))))))));
    #pragma endscop
}
