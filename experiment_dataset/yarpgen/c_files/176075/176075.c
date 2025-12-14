/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        var_20 = (((arr_6 [i_1 + 1] [i_0] [i_0] [i_0]) ? -1 : 14810571470849734032));
                        arr_11 [i_3] [i_0] [i_0] [i_0] = 1040187392;
                        var_21 = 120;
                    }
                }
            }
        }
        var_22 = (min(var_22, (((~(~7))))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    var_23 -= (arr_15 [i_6 - 1] [i_6] [i_0 + 4]);
                    var_24 *= (arr_10 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5] [i_6 - 1]);
                    arr_21 [i_0] [i_5] [i_4] [i_0] = (var_7 % 18);
                    var_25 = (min(var_25, (((1 ? (-32767 - 1) : (-9223372036854775807 - 1))))));
                }
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    var_26 = (var_12 & var_0);
                    var_27 = (~-18);
                }
                var_28 = (min(var_28, 0));
            }
            for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
            {
                arr_27 [i_0] [i_0] [i_0] [i_8] = ((!(13800 - 36816)));
                arr_28 [i_0] [i_0] [i_0] [i_8 - 3] = (var_13 == 17);
            }
            for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 4; i_10 < 7;i_10 += 1)
                {
                    var_29 = ((var_15 ^ (~var_11)));
                    var_30 &= ((-32753 ? var_15 : var_4));
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {

                    for (int i_12 = 3; i_12 < 9;i_12 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4] [i_4] = (!9223372036854775807);
                        var_31 += -7;
                        arr_40 [i_0] [i_0] [i_9] [i_11] [i_12] = var_4;
                    }
                    var_32 = (min(var_32, var_7));
                }
                for (int i_13 = 4; i_13 < 7;i_13 += 1)
                {

                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        arr_45 [i_13] [i_0] [i_13] [i_9] [i_9] [i_0] [i_0] = -37;
                        arr_46 [i_0] [i_0] = 86;
                        arr_47 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] [i_14 - 2] = ((-((78 ? -719394902510000892 : -87))));
                    }
                    for (int i_15 = 2; i_15 < 9;i_15 += 1)
                    {
                        var_33 *= (((((0 ? 0 : -9052650300060166939))) ? var_3 : -7286547005101277711));
                        arr_50 [i_0] [i_4] [i_0] [i_13] [i_15] = (arr_36 [i_15 - 2] [i_0] [i_0] [i_0] [i_0]);
                        arr_51 [i_0 - 2] [i_4] [i_9] [i_13] [i_0] = -var_17;
                    }
                    var_34 = 32767;
                    arr_52 [i_0 + 1] [i_13] [i_13] [i_13] [i_4] [i_13] |= (-8795958804480 ? (((3 ? 127 : 9))) : (arr_5 [i_13] [i_9 - 1] [i_13 - 1]));
                    var_35 = ((var_15 ? (arr_0 [i_0]) : var_10));
                    var_36 = (min(var_36, 0));
                }
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    arr_57 [i_0] = -13801;
                    var_37 = var_17;
                }
                var_38 = 15;

                for (int i_17 = 3; i_17 < 9;i_17 += 1)
                {
                    var_39 = (min(var_39, 1));
                    arr_60 [i_0] [i_0] [i_9 + 1] [i_17 - 3] = 960;
                    var_40 = ((22105 >= (var_6 * 31)));
                }

                for (int i_18 = 4; i_18 < 9;i_18 += 1)
                {
                    var_41 = ((((~(arr_12 [i_18])))) / ((-32 ? var_6 : var_16)));
                    var_42 -= -var_3;
                }
            }
            var_43 = (min(var_43, var_5));
        }
        var_44 = (min(var_44, (((1 ? (arr_20 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1]) : 1)))));
    }
    for (int i_19 = 2; i_19 < 11;i_19 += 1) /* same iter space */
    {
        var_45 += ((((-32 && (arr_66 [i_19 - 1] [i_19 + 1]))) ? 1 : ((((var_13 / var_0) || var_14)))));
        arr_67 [i_19] [i_19] = (min((~1032192), (max(-4294967167, 17526435335344313439))));
    }
    for (int i_20 = 2; i_20 < 11;i_20 += 1) /* same iter space */
    {
        arr_70 [i_20] = (max(-2367192978803955476, ((max(1, 4)))));
        var_46 |= 9007199254740991;
    }
    var_47 = ((17526435335344313465 ? var_11 : (max((2367192978803955475 + 41173), 0))));
    #pragma endscop
}
