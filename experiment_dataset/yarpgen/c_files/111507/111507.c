/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (var_14 ? (-32761 == -110) : (var_14 < var_15));
                            arr_12 [i_0] [i_1 + 1] [5] [i_2] [i_0] [i_0] = (i_0 % 2 == zero) ? ((((arr_5 [i_0] [i_3]) >> (((((32761 % 16990669438811114351) ? (max(106, (arr_9 [i_0] [1] [1] [i_3]))) : var_12)) - 848204208))))) : ((((arr_5 [i_0] [i_3]) >> (((((((32761 % 16990669438811114351) ? (max(106, (arr_9 [i_0] [1] [1] [i_3]))) : var_12)) - 848204208)) + 415255848)))));
                        }
                    }
                }
                arr_13 [i_0] = ((((((max(var_15, var_2))) ? 8191 : (arr_8 [i_0 + 3] [i_1] [i_0 + 3] [i_1 + 1]))) & var_12));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_20 = ((~((max(var_6, var_9)))));
                                var_21 = (var_12 * 2047);
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [8] [8] = ((!((((var_15 | var_0) ? (!var_7) : var_8)))));
                                arr_33 [i_1] [i_1] [i_0] [i_8 - 3] [i_9] = (min(((var_7 || (arr_29 [i_0] [i_7] [i_7] [i_8 - 2] [6]))), (28725 || 1959205473)));
                                var_22 = (max(var_11, -32759));
                                arr_34 [i_0] [3] [i_0] [i_8] [i_9] = arr_14 [i_8] [i_1 + 2] [i_1 + 2] [i_0 + 2];
                            }
                        }
                    }

                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_10 + 2] [i_0] [i_10] = (min((((((0 ? 0 : 139)) < (var_17 - var_10)))), (arr_0 [i_0 + 1] [i_1])));
                        var_23 = ((5553 ? -32755 : (arr_1 [i_0] [7])));
                        var_24 = var_0;
                        var_25 = ((((max((~var_10), (!var_16)))) ? var_18 : var_10));
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 6;i_12 += 1)
                        {
                            var_26 = (arr_26 [4] [i_0] [i_0] [i_1 + 2]);
                            var_27 = (max(var_27, (((22498 ? -32761 : 1)))));
                            arr_45 [2] [i_0] = (arr_15 [i_0] [i_1 - 1] [i_0] [7]);
                            var_28 = ((-32754 ? (arr_15 [i_0] [i_1 - 1] [i_11] [i_0]) : var_3));
                            arr_46 [i_0] [i_1] [i_7] [0] [i_0] = var_13;
                        }
                        arr_47 [7] [1] [8] [1] [i_0] = (((~0) || var_5));
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_29 = (arr_53 [i_0]);
                                arr_56 [i_15] [i_0] [i_13] [i_0] [i_0] = ((~(arr_40 [i_0 + 2] [i_0 - 2] [i_1 + 2] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (min(-111, 126));
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 12;i_17 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_18 = 4; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 14;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 13;i_20 += 1)
                        {
                            {
                                var_31 = min(((min(var_17, (0 == -12734)))), ((((max(32761, (arr_68 [i_20] [2] [i_18] [1] [i_17 - 1] [i_16])))) ? -1441536378 : (~-32762))));
                                arr_70 [i_16] [i_17] [i_18] [i_18] [i_20 + 2] [i_19] [i_19] = ((~(!-1)));
                                var_32 = (~var_4);
                            }
                        }
                    }
                }
                var_33 = (((((arr_61 [i_16 + 1] [i_16 + 1]) && 888593549)) ? 117 : var_17));
            }
        }
    }
    #pragma endscop
}
