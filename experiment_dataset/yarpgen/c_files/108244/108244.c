/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min(((min((((var_9 + 2147483647) >> 15)), (min(var_4, var_5))))), var_11));
    var_16 = (min(var_13, ((min(-9105043536062851268, 2999395455)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (min((min((max(var_12, (arr_2 [i_0] [i_0]))), var_2)), (((((-3249384886549941911 ? 876214335 : -3)) & ((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))))))));
        var_18 -= (max(302432221605997674, ((min((230 || 220), var_4)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = ((var_14 ? (arr_2 [i_1] [i_1]) : ((var_6 ? (arr_1 [i_1]) : (arr_2 [i_1] [i_2])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_20 = -6924525630662768590;
                            var_21 = ((1 ? 55688 : 16777215));
                            var_22 = (!12);
                        }
                    }
                }
            }
            var_23 = (-8643816270693646222 >= var_12);
            var_24 |= (arr_6 [i_1] [i_1]);
            var_25 &= -1;
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_26 = ((-(arr_5 [i_6 - 1] [16])));
            var_27 += ((((var_2 ? 18488 : var_11)) * ((0 ? 2538858728516392342 : 36996))));
        }
        var_28 = (arr_6 [i_1] [i_1]);
        var_29 = var_1;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_30 = (min(var_30, var_0));
                    var_31 = var_11;
                    var_32 = (((2999395443 < -18472) % 2));
                    var_33 = 135;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_34 &= (((((((arr_24 [18] [i_9]) * var_7)) << ((((var_13 ? var_12 : (arr_4 [i_9]))) - 844529213933466029)))) * (min((min(767479717063126686, (arr_13 [i_9] [i_9] [i_9] [i_9]))), (~var_1)))));
        var_35 = ((+(max((~var_2), (max((arr_0 [i_9] [i_9]), var_2))))));
    }
    var_36 = (((var_13 ? (!var_14) : (var_3 && var_2))));
    var_37 = (min(var_37, ((min((min(16917378244686350734, 50625)), 255)))));
    #pragma endscop
}
