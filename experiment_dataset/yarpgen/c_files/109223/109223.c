/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((!((max(var_2, ((var_14 ? var_8 : var_8)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 ^= (var_4 | 149);
        var_17 = (min(var_17, (~15552177255059831447)));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_18 = (((arr_1 [i_0]) ? var_3 : (arr_5 [i_0])));
            arr_8 [i_0] [i_0] = (((var_4 + 9223372036854775807) << (var_9 - 2423831909)));
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_19 = ((~((833251904 ? 2001207412 : 2516810920180477539))));
            var_20 = (min(var_20, (!-691121193)));
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_21 ^= ((~(~var_1)));
            var_22 -= var_2;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_23 = (min(var_23, var_12));
            var_24 = (max(var_24, (-113 && 2170128397)));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_24 [i_0] [i_5] [i_6] = var_2;
                    arr_25 [10] [10] [i_5] |= (((~-1721223763) ? -9223372036854775791 : ((var_7 ? (arr_19 [i_5]) : var_3))));
                    arr_26 [i_5] |= ((14 != (arr_6 [i_0] [i_5] [i_5])));
                    arr_27 [i_0] [i_0] = ((10 - (arr_22 [i_0] [i_0])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_25 ^= var_9;
        var_26 = (min(var_26, (var_1 * var_0)));
        var_27 += (~7);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_28 -= ((328517366 ? (~var_12) : 177723051));
        arr_34 [i_8] [8] = (arr_17 [i_8] [6] [i_8]);
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        arr_38 [i_9 - 1] [i_9 + 2] = ((((((var_9 + var_9) ? ((18394874273385893455 ? var_8 : (arr_20 [14]))) : (arr_6 [i_9] [i_9] [12])))) ? ((~(!0))) : (arr_36 [i_9])));

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_47 [i_9] [i_9] [7] [i_9] = var_9;
                var_29 = (!40471);
            }
            var_30 = (min(var_30, (((min(var_0, (arr_16 [i_9 + 2] [i_9 + 1] [i_9 + 1])))))));
            arr_48 [6] = var_7;
        }
        arr_49 [i_9] = ((min((arr_16 [i_9 + 1] [i_9 - 1] [i_9 - 1]), var_4)));
    }
    var_31 = ((var_9 ? (~9169533892229124949) : var_10));
    #pragma endscop
}
