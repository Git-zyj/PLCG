/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165414
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
                arr_4 [i_1] = (arr_2 [i_1] [24] [24]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 ^= (arr_1 [i_3] [i_4]);
                                var_18 += (((((arr_2 [i_3] [i_4] [i_2]) * ((-(arr_9 [i_4 + 1] [i_3] [i_2] [i_0] [i_0]))))) ^ (122 >= 134)));
                                var_19 = 6187319197079941585;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_20 = (max(0, -1));
                                var_21 += (arr_6 [i_0] [14] [0]);
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((arr_18 [2] [i_9 + 3] [i_0] [i_1] [i_0]) >> ((((arr_10 [i_0] [i_0] [i_0] [17] [i_0] [i_0] [i_0]) == (arr_28 [i_0] [i_0] [1] [i_0] [i_10])))))) >= (((!(1 && 133)))))))));
                                arr_31 [i_10] [i_10] [i_8] [i_10] [i_0] &= (((((-1 ? 3620720030690295408 : 139))) ? (!-5161779034991268772) : (max(1, ((-3707117086799231775 ? var_16 : (arr_10 [0] [i_9] [i_9 - 2] [i_9 + 2] [i_9] [i_9 + 3] [i_9])))))));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_8] [i_8] [i_11] = (~((~(var_4 + 104))));
                        var_23 *= 1;
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_37 [i_8] [9] [i_8] [12] = ((~(((((arr_7 [i_0] [i_0] [i_0]) & 18446744073709551615)) ^ ((max(-8718663475854916555, -3458937810589662928)))))));
                        var_24 = (~(63 * 17363));
                        var_25 = var_10;
                        var_26 = (arr_26 [i_0] [i_1] [i_8] [i_12 - 1]);
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_27 |= (((var_15 == (arr_1 [0] [i_13]))));
                        arr_41 [i_0] [i_8] [i_8] [i_13] = (((arr_14 [i_13] [i_1] [i_0]) ? 2572945916 : var_0));
                    }

                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        var_28 = (!0);
                        var_29 = arr_22 [i_0] [i_8] [i_14 - 2];
                        var_30 = ((~(34105 - 15285)));
                    }
                    arr_44 [i_8] [i_8] [i_8] = var_5;
                }
            }
        }
    }
    var_31 = var_11;
    var_32 = min(((max((0 > var_16), (!var_5)))), var_15);
    #pragma endscop
}
