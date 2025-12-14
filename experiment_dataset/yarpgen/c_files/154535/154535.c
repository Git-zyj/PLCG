/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min((min(var_8, ((var_3 ? var_8 : var_5)))), (((var_3 ? var_0 : 2135334846))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_13 = (min(-var_5, (arr_0 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_10 [i_1] [9] [i_2] [i_1] [i_1] = (min(((var_1 ? ((((arr_6 [i_4] [i_2] [i_2] [i_1]) && (arr_7 [i_0] [i_1 - 1] [12] [i_1 - 1])))) : -60)), (((((arr_1 [i_0]) <= 46782)) ? ((min((arr_7 [i_0] [i_1] [i_3] [i_4]), var_7))) : var_11))));
                                var_14 = (var_5 ? (arr_2 [i_0]) : (8866857420366364069 + -2267873383));
                                var_15 = (max(var_15, ((min((arr_2 [i_4]), ((-(arr_7 [i_2] [i_1 - 1] [i_1 + 1] [i_0]))))))));
                                var_16 = var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_1] [i_6 + 1] = ((-19112 ? -2243 : (arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [3] [i_0])));
                                var_17 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {

                            for (int i_9 = 2; i_9 < 22;i_9 += 1)
                            {
                                var_18 = (min(((((arr_0 [17]) ? ((59 ? 43954 : (-32767 - 1))) : (arr_1 [i_0])))), 12720491630168659182));
                                var_19 -= (arr_24 [i_0] [i_1 - 1] [i_7] [i_0] [i_9 + 1]);
                            }
                            for (int i_10 = 3; i_10 < 23;i_10 += 1)
                            {
                                var_20 = (1488611887 + 2292);
                                var_21 = (min(var_21, (((((min((arr_4 [i_0] [i_7 + 2] [i_1 - 1] [i_10 + 1]), (arr_4 [i_1] [i_7 + 3] [i_1 + 1] [i_10 + 1])))) == (arr_4 [i_7] [i_7 - 1] [i_1 + 1] [i_10 - 1]))))));
                                var_22 = (min(((5726252443540892433 ? (arr_21 [i_10 - 2] [i_10 - 2] [i_1 + 1] [5] [i_7 + 2] [i_8 - 2]) : (arr_0 [i_7 + 2]))), var_6));
                                arr_31 [4] [i_1 + 1] [i_7 + 2] [4] [i_8 - 1] [i_8] [i_0] |= (arr_29 [i_0] [23] [23] [i_8] [i_10 - 1]);
                            }
                            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                            {
                                var_23 = var_8;
                                var_24 = min(8188, 2125977525);
                                var_25 = ((((var_5 ? (arr_16 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_8 - 1] [i_11] [i_8 - 1]) : (arr_16 [i_11] [i_8 + 1] [i_8] [16] [i_1 + 1] [i_0]))) * 7029));
                                var_26 &= (min(((~(arr_8 [22] [i_1 + 1] [i_0]))), ((((arr_33 [i_7] [i_1 + 1] [i_7 + 3] [i_0] [i_8 - 2] [i_7] [i_7]) || (arr_26 [i_11] [i_8 - 2] [13] [i_1 + 1] [i_1] [15]))))));
                            }
                            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                            {
                                var_27 = (min(1581463376, (((((min(2047, -1))) ? 9410 : (arr_13 [9] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]))))));
                                arr_37 [i_1] [i_1] [9] = (arr_1 [i_8]);
                            }
                            var_28 |= ((var_7 ? ((min((arr_13 [i_8] [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 1]), (arr_23 [i_1 - 1] [i_0] [i_7 + 2] [i_8 - 2])))) : (((arr_9 [i_8] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1]) + var_11))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_43 [i_0] [19] [i_13] [i_1] [i_13] = (((arr_33 [3] [18] [i_13] [i_1] [i_1 - 1] [i_0] [21]) ? var_3 : ((((arr_33 [i_0] [i_1] [i_0] [i_1] [i_14] [i_14] [i_1]) & (arr_33 [2] [i_0] [i_0] [i_1] [2] [i_0] [2]))))));
                            var_29 = (min(var_29, ((((((var_4 ? (arr_36 [i_1 + 1] [0] [i_13] [21] [i_0]) : (min((arr_21 [i_0] [i_0] [0] [i_0] [9] [i_0]), 2099588202))))) ? 0 : (~7275))))));
                        }
                    }
                }
            }
        }
    }
    var_30 = var_10;
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                {
                    var_31 = ((2185688928469881537 ? 4092 : 1843));
                    var_32 = (((((13 ? var_0 : ((-32755 ? 22933 : 63690))))) ? (((((arr_44 [i_16] [i_17]) ^ (arr_11 [i_15] [i_16] [i_15]))) ^ -119)) : (arr_44 [i_15] [i_16])));
                    var_33 += 23702;
                }
            }
        }
    }
    #pragma endscop
}
