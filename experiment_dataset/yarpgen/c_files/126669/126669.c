/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_3, ((((max(1, var_8))) % -2))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(-9, (((arr_1 [i_0 + 1]) / ((var_4 ? (arr_1 [i_0]) : var_10))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 &= (max((((0 ? 15 : (((!(arr_5 [i_0] [i_0]))))))), (((var_2 * 24) / (-4131777523847140615 - var_10)))));
                    arr_9 [i_1] [i_1] [i_1] = -var_2;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_15 ^= (~1975830178);
                        arr_15 [i_0 - 1] [i_4] [i_0] &= (((arr_10 [i_0 - 1] [i_0 - 1]) ? (arr_10 [i_0 + 1] [i_1]) : (arr_10 [i_0 + 1] [i_1])));
                    }
                    var_16 *= (((var_2 ^ -46) - var_9));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_17 = ((!(~4)));
                        arr_19 [22] [i_1] [i_3] = ((var_10 ? (arr_7 [i_0 + 1] [i_3 + 2] [i_5] [i_5]) : var_2));
                        var_18 *= ((59 & (arr_18 [i_0 + 1])));
                        var_19 = (min(var_19, (arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_0 - 1])));
                        var_20 = (~var_3);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_0] [20] [i_3] [i_6] |= ((((arr_0 [i_1]) < var_0)));
                        var_21 = ((577077622 > (arr_21 [i_3 - 1] [i_1] [i_0 - 2] [i_6])));
                    }
                }
                arr_23 [i_0] [1] [1] = (max((arr_5 [i_0] [i_1]), ((((((arr_6 [i_0]) ? 1 : var_7))) ? (arr_21 [i_0] [i_0] [i_0] [i_0]) : ((var_10 ? -11594 : (arr_1 [i_0 - 1])))))));

                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((max(((4 ? var_2 : ((min(0, -6199))))), ((var_8 << (arr_17 [i_8] [i_8]))))))));
                                var_23 = (max(var_23, -1675));
                                arr_30 [i_0 + 1] [i_0] [i_7] = (~161);
                                var_24 = var_0;
                                var_25 = (max((((((arr_5 [i_1] [i_1]) ? var_9 : 1674)))), var_7));
                            }
                        }
                    }
                    var_26 = ((-((min((!var_6), var_6)))));
                }
            }
        }
    }
    #pragma endscop
}
