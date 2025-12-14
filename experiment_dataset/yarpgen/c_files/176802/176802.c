/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_0) << ((min((62914560 >= 62914578), var_1)))));
    var_13 = ((((((!(((1 ? 8024321011261530460 : 19))))))) > (~var_0)));
    var_14 |= (1 | 64512);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = (!0);
                            var_16 = (min(var_16, ((((var_0 + 9223372036854775807) >> (var_2 + 1631188412))))));
                            var_17 = ((-7 & (min(127, -375952421265449793))));
                            var_18 = (((arr_0 [i_0] [i_3]) >> ((((((((1 ? -239239327213950882 : 1)) + 9223372036854775807)) >> (var_4 - 62709))) - 1021361))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = (((((var_0 & (((max(255, var_5))))))) ? var_10 : (((-(((!(arr_5 [i_0] [i_0] [8])))))))));

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_19 = ((-(-375952421265449794 - 62914577)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 = ((var_2 | ((~(min(-7075837620201384406, 16602211678241602413))))));
                                var_21 = 199;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_4] [i_0] [i_8] = (((((((((var_9 ? -17 : 242))) < (min(10450682249659347080, 64)))))) >= (-117 * 2594889034903295604)));
                                var_22 = var_9;
                                var_23 = (!var_10);
                            }
                        }
                    }
                    arr_24 [i_0] = (~var_1);
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_24 = (arr_0 [i_11] [i_1]);
                                arr_36 [i_0] [i_1] [i_1] [i_0] = (173 - -117);
                                var_25 = (max(4386748791238061384, 10996));
                                var_26 = (~1860060569);
                                var_27 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_28 = -var_1;
                            var_29 = (((10996 <= 47) ? (!24) : (var_0 / var_9)));
                        }
                    }
                }
                arr_48 [i_12] [i_12] = (arr_42 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1]);
            }
        }
    }
    #pragma endscop
}
