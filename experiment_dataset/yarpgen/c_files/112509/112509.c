/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 *= (((arr_2 [i_0] [i_1]) >> (((var_18 | var_4) + 1776232472))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (min(8916759785445289680, (((!((min(4015431179504597329, var_7))))))));
                                var_21 = var_12;
                                var_22 = (max(var_22, ((min(((((arr_6 [i_2] [2] [i_4] [i_2 + 4]) + (arr_6 [8] [i_1] [i_4] [i_2 - 1])))), (((arr_9 [i_3]) & ((var_17 ? var_3 : var_17)))))))));
                                arr_10 [i_0] [1] [i_2] [i_3] [i_0] = (((-8916759785445289674 + 3877458749) + ((((arr_8 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 4] [i_2] [i_2]) - (arr_1 [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (min(((var_8 ? -75 : (min(13912309077350889153, 11798)))), var_15));
        var_24 *= (min((arr_1 [8]), (((((((arr_2 [1] [i_0]) / (arr_4 [i_0] [i_0] [i_0])))) && ((min(13912309077350889153, 2176117105592207456))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                {
                    arr_17 [i_0] [i_0] [i_6 - 2] = ((~(min((arr_9 [i_6 - 4]), var_3))));
                    arr_18 [i_0] [i_0] [i_0] [1] = ((!((min(-205, var_1)))));
                    var_25 = (min(134217727, (((var_5 > ((min(var_7, var_8))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_23 [i_0] = (((~var_13) / ((4534434996358662463 ? var_16 : 11798))));
                    arr_24 [i_0] [i_7] [i_8] [i_0] = (min((((!((!(arr_11 [4] [6])))))), ((((((arr_1 [i_0]) ? var_6 : (arr_4 [i_0] [i_7 + 2] [i_8])))) ? (~74) : (min(-11782, 134217724))))));
                    arr_25 [i_0] = ((-134217752 ? 1 : 0));
                }
            }
        }
    }
    var_26 = (min(var_16, ((41178 ? 134217732 : 134217739))));
    var_27 = (min(4534434996358662462, -134217752));
    #pragma endscop
}
