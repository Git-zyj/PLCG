/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_8;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_21 = (!1);
        var_22 = (max(var_22, 5850));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_23 = (arr_2 [i_1 - 2]);
        var_24 = var_16;
        var_25 ^= (arr_1 [i_1] [i_1 - 2]);

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_11 [i_1] [i_3] [i_3] = ((((-29459 + 2147483647) >> (-255 + 278))));
                var_26 = (min(var_26, ((((-(arr_0 [i_2 - 1] [i_3])))))));
                var_27 = (~0);
                var_28 = ((((((arr_2 [i_1]) * (176 < 0)))) && (arr_5 [i_2] [i_2 - 1] [i_1 - 1])));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_29 = -12866880924972851795;
                var_30 = (min((max(-1602832698, (-32767 - 1))), var_17));
                arr_14 [i_1] [i_2 + 1] = (arr_1 [i_2 - 1] [i_4]);
            }
            var_31 = (min(var_31, 21113));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_32 ^= ((-(max(((var_19 ? 6 : (arr_3 [i_5]))), ((min(18, 20)))))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_33 = (arr_12 [i_6] [i_5] [i_6] [i_7 + 2]);
                    var_34 = (arr_21 [i_7 + 1] [i_7] [i_6] [i_5] [i_1 - 3]);
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_35 = ((((-(((arr_6 [i_8] [i_1] [i_1]) ? var_11 : -5693792769088497987))))) ? 3634855403953044359 : (!0));
                    arr_25 [i_1] [i_1] [i_1] [i_1] = (((((~(arr_6 [i_1 - 3] [i_1 + 2] [i_1 + 1])))) ? -6163044756008069818 : (min(-26586, -1602832698))));
                    var_36 = var_5;
                    var_37 -= ((1152921504606846975 >> (235 - 230)));
                    var_38 &= (((!7) ? (((arr_6 [i_6] [i_6] [i_6]) & (arr_6 [i_1] [i_1] [i_1]))) : (1 && var_19)));
                }
                var_39 = 7;
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_40 = max(((1 ^ (5579863148736699820 != 1))), ((-((min((arr_23 [i_1] [i_1] [i_9] [i_9] [i_9] [i_9]), (arr_6 [i_1] [i_1 + 2] [i_1 - 1])))))));

            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_36 [i_1] [i_9] [i_10] [i_10] [i_11] [i_9] = (max((+-64214), (((arr_23 [i_1] [5] [i_1] [i_1 + 1] [i_1] [i_1]) & (arr_23 [i_1 - 3] [i_9] [i_10] [i_10] [i_11 - 3] [i_12])))));
                        arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] = (min(99, (((var_10 ? (arr_35 [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_1 + 2] [i_10]) : var_0)))));
                        var_41 = (!var_13);
                    }
                    var_42 = (max(var_42, ((max((((((arr_34 [i_1] [i_1 + 2] [i_9] [i_9] [i_1] [i_11]) ? (arr_27 [i_1] [i_1 + 2]) : 110)) * -var_10)), ((max(0, (arr_1 [i_1 - 2] [i_1 - 2])))))))));
                    arr_38 [i_1 - 2] [i_10] [i_10] [i_11] = (arr_0 [i_1] [i_9]);
                    var_43 = (max(var_43, var_10));
                }
                for (int i_13 = 3; i_13 < 16;i_13 += 1) /* same iter space */
                {
                    var_44 = (min((((1 ? -94 : 1322))), (min((arr_27 [i_1 - 2] [i_13 + 2]), (arr_7 [i_1 - 2])))));
                    var_45 = (max(var_45, (((max(var_13, (arr_32 [i_13] [i_13 + 1] [i_13 + 1] [i_13])))))));
                    var_46 = (max(var_46, ((((arr_12 [i_1 - 2] [0] [i_10] [i_13]) % (((!var_17) ? (arr_2 [i_9]) : (arr_4 [i_1 - 3]))))))));
                    arr_41 [i_9] [i_9] [i_10] [i_9] [5] [i_9] = ((!((((arr_27 [i_9] [i_10]) ? (arr_16 [i_1] [i_1 - 1]) : (~0))))));
                    arr_42 [i_10] [i_1] [i_9] [i_9] [i_10] = (((((var_13 * (arr_8 [i_10] [i_9] [i_1 - 2] [i_10]))))));
                }
                var_47 = (((arr_4 [i_9]) * (64226 != 241)));
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
            {
                arr_47 [i_14] = 1342158206;
                var_48 = (13 < 1056768104);
            }

            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_49 = var_17;
                arr_52 [i_1] [i_1] [i_15] = ((+((-((max((arr_44 [i_1] [i_15] [i_1]), 50069)))))));
                var_50 = ((min(var_17, (arr_45 [i_15] [i_9] [i_1 + 1]))));
                arr_53 [i_15] = 4;
                var_51 *= ((-(arr_9 [i_1 - 3] [i_9] [16])));
            }
            var_52 = (max(var_52, 12866880924972851793));
        }
        var_53 = (arr_29 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]);
    }
    var_54 = (max(var_54, (20999 < 9)));
    #pragma endscop
}
