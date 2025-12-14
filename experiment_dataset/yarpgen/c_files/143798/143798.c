/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = (arr_0 [i_0]);
                    arr_12 [i_2] [i_1] [i_2] |= -532205746812364037;
                    var_19 *= 17914538326897187579;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((((-728537761 || var_4) ? (max(var_9, var_12)) : (arr_0 [i_0 + 1])))) ? (arr_14 [i_1] [i_1] [i_1] [6]) : ((((((arr_6 [i_3] [i_4 - 4]) ? var_15 : -118))) ? ((9223372036854775807 - (arr_14 [i_0] [i_0] [i_0] [i_0 + 1]))) : ((((!(arr_5 [i_4]))))))))))));
                                arr_18 [i_0] [i_0] = 17626;
                                arr_19 [i_0] [i_4] = ((+(min((arr_6 [i_0] [i_0]), var_10))));
                            }
                        }
                    }
                    arr_20 [i_0] = ((~((3735640607 ? (((arr_14 [i_0] [i_1] [0] [i_2]) ? (arr_13 [8] [8] [23] [i_2] [i_2] [i_2 - 3]) : var_5)) : (!17914538326897187610)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_21 += ((-((max((min((arr_10 [i_5] [i_5] [i_6]), var_10)), var_2)))));
                arr_25 [i_5] [14] = var_0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((~((-(0 != 3366702537292611639))))))));
                            var_23 ^= 219;
                            arr_33 [i_8] [i_7] [i_7] [i_5] = ((max((max((arr_29 [i_5] [i_5] [i_7]), var_3)), (arr_6 [i_7] [i_8]))));
                        }
                    }
                }
                var_24 ^= (((((min(-4777, (arr_29 [i_5] [i_6] [i_6]))) + 2147483647)) << (559326694 - 559326694)));
            }
        }
    }
    var_25 = (((!var_11) || 855244494));
    var_26 &= ((!((((!var_15) ? 43724 : ((var_4 ? -27097 : var_5)))))));
    #pragma endscop
}
