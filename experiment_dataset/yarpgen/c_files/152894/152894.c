/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 *= ((173 && (!5814139150979715606)));
                var_14 = (min(var_14, ((((~var_2) + ((((!(arr_1 [i_0 + 1]))) ? var_0 : (!var_3))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = (max(var_15, var_11));
                    var_16 = arr_4 [i_2];
                    var_17 += max((((-(((arr_3 [i_0 + 1] [i_1 + 1] [i_2]) ? 255 : (arr_5 [i_0 - 1] [i_1 - 2] [i_2])))))), var_4);
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    var_18 -= arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1];
                    var_19 = (max(var_19, (((arr_0 [i_0 + 2]) ^ (arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 1])))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_20 -= ((!((!(arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1])))));
                    var_21 = (min(var_21, -1036707806948504995));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_24 [i_0 + 2] [i_7] [i_5] [i_6] [i_7 - 1] = var_9;
                                var_22 = (min(var_22, (arr_0 [i_0 + 1])));
                                arr_25 [i_0 + 1] [i_1 + 1] [i_7] [i_6] [i_7 - 3] = ((!var_6) ? (arr_19 [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_5] [i_6] [i_7 - 2]) : (((-5111602743764913952 + 9223372036854775807) << (((arr_10 [i_0 + 1] [i_7 - 2] [i_7 - 1] [i_7 - 2]) - 63)))));
                            }
                        }
                    }
                    arr_26 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_5] &= (max((arr_5 [i_1 - 1] [i_1 - 1] [i_0 + 1]), (!0)));
                    arr_27 [i_0 - 1] [i_1 - 1] [i_5] = 55;
                    var_23 = (~9223372036854775805);
                }
                var_24 *= 288230376151711742;
            }
        }
    }
    var_25 = max((max(var_2, var_11)), (8589934591 - -5111602743764913952));
    #pragma endscop
}
