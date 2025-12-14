/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~var_13);
    var_15 = 244;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = -var_13;
                arr_4 [i_0] [i_0] = (!var_13);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 *= (((((((~(arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]))) > (arr_8 [i_2] [i_1] [i_2])))) > (((var_3 != ((((!(arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))))))))));
                                var_18 = (arr_8 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                    var_19 = (max(var_19, (((-(!var_3))))));
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_20 = (((977528280078131788 / 2147483647) ? ((((((arr_14 [5] [i_5] [0] [i_1] [0]) * var_11))) ? ((977528280078131788 ? var_10 : var_2)) : ((var_2 * (arr_11 [1] [i_0] [4] [i_1] [i_5]))))) : ((((!(((977528280078131788 ? 25219 : (arr_9 [i_0]))))))))));
                    var_21 = (max(var_21, ((((!var_13) ? (((6528 & (arr_11 [i_0] [i_0] [i_0] [i_0] [i_5 - 1])))) : (((109 ? (arr_5 [4] [i_5 - 1] [i_1]) : (arr_9 [i_0])))))))));
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_22 = (~(~30850));
                                var_23 = (min(var_23, (((!((((((var_5 ? var_7 : var_10))) ? var_1 : (-9223372036854775807 - 1)))))))));
                                var_24 = (min(var_24, (0 >= 8)));
                                var_25 = ((var_6 ^ (!var_3)));
                            }
                        }
                    }
                    var_26 = ((-((~((-6529 ? var_11 : var_4))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_27 = (!3668120336);
                                arr_32 [7] [i_1] [i_1] [i_0] [1] [i_1] = ((((!((((arr_28 [i_1] [i_6] [i_0] [i_10]) ? var_11 : var_8))))) ? (arr_22 [i_0] [i_6] [i_0]) : (~var_12)));
                                var_28 = 44;
                                var_29 = (min(var_29, ((((((-82 + (arr_9 [i_1])))) ? ((var_6 ? ((1 ? -1 : 65535)) : (1 || 6528))) : (var_2 || var_11))))));
                            }
                        }
                    }
                    var_30 = ((26 ? ((((var_11 ? (arr_20 [i_0] [i_1] [i_6]) : 1069547520)) * (arr_8 [i_0] [i_0] [i_6]))) : var_2));
                    var_31 = (!((((arr_14 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 + 1]) ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]) : (arr_14 [i_6] [i_6 + 1] [10] [i_6] [i_6 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
