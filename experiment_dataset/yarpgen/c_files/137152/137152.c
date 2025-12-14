/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_10 = (32904200 ^ 287179631);
        var_11 ^= ((((max((((-235072255 ? -3449770782323952009 : -421041307))), (max(var_1, var_9))))) ? ((((var_8 + var_4) + ((min(var_4, var_7)))))) : ((1974255490 ? 3739361234 : 9033886363047068442))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((var_5 && var_1) ? (75 > 32904200) : var_4)))));
        var_13 = (((var_6 || var_4) - var_2));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_16 [i_4] [i_3] [i_3] [i_4] = var_2;
                var_14 = (((var_1 >= var_5) <= ((var_5 ? var_8 : var_9))));
            }
            arr_17 [i_2] [i_2] = (var_7 ? ((var_8 ? var_5 : var_7)) : (var_6 + var_0));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_15 = ((var_2 ? var_7 : var_7));
            arr_21 [i_2] [i_5] [i_5] = (((var_9 / var_7) ? (var_7 + var_7) : ((var_9 ? var_4 : var_3))));
            var_16 = (((var_8 - var_8) & ((var_2 ? var_6 : var_6))));
            var_17 = (var_0 ? var_6 : var_6);
        }
        var_18 = (((var_4 || var_9) ? var_9 : var_1));
        var_19 = (((var_9 * var_4) ? var_2 : (var_8 * var_8)));
        var_20 = var_8;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = (((((((min(var_4, var_6))) ? (421041306 / -1974255499) : (var_5 * var_6)))) ? (max(((min(var_1, var_4))), (max(var_9, var_5)))) : (((var_6 * (max(var_2, var_8)))))));
        var_21 = (5772573191135778559 && -32904200);
    }
    var_22 ^= ((((var_9 >= (var_9 <= var_8)))) + (max(((min(var_8, var_8))), (var_1 + var_1))));
    #pragma endscop
}
