/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 *= (min(8725979779831890840, 1));
            arr_4 [i_1] = (min((max((min((arr_1 [i_0]), var_8)), ((max((arr_2 [i_0] [i_0] [i_0]), var_2))))), (max((max(2147483645, var_1)), (max((arr_1 [i_1]), var_8))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_12 = 1;
                arr_10 [i_0] [i_2] [i_2 - 1] [i_3] = 1519757672;
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_13 = 65534;
                var_14 &= 4294967295;
                arr_15 [i_2] [i_2] [i_2] = 255;
                var_15 = (max(var_15, 65519));

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_16 = 13;
                    var_17 += 39;
                    var_18 &= 1;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = 15287804727797664461;
                    arr_22 [i_0] [i_0] [i_0] [i_4] [i_0] [i_6] = 1728483596;
                    var_19 = 64216;
                    var_20 = (max(var_20, 11));
                    arr_23 [i_0] &= 26;
                }
            }
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    var_21 &= 33424;
                    var_22 = 16364985411364151466;
                    arr_29 [i_8] [i_8] [i_7] [i_7] = 40;
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        var_23 = 4094;
                        arr_35 [i_2] [i_10] [i_10] = 1;
                    }
                    arr_36 [i_0] [i_2] [i_7] [i_9] = 1;
                    arr_37 [i_0] = 15896572895711778017;
                }
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    arr_40 [i_0] [i_2 + 2] [i_0] [i_11] = 65519;
                    var_24 = 63223;
                }

                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        var_25 = 1;
                        arr_46 [i_13] = 1;
                        var_26 = -1;
                        var_27 = -6;
                        arr_47 [i_0] [i_0] [i_13] [i_0] [i_13] = 33423;
                    }
                    arr_48 [i_12] [i_2] [i_0] = 16;
                }
                for (int i_14 = 3; i_14 < 13;i_14 += 1)
                {
                    arr_52 [i_0] [i_2] [i_7 + 2] [i_14 + 2] [i_2] [i_0] = -101;
                    arr_53 [i_0] [i_2 + 2] = 36081;
                    var_28 = 31;
                }

                for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    arr_56 [i_0] [i_0] [i_7 + 2] [i_15] = 12163848314374072256;

                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        var_29 = 36265;
                        var_30 -= -24;
                    }
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        var_31 = (max(var_31, 0));
                        var_32 = 3867767963;
                    }
                    arr_64 [i_0] [i_2] [i_2] [i_15] = 1558648892;
                    arr_65 [i_0] [i_2] [i_0] [i_7] [i_15] = 768517412;
                    arr_66 [13] [i_2 + 1] [13] [i_15 - 1] = 44962;
                }
                for (int i_18 = 1; i_18 < 1;i_18 += 1) /* same iter space */
                {
                    var_33 = -26956;
                    arr_70 [5] [i_2] [i_7] = -16384;
                }
                var_34 *= 2550171177997773598;
                var_35 = (min(var_35, 2514145158));
            }
            arr_71 [i_0] [i_0] [i_2] &= 0;
        }
        var_36 = (min(((max(12, 26935))), (min((max(var_4, 29454)), (min(18446744073709551608, 18428729675200069632))))));
        arr_72 [i_0] = (max((max(((min(var_3, (arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (max(var_1, 1)))), (min((min(var_2, var_8)), (min(var_10, (arr_63 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        arr_73 [i_0] = (max(((max(((max((arr_68 [i_0] [i_0] [i_0] [i_0]), -1558648893))), (max(var_5, 1776467452805215640))))), (max((min(1, var_8)), ((max(var_5, var_9)))))));
    }
    var_37 = (min(var_37, ((max((min(((min(21033, 20559))), (max(var_1, var_7)))), (max((max(16591288245511261496, var_6)), (max(var_8, -958622593)))))))));
    var_38 = (min((max((max(var_8, 160)), (max(var_10, var_2)))), ((max((max(2016, 1)), ((min(32767, -18254))))))));
    #pragma endscop
}
