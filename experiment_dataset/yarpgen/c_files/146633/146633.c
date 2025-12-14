/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = (max((arr_1 [i_0] [i_1 + 1]), var_7));
                            arr_11 [i_1 + 1] [i_2] [i_2] [i_3 - 2] [i_0] = (((((~((14602610169721586883 ? var_1 : var_5))))) ? (arr_7 [i_1 + 2]) : (arr_1 [i_3 + 2] [i_1 - 1])));
                            var_10 = ((1 ? 3844133903987964723 : (((((((max(-2101, 10861)))) >= 2396774598043113275))))));
                            arr_12 [i_0] [i_0] [i_0] [6] |= (arr_3 [i_0] [13]);
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = (max((arr_3 [i_0] [i_1 + 2]), ((((max((arr_9 [i_1 + 1] [i_0] [i_1 + 1] [i_0] [i_0]), (arr_7 [i_1])))) ? (min(var_6, var_7)) : var_8))));
                arr_14 [13] = (((arr_1 [i_1 + 2] [i_1 + 2]) ? (!var_4) : (max((arr_1 [i_1 - 1] [i_1 + 2]), (arr_1 [i_1 + 1] [i_1 - 1])))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_11 *= (((((arr_6 [i_1 + 3] [i_1 + 1]) < (arr_6 [i_1 - 1] [i_1 - 1]))) ? (!var_4) : ((8192 ? var_4 : (arr_0 [i_1 - 1] [i_1 + 3])))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_12 = var_2;
                        var_13 = (max(var_13, var_5));
                        var_14 = 16468302762391914212;
                        var_15 = 1;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (((!(var_5 || 0))))));
                        var_17 |= (((((((var_7 ? var_5 : -16361))) ^ 14364929616182552097)) % (arr_2 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_18 &= var_7;
                        arr_28 [i_0] [i_1] [i_4] [i_7] = (min((max((arr_23 [i_1 + 3]), (arr_4 [i_1 + 3] [i_1 + 2]))), (!var_3)));
                        arr_29 [1] [3] [1] [i_4] [13] [i_0] = (((((var_7 ? (arr_3 [i_0] [i_1 + 1]) : var_7)) > (((!(arr_2 [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((max((((!((!(arr_17 [i_9] [i_9] [14] [i_9])))))), 924436111)))));
                                arr_35 [i_1] [i_1] [i_1 + 1] = ((((((~2075) ? ((((!(arr_17 [i_0] [12] [i_0] [i_0]))))) : var_6))) || (arr_2 [i_8])));
                                var_20 = (max((arr_30 [i_8 - 1]), var_4));
                                var_21 = (arr_8 [i_4] [i_1 - 1] [i_4] [i_8 + 1]);
                            }
                        }
                    }
                }
                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_8));
                                arr_43 [12] [i_0] [i_10 - 3] [i_11] |= (arr_19 [1]);
                            }
                        }
                    }
                    arr_44 [i_10] = (!var_4);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_23 -= (240500402 || 94);
                                var_24 = ((~(((arr_3 [i_0] [i_0]) ? (4081814457526999547 | 15255408828663871681) : (arr_34 [14] [i_1] [i_10 + 1] [i_13] [i_14] [i_14])))));
                            }
                        }
                    }
                    var_25 = (max(var_25, ((max(63952, 2624064398)))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_26 = (max((((!(arr_47 [i_0] [i_10 - 1])))), (arr_56 [i_0] [i_10 - 2] [i_10] [2] [9])));
                                var_27 = max(((((((14364929616182552090 ? (arr_8 [i_10] [i_0] [i_1] [i_15]) : var_9))) && 1))), (~var_1));
                            }
                        }
                    }
                }
                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    arr_59 [i_0] [i_1] [11] = ((var_4 < ((6917529027641081856 << (-2085 + 2124)))));
                    var_28 = ((-3002966325854564645 ? (max((((5185256037519418926 ? 2122 : 19046))), 4237773472)) : (((min(var_8, (!3916521997579933217)))))));
                }
                for (int i_18 = 3; i_18 < 13;i_18 += 1)
                {
                    var_29 &= ((max(-3431779306364727919, 23768)));
                    arr_62 [8] [i_1] [i_18] [7] = (max(var_9, -2124));
                }
                arr_63 [5] [10] = (min(((((max(var_1, (arr_24 [i_1 - 1] [i_1 + 1]))) - var_8))), ((((max(var_6, -37))) ? (arr_15 [i_1 + 3]) : var_4))));
            }
        }
    }
    var_30 = var_1;
    var_31 -= var_7;
    #pragma endscop
}
