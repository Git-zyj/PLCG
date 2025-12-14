/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [10] = (max((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) * 0))));
        var_13 = ((-92 ? 2385621182 : 2385621165));
        var_14 = (max(var_14, (((((arr_0 [i_0] [i_0]) || (arr_1 [i_0])))))));
        var_15 = min((((1631156164 != ((27374 ? 4294967280 : 55942))))), 118);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_10 [i_2] [i_2] [i_2] = (((((118 ? 15393 : 55917))) == (max((arr_8 [i_2] [i_1] [i_0] [i_0]), 372087726585171879))));
                arr_11 [i_2] = var_8;

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_16 = var_0;
                    var_17 = 7655310908818989498;
                    arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] = 9593;
                    arr_15 [i_2] [i_2] [i_1] [i_0] [i_2] = 55937;
                }
                var_18 = (13 + 1);
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_19 = ((~((-(var_2 <= var_4)))));

                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_20 = (var_2 + var_0);
                    var_21 |= (min(1874695350, 1866220402432823484));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_22 += ((55941 | (-9223372036854775807 - 1)));
                    var_23 = (((((arr_12 [i_0] [i_0] [i_0] [i_0] [13]) - 248514615)) >= (var_3 > var_3)));
                    var_24 = (((((max(var_5, (arr_21 [6] [i_0] [i_0] [i_1] [i_4] [i_6])))) ? (arr_20 [20] [1] [i_4] [20]) : (~var_12))));
                    arr_23 [i_4] [i_6] = ((((min(120, 1))) ? (((-(arr_5 [i_0] [i_1] [6])))) : var_4));
                    var_25 = (min(var_25, (((!((((((24 ? var_3 : var_1))) ? (243 != -2883450597640195159) : (var_11 / var_2)))))))));
                }
                var_26 = ((!((((4139991713 + var_11) ? (!193) : (max((-32767 - 1), (arr_22 [i_0] [i_4] [i_4]))))))));

                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_27 = (3 || 0);
                    var_28 = (min((min(18446744073709551592, (-32767 - 1))), var_4));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_29 = 21373;
                        arr_33 [i_0] [i_4] [i_4] = (((arr_13 [i_9] [i_9] [i_9 + 1] [i_9]) << (372087726585171880 - 20384)));
                        var_30 = ((((((arr_13 [i_0] [i_1] [i_4] [i_4]) && 114))) + (arr_2 [i_9])));
                        var_31 = ((!(arr_0 [i_0] [i_0])));
                    }
                    var_32 = (min(var_32, ((((arr_9 [i_1]) ? (arr_9 [i_1]) : var_2)))));
                }
            }
            var_33 = (min(var_33, ((((((!((min((arr_27 [i_0] [i_0] [i_0] [i_0]), 250)))))) == ((((max(0, (arr_8 [i_1] [i_0] [i_0] [i_0])))) ? (((var_8 && (arr_9 [i_0])))) : (!var_3))))))));
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_34 = (max(var_34, (!37)));
        var_35 = (arr_35 [i_10]);
    }
    for (int i_11 = 3; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_36 = ((~((0 * ((((arr_29 [i_11] [i_11] [i_11] [i_11 - 1] [i_11]) || var_2)))))));
        var_37 = (~((9585 ^ (((arr_5 [20] [i_11] [i_11]) & var_6)))));
        var_38 |= (16320 || 55951);
    }
    for (int i_12 = 3; i_12 < 21;i_12 += 1) /* same iter space */
    {
        var_39 |= (((min(((9223372036854775807 ? -7 : 15586)), (arr_13 [i_12] [i_12] [i_12] [i_12 + 1]))) < (-2147483647 - 1)));
        var_40 = (((0 & 16038) | (min(1999439489, 28420))));
        arr_42 [i_12] = (arr_32 [i_12] [i_12] [i_12] [i_12] [19] [3] [8]);
    }
    var_41 = (((((var_9 < var_6) >= 2)) ? ((var_6 & (2147483646 + 0))) : var_9));
    var_42 = var_8;
    #pragma endscop
}
