/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -2060422028;

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 1853395591;
        arr_3 [i_0] = max(-30, 2557468771850036300);
        var_20 = (max(var_20, ((max(-127, ((((arr_1 [i_0]) ? var_17 : 110))))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (-6320254766552027086 ? (132062400 == 127) : 2557468771850036300);
        var_21 = (((arr_5 [i_1]) / (2110335729084252528 || 7673588778977198801)));
        arr_8 [i_1] = (min(9106, -127));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_22 -= (arr_9 [i_2]);
            var_23 ^= (((arr_9 [i_2 + 3]) > (arr_9 [i_2 - 1])));
            var_24 = -1;

            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                arr_19 [i_4] [i_3] [4] = ((var_13 - (arr_15 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                var_25 = (arr_13 [i_3 + 1] [i_3 + 1]);
            }
            arr_20 [i_2] [i_3 + 1] = (var_17 != 1012777099);
        }

        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            arr_23 [i_2] = ((14 ? 2901330527 : (arr_21 [i_5 - 1] [i_2 + 2] [9])));
            var_26 = -0;
            var_27 ^= (((-127 && var_3) ? -7814187833216412896 : (~0)));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_27 [i_2] [i_6] [i_6] = var_14;
            var_28 = (arr_12 [i_2]);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_29 = (arr_16 [i_2] [i_2 + 3]);
            var_30 = ((arr_28 [i_7]) ? (arr_12 [i_2]) : -7814187833216412896);
            var_31 = (min(var_31, ((((arr_26 [i_2] [i_2 + 1] [i_7]) | (arr_22 [i_2 - 2]))))));
            var_32 = (((~1) == (!6842008251981769530)));
        }
        arr_30 [i_2] [i_2 - 1] = -132062395;
        var_33 = (((arr_6 [i_2 + 1]) * (arr_28 [i_2 + 1])));
        arr_31 [6] = (!-879324212);
    }
    var_34 = ((9274505359944609698 ? -1 : (min(((max(var_14, var_14))), -2722967765970254060))));
    var_35 = (((var_10 == var_18) & (((max(41, 0))))));
    #pragma endscop
}
