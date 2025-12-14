/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (((!var_15) ? (((!(!79)))) : ((var_7 ? var_6 : var_14))));
        var_18 = -var_16;
        var_19 = ((((var_8 ? var_1 : var_12))) ? (((((var_0 ? var_2 : var_4))) ? var_3 : var_11)) : (var_0 % var_10));
        var_20 = var_16;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_21 = (~var_0);
        var_22 = (!var_11);
        var_23 = (min(var_23, -var_12));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_8 [10] &= ((-((var_15 ? var_11 : var_1))));
            var_24 = (~var_5);

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_25 *= (~var_14);
                    var_26 = ((var_15 ? (var_10 ^ var_8) : var_5));
                    var_27 = (max(var_27, (((var_6 % (~var_9))))));
                    var_28 ^= (!var_1);
                    arr_14 [i_4] [i_4] [i_1] [i_4] [i_1] |= (var_16 ? var_12 : var_9);
                }
                var_29 = ((var_10 ? var_9 : var_0));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_30 = var_11;
                    var_31 -= var_13;
                    var_32 = ((var_11 << ((((((var_10 ? var_6 : var_14)) + 1775587103)) - 27))));
                    var_33 = ((((var_1 ? var_6 : var_6)) == (!var_11)));
                }
                var_34 = (var_4 >= var_12);
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_35 = ((var_12 ? var_11 : var_1));
            arr_21 [i_1] [i_1] = ((!var_13) ? var_1 : var_0);
            var_36 = ((var_8 ? var_13 : var_5));
            var_37 = ((var_4 ? var_11 : var_7));
            arr_22 [i_1] = var_9;
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_38 = ((var_4 ? (((var_2 ? -var_0 : (~var_5)))) : ((var_0 ? var_12 : ((var_2 ? var_16 : var_16))))));
        var_39 = ((var_0 ? (((((var_3 ? var_6 : var_0))) ? (~var_13) : ((var_0 ? var_15 : var_16)))) : var_9));
        var_40 = (~var_9);
    }
    var_41 = ((var_10 ? var_11 : var_15));
    #pragma endscop
}
