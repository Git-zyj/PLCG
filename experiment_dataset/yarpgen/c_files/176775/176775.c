/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = (min(var_17, (((+((((arr_1 [i_0 - 1]) ? var_7 : 1))))))));
        var_18 &= (!-31796);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                arr_11 [i_1] [i_2] [i_2] = (((-24073 & 1710742999) ^ ((((((arr_0 [6]) ? (arr_8 [i_1] [i_2] [i_3] [9]) : var_16)))))));
                arr_12 [i_1] [i_1] [i_1] [i_1] = 1752986731954507191;
                var_19 = -1752986731954507192;
                var_20 = (min(var_20, (arr_9 [i_1])));
            }
            arr_13 [i_1] = (((((((min(0, 3519851978884370708))) ? ((var_11 ? 52770 : var_0)) : 1))) ? 1 : 845417328));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_21 = arr_4 [i_4] [i_5];
                var_22 -= (arr_0 [i_5]);
            }
            arr_19 [i_4] [i_4] &= ((var_14 ? 19226 : (arr_2 [i_1] [i_1])));
            arr_20 [i_1] [i_1] [i_1] = ((((arr_15 [i_1] [i_1] [i_1]) / (arr_14 [i_1]))));
        }
        var_23 *= (!3144465736);
        var_24 = (((((arr_0 [i_1]) ? (min(658160899, var_12)) : 36802212))) ? ((min(26684, (min(var_14, (arr_4 [i_1] [i_1])))))) : (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_25 = (arr_6 [i_6] [i_6]);
            var_26 = (((3519851978884370718 * 3144465767) << (var_5 - 3135335183)));
            arr_25 [i_1] = (((((!(arr_0 [i_1])))) <= (max(0, (-2147483647 - 1)))));

            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                var_27 = var_9;
                var_28 &= ((((((min(8518597217723360071, 59656)) + ((((!(arr_2 [i_1] [i_6])))))))) ? ((((var_8 < (arr_1 [i_1]))) ? ((~(arr_6 [i_6] [i_6]))) : (((((arr_5 [i_1]) < 36028797018962944)))))) : (arr_21 [i_6])));
                var_29 = (((((~(arr_26 [i_1] [i_7 + 1]))) <= (((arr_1 [i_6]) ? var_5 : (arr_2 [i_7] [i_1]))))));
            }
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_30 += 1752986731954507209;
            var_31 = 1640955698620841516;
            var_32 = ((((min((arr_3 [i_1]), (arr_3 [i_1])))) ? ((~(arr_3 [i_1]))) : (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
        }
    }
    var_33 = var_10;
    var_34 = ((~((-11680 ? (((var_0 ? 127 : var_0))) : 9812837942712210797))));
    var_35 = var_9;
    var_36 = ((var_5 ? (~35) : (~var_14)));
    #pragma endscop
}
