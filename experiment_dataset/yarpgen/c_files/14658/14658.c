/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((min(var_9, var_8)) == -515069642))) << (var_8 - 10946457481229907661));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= ((min(1, 1)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((var_5 * -43677) ? var_5 : -var_0)))));
                                var_17 += var_4;
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    arr_14 [i_0] [i_5] [i_0] &= ((var_5 ? var_1 : (min(15734272086678588359, (arr_12 [i_5 - 1] [i_1])))));
                    arr_15 [i_0] [i_5] [i_5] &= (max((((arr_6 [i_5] [i_5 - 2] [i_5] [i_5]) == var_10)), (!15662417237637814113)));
                    var_18 = (max(var_18, (((((((((61 ? 0 : 16368))) - -2174474096))) ? (((~(arr_13 [i_0] [i_0] [i_1] [i_5])))) : ((var_1 + (var_11 + 12284717227873924102))))))));
                }
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_19 = (min(1, 56));
                                var_20 = (arr_25 [i_0] [i_7 + 4] [i_6] [i_8 + 1] [i_8]);
                                var_21 = ((-53 ? 2174474096 : 12480793704265437971));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 2174474090;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            {
                arr_30 [i_9] [i_9] &= -2174474067;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_35 [i_11] [i_10] [i_11] [i_12] [i_12] = 41503;
                            var_23 = arr_21 [i_9] [i_10] [i_11] [i_12];
                            arr_36 [i_11] = ((!((!((((arr_10 [i_11] [i_10]) - var_12)))))));
                        }
                    }
                }
                var_24 = ((((((max(114, (arr_28 [i_9] [i_9] [i_10])))) ? 5965950369444113634 : (!var_10))) & (((((((arr_6 [i_10] [i_10 - 1] [i_9] [i_9]) ? var_10 : -127))) & 2254239122)))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_43 [i_9] [i_10] [i_13] [i_9] |= -3145544020171617901;
                            arr_44 [i_9] [i_9] [i_9] &= ((((((arr_4 [i_9] [i_9]) & (arr_38 [i_9] [i_10] [i_13] [i_13])))) ? ((min((arr_33 [i_9] [i_9] [i_9] [i_14] [i_14]), ((var_0 ? -16 : var_1))))) : ((-9396365123190774281 - (~229)))));
                            var_25 = ((126 ? -67 : 122));
                        }
                    }
                }
                var_26 = (((((((118 ? 1 : var_13)) * (((!(arr_42 [i_9] [i_9] [i_9] [i_9] [i_10] [i_10]))))))) ? ((((((arr_2 [i_9]) ^ var_12))) ? (max((arr_21 [i_10 - 1] [i_9] [i_9] [i_9]), var_7)) : -1)) : var_2));
            }
        }
    }
    #pragma endscop
}
