/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((~((~(max(0, var_11))))));
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = (((((!(arr_7 [i_0] [i_2] [i_3] [i_2]))))));
                                var_16 = ((~(~18446744073709551615)));
                            }
                        }
                    }
                }
                var_17 = ((min((max(var_4, var_11)), ((18446744073709551615 ? var_9 : (arr_8 [i_0] [7] [i_0] [6] [i_0] [i_0]))))));

                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    var_18 = ((var_7 ? ((+((((arr_1 [i_0] [i_1]) > var_8))))) : ((-((-(arr_3 [i_0] [i_0] [i_5])))))));

                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_19 = (min((min((arr_13 [i_0] [i_5 - 2] [i_7] [i_1]), 192)), 2063924901411311777));
                            var_20 = (3503370061 >> ((((((min(235, 1))) ? (18446744073709551615 * 4294967283) : var_11)) - 18446744069414584308)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_21 -= ((60549690 ? 912274639285613073 : 192));
                            var_22 = var_2;
                            arr_20 [i_8] [i_6] [2] [8] [i_0] = (arr_13 [i_0 + 2] [i_1] [i_0 + 2] [i_1]);
                            arr_21 [i_0] [i_1] [1] [i_6 - 2] [6] |= var_8;
                        }
                        var_23 = var_0;
                        var_24 *= (max((min((arr_5 [i_0] [9] [1]), (((var_0 != (arr_7 [5] [5] [i_0] [i_0])))))), (((!(!var_12))))));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_24 [i_1] [i_5 + 1] [i_9] = ((!(((~((2058638308 ? var_1 : 83)))))));
                        var_25 = (var_6 - 16);
                        arr_25 [i_9] [i_1] [i_1] [i_9] = (~55);
                    }
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_11] = ((((((arr_8 [i_0] [i_0] [i_0] [i_1] [i_10] [1]) ? (arr_8 [i_0 + 2] [i_0 + 1] [i_1] [i_10] [i_11] [i_11]) : var_6))) > var_2));
                        arr_34 [i_0] [i_0] [i_1] [i_10] [2] = ((min(1, (arr_23 [i_0] [8] [i_0 + 1] [i_10]))));
                    }
                    var_26 += ((var_1 > (arr_31 [1] [i_0 + 2] [1])));
                }
                var_27 = ((-var_1 ? (arr_11 [i_0 + 2] [i_0 + 2] [i_1] [4]) : (arr_11 [i_0 + 1] [8] [2] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                arr_41 [i_12] [4] [14] = var_8;
                var_28 = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 8;i_17 += 1)
                    {
                        {
                            var_29 = (((((arr_9 [i_17 + 2] [i_16] [6] [i_17] [i_17] [0] [i_16]) ? var_1 : 12649407022439498875))) ? -2097144 : (max((arr_9 [i_17 + 2] [i_15] [0] [i_17] [i_17] [i_16] [i_16]), (arr_9 [i_17 + 2] [i_15] [i_17] [i_17 + 2] [i_17] [8] [i_15]))));
                            var_30 += (12891798787203766117 ? 21 : 5797337051270052752);
                        }
                    }
                }
                var_31 = (12891798787203766117 | var_6);
                var_32 = (!5797337051270052743);
            }
        }
    }
    #pragma endscop
}
