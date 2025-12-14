/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 1024;
    var_16 = (((((var_14 ? (max(3008320300, -21934)) : (((min(var_8, -52))))))) ? (((5627158062787476202 >= 12819586010922075417) ? var_2 : (5627158062787476202 <= 3))) : (((-31687 == ((~(-127 - 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = -1028310890;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 *= var_8;
                            arr_13 [i_0] [i_3 - 2] = (((((-(var_6 == 13583956169225412905)))) ? ((var_8 % ((var_0 ? var_8 : var_5)))) : (((((-127 - 1) + 2147483647)) >> (var_12 - 28)))));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_0] [13] [i_4] = 0;
                                var_19 = (max(var_19, (((+(min((var_9 & -97), (((arr_12 [i_0] [10] [i_4]) ^ -1572568836)))))))));
                                var_20 = var_8;
                                arr_17 [i_0] [i_0] [i_1] [i_0] = ((1137829855 >> (-17019 + 17046)));
                            }
                            arr_18 [i_0] [i_3] [i_0] [i_3] [i_0] [i_1] &= (((((218507379 ? 12819586010922075414 : -22)) >> ((((1 ? (arr_2 [i_2] [i_2]) : -96)) + 63)))));
                            var_21 = (i_0 % 2 == zero) ? (((((((((arr_0 [i_0]) + 0)) << (((var_11 + 7440) - 27))))) || 15))) : (((((((((arr_0 [i_0]) + 0)) << (((((var_11 + 7440) - 27)) - 1))))) || 15)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] [i_0] = -var_12;
                            var_22 = (max(var_22, (((var_12 <= var_8) & var_1))));
                        }
                    }
                }
                var_23 *= (max(((((0 ? 13 : var_5)) + -1583333861)), 1792));
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    {
                        var_24 = ((var_1 ? -10735 : 13532));
                        arr_37 [i_8] [i_9 - 1] [i_8] [i_7] = (((((10723 ? var_6 : (arr_31 [i_7] [i_7])))) ? (((var_4 << (var_14 - 15446969432485339268)))) : ((-56 ? -1028310880 : 1618403962597994306))));
                        arr_38 [i_7] [i_8] [i_7] [i_10] [i_7] = 1;
                        arr_39 [i_7] [i_8] [3] [i_8] [23] [i_8] = var_6;
                    }
                }
            }
        }
        var_25 = (min(var_25, (((var_6 | ((~(arr_30 [24]))))))));
    }
    var_26 = (min(((~(var_13 * var_12))), (((var_13 ? 3258922237 : var_4)))));
    #pragma endscop
}
