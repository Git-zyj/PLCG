/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((max((var_15 != var_15), 1)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (min(var_18, ((min(((~((min(1, 65525))))), 2147483627)))));
                    var_19 = (min(var_19, var_4));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_20 = (((arr_13 [i_4] [i_4 - 1] [i_4] [i_4] [0] [i_4 - 1]) ? (arr_13 [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]) : 50));
                                arr_17 [i_5] [i_1] [i_0] = var_16;
                                var_21 += (((arr_3 [i_3]) != var_13));
                            }
                        }
                    }
                    var_22 = var_16;
                    var_23 = (max(var_23, ((((arr_13 [i_0] [i_1 + 1] [i_3] [i_3 - 1] [13] [13]) ? var_11 : (arr_13 [i_3] [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_0]))))));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_24 = (((var_16 / -3333564771385285582) != (((((min(var_10, var_11))) ? var_3 : (((-(arr_14 [i_0] [i_1 + 1] [i_1] [i_6])))))))));
                    var_25 = (max(var_25, ((max(((((arr_12 [i_6 + 1] [i_1] [i_0]) ? (arr_5 [6] [i_1] [i_1]) : -108))), (((((var_10 ? var_14 : (arr_8 [i_6] [i_0])))) ? ((8053063680 ? var_2 : var_9)) : var_16)))))));
                }
                var_26 = ((+((((arr_5 [i_1] [i_1 + 3] [6]) * (arr_18 [i_0] [i_1]))))));
                var_27 += var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 18;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_27 [i_7] [i_7] [16] = var_11;
                    var_28 = (((max(var_1, ((-(arr_21 [i_8]))))) << (3109813717 - 3109813714)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_29 *= (2147483615 + -2222);
                                arr_33 [8] [i_8] [8] [i_9] [i_9] [i_8] [i_10] |= (((((min(var_12, var_0)) & (((36673 ? 1 : -2147483599))))) | (arr_26 [i_7] [i_8] [i_10] [i_10])));
                                var_30 = 4294967290;
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    arr_36 [i_12] [i_7] [i_7] [i_7] = (((((!(!var_6))))) != (((((var_6 ? var_11 : (arr_23 [i_7] [i_7] [i_12])))) ? var_1 : ((((var_2 != (arr_29 [i_7] [i_7]))))))));
                    arr_37 [i_8] |= var_11;
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_31 = (max(-9223372036854775805, ((((max((arr_26 [i_14] [13] [17] [i_7]), var_9)) != ((((!(arr_39 [i_7]))))))))));
                            var_32 = ((+((((((arr_26 [i_14] [3] [3] [3]) - 4467570830351532032))) ? ((var_14 ? (arr_34 [i_7] [i_7] [i_7]) : var_2)) : ((((arr_23 [20] [i_7] [20]) ? var_8 : var_7)))))));
                        }
                    }
                }
                var_33 *= arr_22 [i_8] [i_7];
                var_34 = (max(var_34, var_4));
            }
        }
    }
    var_35 *= (max(9223372036854775804, (((var_12 ? 14 : 65518)))));
    var_36 = (((-var_11 + 9223372036854775807) << (((((((min(var_16, var_12))) && var_8))) - 1))));
    #pragma endscop
}
