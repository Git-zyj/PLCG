/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_2, var_6)))) ? ((((!(!var_11))))) : (((var_8 ^ var_3) ? var_5 : var_2))));
    var_14 = 249;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = 1;
                            var_16 = var_7;
                            arr_11 [i_2] [8] [i_1] [i_2] = ((arr_5 [i_0] [i_1] [i_3]) <= ((1 ? (arr_0 [3]) : 31256)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] = ((!(((255 ? 41 : ((-6267 ? (arr_9 [9] [8] [10] [i_4] [i_5] [i_5]) : 1)))))));
                            var_17 = min((arr_14 [i_5] [i_4] [i_4] [1] [i_5] [i_1]), (max(224, (arr_3 [i_0]))));
                        }
                    }
                }
                var_18 = (max(var_18, (arr_6 [i_1] [i_1] [i_1])));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_21 [i_0] = -1;
                    arr_22 [5] [8] [i_6] [i_6] = (~(arr_9 [0] [i_1] [4] [i_1 + 1] [10] [i_1 + 3]));
                    var_19 ^= (arr_2 [i_6] [i_1]);
                }
                for (int i_7 = 3; i_7 < 7;i_7 += 1)
                {
                    arr_26 [3] [8] [7] = var_0;
                    var_20 *= (((arr_1 [1]) << ((((max((arr_1 [i_0]), var_1))) ? ((((arr_13 [i_0] [5] [5] [i_7]) <= (arr_16 [i_0] [i_1] [i_1] [i_0] [i_7] [i_7])))) : (arr_6 [i_0] [10] [i_7])))));
                    var_21 = (max(var_3, ((max((arr_9 [i_7] [i_7] [i_7] [i_7 - 3] [10] [6]), (arr_9 [4] [i_7] [0] [i_7 - 2] [10] [i_7]))))));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_22 = ((((arr_29 [i_1 - 2] [i_1 + 4] [i_1 - 1]) ? (arr_14 [i_0] [4] [4] [i_1] [i_8] [i_8]) : 31)) > ((~(arr_10 [i_1] [6] [i_1 + 2] [i_0]))));
                    var_23 = ((((((3870557759 + (arr_20 [i_1] [i_1] [9] [i_8]))) ? ((-(arr_7 [i_8] [i_8] [i_8] [i_8]))) : (var_3 <= -869022039)))));
                    var_24 = (max(var_24, (((-9223372036854775807 ? -650105093 : 98)))));
                    var_25 = (max(var_25, (max(var_4, 26363))));
                }

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_38 [i_9] [9] = -1953111321;
                                var_26 += (min(32, -869022017));
                            }
                        }
                    }
                    var_27 = (max(var_27, (231 ^ 13)));
                }
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    var_28 = (min(var_28, (+-101)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_47 [i_0] [1] [2] [i_13] [1] = (min((((-1697888746 & (1303043562 >> var_4)))), (((5579785275652509336 < 26341) ? (((((arr_13 [i_0] [3] [i_12] [i_13]) <= var_2)))) : ((var_5 ? var_0 : 896))))));
                                var_29 = (((-869022043 && 888) % (var_1 ^ -var_8)));
                                var_30 = (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_48 [7] [i_13] [1] [i_1] [5] = ((!((((((arr_30 [i_12] [i_13] [i_12]) == var_12))) < ((26379 << (var_9 - 2232125422968897705)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 ^= min(var_4, (var_3 > var_2));
    #pragma endscop
}
