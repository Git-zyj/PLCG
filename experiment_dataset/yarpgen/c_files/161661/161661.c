/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_5, var_15));
    var_21 = ((((-32761 ? 140703128616960 : var_12)) > (((min(var_13, var_14))))));
    var_22 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 = ((((min(-23025, var_18))) || (28615 >= 28615)));
        var_24 = 7255780236707620684;
        arr_2 [i_0] = ((((((min(var_14, var_17)) * (max(234, 13523341141183594117))))) ? 9 : (max(1, (-9223372036854775807 - 1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_25 = (9223372036854775807 / (((var_3 ? var_4 : var_5))));
                    var_26 = ((((min((((-32767 - 1) ? -3 : 0)), (var_17 != -3)))) ? ((755009079645349972 ? var_5 : 755009079645349972)) : (((19966 << (3393896440 - 3393896433))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2 - 1] [i_0] [i_4] = -19967;
                                var_27 = (max(var_13, ((var_4 ? var_15 : 7))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_28 ^= var_15;

                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_29 = (var_4 & var_16);
                            var_30 = ((var_18 ? 1 : 12));
                            var_31 ^= (var_19 == var_6);
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_32 = ((-16176 ? (((var_12 ? 4329455434419346395 : 133))) : var_6));
                            var_33 = ((23 ? 118 : -13));
                            arr_21 [0] [i_0] [i_0] [i_2] [i_5] [i_7] [i_7] = 2662796667;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_34 = (var_16 * 1);
                            arr_26 [i_0] [i_8] [i_2 + 1] [i_0] [i_8] = (var_2 & 1);
                            var_35 ^= ((0 >= var_7) + 9261166754358871637);
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((((var_6 ? var_16 : -114)) << (var_2 - 14923)));
                    }
                }
            }
        }
        arr_28 [i_0] = (max(((var_11 ? 737014681 : (33 && var_8))), var_18));
    }
    var_36 ^= ((((min(((162 ? 2711934876 : 874637639416268544)), ((max(var_11, 1583032417)))))) ? var_9 : ((((((min(1, var_18)))) == var_15)))));
    #pragma endscop
}
