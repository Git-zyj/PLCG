/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 |= ((arr_10 [i_2 - 1] [i_4 - 2] [i_0] [i_4] [i_4 - 2]) / (arr_5 [i_1] [i_3] [i_3] [i_3]));
                                arr_13 [i_1] [i_2] [i_3] = (~71);
                                arr_14 [0] [i_1] [i_2 + 2] [i_3] [i_3] |= var_5;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_16 += (max(-67, ((((min(306698613, 306698613))) ? ((((arr_23 [9] [i_6] [9] [9] [9]) == 2304561314))) : var_13))));
                                arr_26 [i_7] [i_1] [i_5] [i_1] [i_0] = (arr_24 [i_6 + 1] [i_6] [i_6 - 1] [i_1] [i_6] [i_7]);
                            }
                        }
                    }
                }
                var_17 = ((((!((max(var_9, (arr_2 [i_0] [i_1] [i_1])))))) ? ((16203 ? 21107 : 184)) : (max(-1169476208, (!0)))));
            }
        }
    }
    var_18 *= var_2;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_40 [i_8] [i_8] [i_10] [i_11] [0] = -15683;
                                var_19 &= (max((var_7 ^ var_10), (((var_5 <= (arr_20 [i_8] [i_11 + 3] [i_10] [i_11]))))));
                                var_20 = -3988268683;
                                var_21 *= var_1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_46 [i_8] [i_8] [i_9] [i_13] [i_14] = (((arr_6 [i_8] [i_9] [i_13]) ? (((arr_6 [22] [i_9] [i_9]) & (arr_6 [i_8] [i_9] [i_9]))) : ((((arr_6 [i_8] [i_9] [i_13]) && (arr_6 [i_9] [i_13] [i_13]))))));
                            arr_47 [i_9] [10] [i_9] = ((((max((arr_43 [i_14 + 2]), var_7))) ? (arr_6 [i_13] [i_9] [i_13]) : (max((arr_25 [i_8] [i_8] [i_14 - 3] [i_14 + 3]), (arr_35 [i_13] [i_13] [i_14 - 3] [i_14 + 3] [i_14 + 1])))));
                            var_22 += (min((((arr_10 [i_8] [10] [i_13] [i_14 - 3] [i_14 + 2]) ? (arr_36 [i_8] [i_9] [i_13] [16]) : (arr_10 [i_8] [i_9] [i_13] [i_14] [i_14 - 1]))), var_3));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_54 [i_8] [i_17] [i_15] [i_16] [i_15] = ((~((min((arr_37 [i_8] [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_8] [i_16 - 2]), (arr_37 [i_9] [i_16 - 2] [i_16 - 1] [i_16 + 2] [7] [i_16]))))));
                                var_23 *= (min(((min((arr_15 [i_8] [i_16 - 1] [i_15] [i_16 - 1]), (arr_15 [i_8] [i_16 + 1] [i_15] [i_17])))), (((arr_52 [i_9] [i_9] [i_15] [i_15] [i_16 - 2] [i_16] [i_17]) ^ ((((arr_41 [i_9] [i_15] [i_16] [i_17]) < var_5)))))));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, ((max(((max((arr_51 [i_8] [i_9] [i_9] [i_9]), var_13))), (max(57719, (arr_51 [i_8] [i_8] [i_9] [i_9]))))))));
            }
        }
    }
    var_25 += (max(-199923976, 2147483647));
    #pragma endscop
}
