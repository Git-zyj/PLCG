/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = var_16;

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_19 = (((((1 ? 7098 : -14638))) <= ((var_0 ? var_10 : var_13))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_9 [6] [i_1] [i_1] [6] = (!var_16);
                arr_10 [9] [i_0] [i_1] [i_2] = var_6;
                var_20 = (var_8 == var_1);
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_13 [1] = var_5;
                var_21 += var_17;
                var_22 = 255;
                arr_14 [i_0] [0] [0] = ((var_7 ? var_14 : var_8));
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_23 = (1 & 17251332433062500909);
                var_24 ^= (var_8 >= var_8);
                arr_18 [i_0] [i_1] [i_4] = -var_5;
            }

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_25 += ((var_12 ? -var_8 : 1));
                arr_23 [i_1] |= var_17;
                var_26 = (~var_6);
                var_27 = ((var_8 == var_9) ? var_0 : var_6);
            }
            var_28 &= var_16;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_28 [i_0] = (var_6 && var_14);
            var_29 = (var_2 && var_3);
            var_30 = (1195411640647050707 == 17251332433062500909);
        }
        var_31 = var_9;
        var_32 = (var_15 && var_12);
    }
    var_33 = ((((((2304330506 ? 17251332433062500909 : 0)))) + (max(var_4, ((var_0 ? var_7 : var_3))))));
    var_34 = ((((max(319984483, -992775933))) ? (min(-var_8, var_3)) : (((var_14 && ((((var_3 + 2147483647) >> (var_10 - 109)))))))));
    var_35 += ((~(((max(0, 65535))))));
    #pragma endscop
}
