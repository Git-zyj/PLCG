/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((var_2 ? 13 : (var_1 && 23186)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 = ((!var_7) <= var_7);

            for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_21 = ((var_10 ? ((18103572089369881926 >> (23174 - 23142))) : (((var_4 ? var_5 : var_12)))));
                arr_6 [i_2] [i_1] [i_1] [i_1] = ((-30549 ? ((var_16 ? 18103572089369881926 : var_9)) : ((var_8 ? var_1 : var_3))));

                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_0] [1] [i_2] [1] [i_2] = ((var_14 >> (var_8 != var_15)));
                    var_22 += (var_16 <= var_1);
                }
                var_23 = (min(var_23, var_10));
                arr_12 [i_0] [i_0] [i_2] = (~var_17);
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                var_24 ^= ((-((var_12 ? var_16 : -63))));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (((((18446744073709551592 ? -13 : var_10))) ? (~896) : (128 & 23214)));
                    var_25 &= ((var_7 ? 182 : ((var_16 ? var_1 : (-9223372036854775807 - 1)))));
                    var_26 = var_10;
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_21 [3] [3] [3] = 0;
                    arr_22 [i_6] [8] [i_1] [1] [i_0] = var_14;
                }
                var_27 = ((var_11 ? -30549 : ((var_3 ? var_11 : var_7))));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_28 = (max(var_28, var_8));
                arr_26 [i_0] [1] [20] [0] = (!(!var_15));
            }
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                arr_30 [i_8] [i_8] [1] [i_8] = (((65535 + 60) >= var_5));
                var_29 |= var_1;
            }
            arr_31 [i_0] = -6965283874799852114;

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_30 = 1;
                arr_34 [i_1] [i_9] = ((80 ? 14262 : var_16));

                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    var_31 = (var_12 / 3558268198);
                    var_32 = (~var_17);
                    arr_38 [6] [i_1] [i_9] [6] [10] = (var_4 || var_4);
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_33 |= 112;
                    arr_42 [i_11] [i_11] |= var_3;
                }
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    arr_46 [3] [i_9] = (1 && 26159);

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_34 = (max(var_34, (!var_7)));
                        var_35 &= (!var_14);
                    }
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_53 [1] [17] [i_1] [i_9] [i_9] = (!var_4);
                    var_36 = var_14;
                    var_37 = ((-8663111752406270710 + 9223372036854775807) >> ((((var_9 ? 199540303 : 1)) - 199540292)));
                }
                var_38 = (max(var_38, -var_8));
            }
        }
        for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
        {
            arr_57 [i_0] = ((63 ? 5154 : var_5));
            arr_58 [i_0] = ((var_4 ? var_2 : (var_12 || var_2)));
            arr_59 [14] [4] = var_8;
        }
        arr_60 [i_0] [18] = ((9223372036854775807 ? var_13 : var_16));
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                {
                    var_39 = (max(var_39, (((-var_6 ? var_7 : ((((var_2 ? 1 : var_4)) * var_5)))))));
                    var_40 = (max(var_40, (-2464484008498363286 || 59)));
                    var_41 += (((((((max(63, 23186))) ? ((var_17 ? -125 : var_17)) : (!var_14)))) ? (!var_11) : (var_15 && var_1)));
                    arr_69 [4] [10] [i_16] [4] &= 4294967295;
                }
            }
        }
    }
    var_42 = ((var_15 ? var_15 : (var_16 || var_10)));
    var_43 = (~var_15);
    #pragma endscop
}
