/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 += ((((0 ? 1 : 0)) & (~-5518389644588808890)));
                arr_6 [i_0] = 9223372036854775792;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [11] [i_0] [2] = (min(((max(9223372036854775787, 1))), ((~(!var_4)))));

                            for (int i_4 = 2; i_4 < 14;i_4 += 1)
                            {
                                arr_17 [i_0] [i_0] = (((((2095024563 == var_6) ? (arr_16 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 + 3] [1]) : 13097)) & (arr_15 [i_0] [i_0] [i_2] [i_0])));
                                var_17 = (max((~1720693564), (((((max(var_2, 1))) >= 3676)))));
                            }
                            for (int i_5 = 4; i_5 < 16;i_5 += 1)
                            {
                                var_18 = ((9223372036854775792 ? (((arr_15 [13] [13] [1] [i_5 - 3]) ? 53523 : 0)) : ((((arr_15 [i_5] [i_5] [i_5] [i_5 - 3]) && (arr_15 [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 1]))))));
                                var_19 = ((((((!(min(0, 1)))))) - (~var_14)));
                                var_20 += var_15;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((max((min(205, -9223372036854775801)), 11804357954695832101)) >= (((9223372036854775766 * 1) / 5943))));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] = (min((min(((min((-2147483647 - 1), 1))), 65512)), ((min((!87), 1)))));
                arr_23 [i_0] [i_0] [i_0] = 1;
            }
        }
    }
    var_21 = (var_4 || (((-((var_15 ? 0 : 188))))));
    #pragma endscop
}
