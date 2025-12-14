/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((((var_3 ? var_7 : var_12)) + (~var_17))))));
        var_21 = (var_3 != var_10);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= (var_9 >= var_8);
        var_22 = (((~var_7) | 127));
        var_23 = (max(var_23, (((~(179 / 129))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_3] [i_2] = var_10;
            var_24 *= -96;
            arr_13 [i_3] [i_2] [i_2] = var_11;
            arr_14 [i_2] = (((((var_18 ? var_16 : var_4))) ? var_12 : ((var_4 ? var_14 : var_8))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_18 [i_2] = var_0;
            var_25 = (min(var_25, (((((var_4 ? var_8 : var_5)) - 141)))));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_26 = (((var_7 ? 60 : 96)));
            arr_21 [i_5] [i_5] = ((var_10 ? var_19 : (var_14 <= var_11)));
            var_27 *= (var_13 & var_10);
        }
        arr_22 [i_2] = ((((var_18 ? var_3 : var_7)) & (~var_12)));
        var_28 = (max(var_28, -var_16));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                {
                    var_29 = ((((var_5 | (~var_4))) + var_14));

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_36 [20] [10] [20] [i_9] = var_2;
                        var_30 = (((((var_5 - var_11) ? var_11 : var_12)) < (((((var_5 ? var_4 : var_12))) ? var_4 : (!var_13)))));
                    }
                    arr_37 [6] [i_7] [i_8 + 1] &= ((-var_4 ? var_17 : (~var_1)));
                    var_31 = (max(var_31, ((((((var_16 * var_16) > (~var_17))) ? -var_5 : ((var_12 ? 63 : var_1)))))));
                }
            }
        }
        var_32 = -204;
    }
    var_33 = (((((((var_18 ? var_4 : var_17)) & var_13))) ? (!8) : (var_5 && -var_11)));
    #pragma endscop
}
