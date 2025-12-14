/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((var_14 ? var_10 : 99)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = var_16;

        for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_3] [i_0] [i_0] [i_0] [i_1] = ((~(!var_7)));
                        var_19 = var_4;
                        var_20 = ((-(max(var_9, (min(var_8, -71))))));
                    }
                }
            }
            var_21 -= (~var_10);
            var_22 = (min(((var_10 ? 4294967267 : 53)), ((var_6 ? (max(var_11, var_8)) : (~var_8)))));

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_23 = ((var_1 * ((min(var_5, var_1)))));
                arr_15 [i_0] [i_1] = ((((4294967295 ? var_16 : (var_15 ^ var_10))) + (max(var_0, var_9))));
                var_24 = (max(var_24, ((max(((var_14 ? 2706336951 : var_4)), (((max(var_10, var_10)))))))));
                var_25 = (max(var_7, (~1588630345)));
                var_26 = (var_14 ? ((var_8 ? var_10 : var_9)) : (!-2336396077762602963));
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                var_27 += ((min(var_14, var_16)));
                var_28 = (((((max(var_3, var_14))) ? (255 == 60) : 3304711209)) + (min(2520255835, -56)));
                var_29 = var_14;
                arr_18 [i_1] [i_1] [i_1] = var_8;
            }
            arr_19 [i_0] [i_1] [i_1] = ((~(min(var_9, var_5))));
        }
        for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                arr_25 [i_0] [i_6] [i_6] [i_7] = (!32767);
                var_30 *= var_7;

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    arr_28 [i_0] [i_6] = (var_2 % var_3);
                    arr_29 [i_8] [i_6] [i_6] = var_12;
                    var_31 = var_8;
                    var_32 = (max(var_32, var_13));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_33 = (max(var_33, var_1));
                    var_34 *= 0;
                }
                var_35 = ((var_2 ? ((1588630345 ? var_2 : var_5)) : (~var_0)));
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_36 = (max(var_36, ((((((-3115 + 2147483647) >> var_1)) % (32763 && -38))))));
                arr_36 [i_6] [i_6] [i_10] [i_6] = (max(((((max(2706336951, var_13))) ? 4294967295 : 4294967267)), (((1 >> (37 - 34))))));
                var_37 = (max(var_37, (((~((var_12 ? ((242 >> (210 - 204))) : var_2)))))));
            }

            /* vectorizable */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_38 = (max(var_38, var_9));
                var_39 = (min(var_39, var_3));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 9;i_14 += 1)
                    {
                        {
                            var_40 = var_3;
                            var_41 = (min(var_41, ((~((var_10 ? var_16 : var_6))))));
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_42 = -var_0;
                    var_43 = (~var_4);
                }
                for (int i_16 = 2; i_16 < 9;i_16 += 1)
                {
                    var_44 = ((var_6 ? var_5 : var_0));
                    var_45 = var_5;
                }
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    var_46 = var_5;
                    var_47 = 2706336937;
                    var_48 = 1;
                    var_49 = ((((var_5 ? var_8 : var_16))) ? var_11 : (var_9 ^ var_10));
                    arr_57 [i_0] [i_6] [i_6] [i_6] [i_17] = ((var_16 ? var_7 : (!var_16)));
                }

                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    var_50 = var_5;
                    arr_60 [i_18] [i_6] [i_6] [i_0] = (var_15 ? ((var_3 ? var_1 : 4236594991)) : var_10);

                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        var_51 = ((var_14 ? var_10 : var_6));
                        var_52 = ((127 ? var_5 : var_9));
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_53 = ((3245401605 ? (var_9 < 50) : (~1)));
                        arr_65 [i_6] = (2336396077762602962 < var_8);
                        var_54 = 1134225738;
                        var_55 = (var_6 ? (((var_11 ? var_4 : var_14))) : var_9);
                    }
                    arr_66 [i_6] [i_6] = (~3245401605);
                    arr_67 [i_0] [i_6] [i_0] [i_0] [i_0] = 4294967267;
                }
                for (int i_21 = 1; i_21 < 7;i_21 += 1)
                {
                    var_56 = (var_9 - var_9);
                    var_57 = (max(var_57, (var_13 <= var_7)));

                    for (int i_22 = 0; i_22 < 10;i_22 += 1)
                    {
                        var_58 ^= (((var_15 / var_6) >> ((((var_4 ? var_9 : var_3)) - 2130413378))));
                        var_59 = (((!(-32767 - 1))));
                    }
                    for (int i_23 = 2; i_23 < 8;i_23 += 1)
                    {
                        arr_75 [i_6] [i_0] [i_12] [i_6] [i_6] = var_8;
                        var_60 = (~((var_6 ? var_7 : var_9)));
                    }
                    arr_76 [i_0] [i_6] [i_12] [i_12] [i_12] [i_21] = var_10;
                }
            }
            for (int i_24 = 1; i_24 < 8;i_24 += 1)
            {
                var_61 = ((-14 % ((~(max(var_2, var_13))))));
                var_62 ^= 2997469906;

                for (int i_25 = 0; i_25 < 10;i_25 += 1)
                {
                    arr_82 [i_6] [i_6] [i_6] [i_6] = ((~((((min(var_16, var_6)) < (((var_11 ? -38 : var_14))))))));
                    var_63 = (max((max((var_12 | var_0), ((var_0 ? var_12 : var_12)))), (max((min(var_8, -22627)), (min(244, var_16))))));
                }
            }
        }
    }
    var_64 = (-1 ? 5 : var_16);
    #pragma endscop
}
