/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (min((((arr_1 [i_1 - 2]) * 3095213537)), (((((2902910984 ? var_9 : (arr_3 [16] [16])))) ? var_11 : var_12))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_20 *= 3716557325;
                    var_21 = -1338960918;
                    arr_10 [i_0] = (((~273158903) && ((min((arr_6 [i_0] [i_1] [i_1]), var_8)))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_22 *= (arr_4 [i_3] [i_1] [i_3]);
                    arr_15 [i_0] [i_3] [i_3] = (((arr_5 [i_3] [i_0]) >= ((min((arr_14 [i_3] [i_0] [i_0] [i_0 - 1]), (arr_2 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_23 = (min(var_23, 1576964937));
                                var_24 = max((min(142282097, 578409975)), ((578409955 * ((((!(arr_2 [i_3] [i_5]))))))));
                                var_25 = (min(var_25, (arr_14 [i_0 - 1] [i_1] [i_3] [i_5 - 4])));
                                var_26 = max(((min(3698597740, 2186256512))), ((-900698177 ? (min((arr_4 [i_0] [i_1] [i_1]), var_17)) : ((4027007412 ? 578409975 : 3095213534)))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_27 = (2357625425 << (3095213537 - 3095213517));
                        var_28 = (min(var_28, (arr_16 [i_0] [i_3] [i_3] [i_6] [i_0])));
                        var_29 = 2696337737;
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        var_30 *= (-((((min(1332793732, 3325487118))) ? (min(1357924240, (arr_23 [i_1] [i_1] [i_1] [i_7 + 2] [i_7] [i_1]))) : 596369556)));
                        var_31 = (~333049390);
                        var_32 = max(((3238616175 + (arr_21 [i_7 + 1] [i_7 + 2] [i_1] [i_1 - 2] [i_0 + 2] [i_0 + 2]))), (arr_23 [i_0 - 1] [i_1 - 2] [i_3] [i_7 - 3] [i_7] [i_7 + 2]));
                        var_33 |= max(3909889330, 2392838157);
                        var_34 = ((3449153670 ? 3698597740 : 3909889336));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_8] = (~3156967018);
                        var_35 = max(((3286749408 ? 3909889312 : 2405933252)), (min(2973782989, 3404861190)));
                        var_36 ^= ((min((arr_0 [i_0 - 1]), (arr_0 [i_3]))) + (((((arr_19 [i_8] [i_3] [i_3] [i_1] [i_1] [i_1] [i_0]) < (1615222355 <= 1372224610))))));
                        arr_28 [i_0] [i_1] [i_0] = arr_14 [i_0] [i_8] [i_0] [i_8];
                    }
                }
            }
        }
    }
    #pragma endscop
}
