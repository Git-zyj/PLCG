/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!var_9) ? ((max(((106 ? var_11 : var_13)), 255))) : (((max(302468199924023792, -302468199924023789)) << (var_7 - 13604)))));
    var_16 = (min(var_16, (((var_12 ? 18446744073709551604 : (((var_14 ? (var_8 != var_14) : var_13))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((33105 ? 170 : (arr_0 [i_0])));
        arr_4 [i_0] = ((33105 ? 32430 : 920154189));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (arr_8 [i_0] [1] [i_0] [i_0]);
                    arr_11 [i_2] [i_0] [i_0] [6] = (!var_13);
                    arr_12 [i_0] = var_6;
                    arr_13 [i_0] = (((arr_9 [i_0] [i_1] [i_0]) ? (arr_8 [i_0] [i_1] [i_2] [i_1]) : ((var_8 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0])))));
                }
            }
        }
        arr_14 [4] [i_0] = (arr_9 [i_0] [13] [13]);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_4 - 2] [13] = ((!(arr_5 [i_3 - 1] [i_4 - 1])));
                        arr_24 [i_0] [i_0] = (((arr_9 [i_5] [i_4] [i_3]) ? ((((-4451 + 2147483647) << (4450 - 4450)))) : (arr_22 [i_4 + 1] [i_4 + 1] [i_3 - 1] [1])));

                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_17 = (max(var_17, 3));
                            arr_29 [3] [i_3] [i_4 - 1] [i_5] [i_0] = (((var_5 || var_12) ? (arr_16 [i_0] [i_3] [7]) : (arr_16 [i_6] [i_5] [i_0])));
                        }
                        var_18 -= (((((arr_21 [i_5] [i_4] [i_3] [i_3 + 1] [i_0]) || (arr_1 [10]))) ? 82 : (arr_8 [i_3] [i_4 - 1] [i_4 - 2] [i_4 - 1])));
                        var_19 = (min(var_19, (arr_7 [i_5])));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_20 *= ((((((arr_20 [i_7] [i_7] [i_7] [14]) ? (arr_20 [i_7] [i_7] [i_7] [i_7]) : (arr_20 [i_7] [i_7] [i_7] [i_7])))) ? ((((!((((arr_22 [i_7] [i_7] [i_7] [i_7]) >> (-117513752 + 117513758)))))))) : ((~(min((arr_0 [i_7]), var_2))))));
        arr_34 [i_7] = (17798486633046899215 >= -225439807);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                {
                    arr_39 [7] [10] [i_9 + 3] [9] = 17798486633046899231;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_47 [i_7] [i_8 + 1] [i_9 + 2] [i_10] [i_10 + 3] [i_11] [i_11] = (((arr_41 [i_8] [7] [i_8]) ? (arr_18 [i_7] [5] [1]) : (((var_10 ? var_6 : (arr_43 [i_10 - 1] [i_10] [i_9] [6]))))));
                                var_21 = (max(var_21, 1392806746));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
