/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? ((~(max(60397235298777505, var_10)))) : 1620014298));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min(1620014274, (max((arr_5 [i_0] [i_1]), var_15))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_18 = (((~var_13) ? (((((arr_13 [i_0] [i_1] [i_3] [i_4]) && (arr_13 [i_0] [i_1] [i_0] [i_0]))))) : (min((arr_4 [i_0]), (arr_13 [i_4] [i_1] [i_1] [3])))));
                                var_19 = (max(var_19, (((!(arr_7 [i_0] [i_0] [i_2] [i_4]))))));
                                var_20 = (min((min(-60397235298777499, ((-(arr_5 [9] [i_2]))))), (((((4663356282033787694 ? (arr_14 [i_0] [i_0]) : var_2))) ? 58615 : (max(var_10, (arr_5 [i_1] [i_4])))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [10] [i_1] &= ((~((((max(60397235298777505, -60397235298777505)) > (!var_9))))));
                                var_21 = (max(var_21, (((-(~var_6))))));
                            }
                            var_22 = ((38660 ? 1620014298 : 135));
                            var_23 = (-1620014299 > 224);
                        }
                    }
                }
                var_24 = ((((max(-522, 1))) >= (arr_10 [7] [11] [i_0] [i_1])));
                var_25 = (((min(115, 23197))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_26 -= (((163 * var_6) > 26876));
                                var_27 = arr_21 [i_1] [i_5 - 2] [i_5 + 1] [i_1];
                                var_28 = (var_0 != 13575063459869983921);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 13;i_8 += 1)
                            {
                                var_29 = (min(var_29, ((((!var_0) - ((725790106430258348 << (157 - 156))))))));
                                var_30 = ((arr_24 [i_0] [7] [i_1] [i_1] [i_5 + 1] [i_1] [i_8]) ? 93 : -522);
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = -1620014287;
                            }
                            for (int i_9 = 0; i_9 < 13;i_9 += 1)
                            {
                                var_31 = max((~-60397235298777507), (max((arr_29 [i_1] [i_1] [i_5 - 2] [i_1] [i_5 - 1] [i_5 + 1] [i_5 - 1]), var_14)));
                                var_32 ^= (arr_14 [12] [i_1]);
                            }
                            arr_31 [i_6] [3] [i_6] [i_1] = ((!((var_13 && (arr_12 [i_5 - 2] [i_5] [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2])))));
                        }
                    }
                }
            }
        }
    }
    var_33 = (!2066);
    #pragma endscop
}
