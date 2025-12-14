/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? var_12 : (~var_9)));
    var_21 = var_6;
    var_22 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (var_15 ? 21 : var_0);
        var_23 = ((var_11 ? var_14 : -67));
        var_24 = var_1;
        var_25 *= var_8;
        arr_5 [i_0] = var_4;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_10 [11] = -0;
        arr_11 [1] [i_1 + 3] = var_13;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_16 [i_3] [i_2] = var_7;
            var_26 = (max(var_26, (((var_2 ? var_9 : var_2)))));
            var_27 = ((1 ? (~var_19) : var_4));
            arr_17 [i_3] [i_3] = 1;
            var_28 *= ((var_7 ? ((8228611812807381049 ? var_3 : var_13)) : var_8));
        }
        arr_18 [i_2] [i_2] = -2147483647;

        for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_23 [i_4] [i_4] = var_10;
            var_29 ^= ((var_8 ? var_17 : var_10));
            var_30 ^= (!var_15);
        }
        for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                var_31 |= ((((var_4 ? var_15 : var_0)) * (!var_19)));
                var_32 &= ((((239 ? 8228611812807381049 : var_7)) >> (var_1 - 3250247660)));
            }
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                var_33 = ((17141283905001188146 ? 31744 : 0));
                var_34 = (min(var_34, ((((-2147483647 - 1) ? var_14 : var_13)))));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {
                arr_35 [i_8] [i_8] = ((var_3 ? var_5 : var_6));
                var_35 = (var_12 ? var_2 : var_10);
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
            {
                var_36 = (1 % 21);
                var_37 = (((var_1 ? var_4 : var_6)));
                var_38 = (((((var_18 ? var_19 : 0))) ? var_14 : var_1));
            }
            arr_38 [i_2] [i_2] [i_2] = (var_4 ? var_17 : (~var_11));
        }
        for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
        {
            arr_41 [1] [1] = var_5;
            var_39 = var_17;
        }
        arr_42 [i_2] |= var_10;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_45 [i_11] [i_11] = var_13;
        arr_46 [18] [i_11] = ((var_7 ? var_7 : var_16));
        arr_47 [i_11] = (-8228611812807381049 ? 1 : 125);
    }
    var_40 = ((~((~(~1)))));
    #pragma endscop
}
