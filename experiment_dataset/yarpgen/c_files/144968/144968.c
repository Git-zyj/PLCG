/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (((!var_6) ? (arr_3 [i_0] [i_0]) : ((-26579 ? (arr_3 [i_0] [i_0]) : var_7))));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_12 = var_6;

            for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
            {
                var_13 = var_7;
                var_14 = ((((((arr_1 [i_1] [i_1 - 3]) + (arr_1 [i_1 - 1] [i_1 - 2])))) ? 1 : -343960641));

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_14 [i_0] [i_2] [i_2] [i_3] = var_5;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_15 = (((!(((26585 ? var_1 : 1))))));
                        var_16 = (((((-26593 ? (!3951006655) : (~var_9)))) ? (max(5777390558293619360, -22208)) : (((max((max((arr_15 [i_0] [i_2 + 1] [i_3] [i_4]), (arr_0 [i_1 - 3] [i_0]))), (!27)))))));
                        var_17 = (6785902336268611282 - -1);
                        arr_17 [i_2] [i_1 - 3] [i_2] [i_1 - 3] [i_1 - 2] [i_0] [i_2] = (~26607);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_2] [i_2] = (((arr_13 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1] [i_0]) > ((1 ? 1897150725 : var_3))));
                        arr_22 [i_2] = (~9);
                        arr_23 [i_0] [i_2] [i_0] [i_0] [i_0] = (((!1) ? ((var_11 ? (arr_19 [i_0] [i_1 - 3] [i_2 + 1] [i_5] [i_5] [i_2]) : var_3)) : (arr_16 [i_0] [i_1 - 3] [i_2 + 1])));
                        arr_24 [i_0] [i_2] [i_1] [i_2] [i_0] [i_1] [i_5] = (arr_6 [i_5]);
                    }
                    arr_25 [i_0] [i_2] [i_0] [i_2] [i_0] = ((!(arr_0 [i_0] [i_1 - 2])));
                    arr_26 [i_2] [i_2 + 1] = (max(((min(var_3, 1))), (var_7 ^ 239)));
                    arr_27 [i_2] [i_3] = (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || ((max((arr_3 [i_0] [i_0]), (arr_12 [i_1 - 3] [i_3] [i_3] [i_3]))))));
                }
                var_18 = 11731701269590497937;
                var_19 = (max(((1 ? 1 : -26586)), (~1)));
            }
            for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_20 = 1;
                arr_30 [i_0] [i_0] [i_1 + 1] [i_0] = 7060982590200016480;
                var_21 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_22 = 546000452;
            }
        }
        var_23 = ((21134 ? (max((((arr_5 [i_0] [i_0] [i_0]) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 9325609581569885592)), -26579)) : ((((26589 == (!18)))))));
    }
    for (int i_7 = 2; i_7 < 6;i_7 += 1)
    {
        arr_35 [i_7 + 1] [i_7 + 1] = (((!(arr_7 [i_7] [i_7 - 1]))));
        arr_36 [i_7 - 2] [i_7 - 2] = var_0;
        arr_37 [i_7] = (arr_32 [i_7] [i_7 + 2]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_24 += (~-1897150725);
            arr_42 [i_8 + 2] [i_8 + 1] [i_8 + 1] = (((arr_40 [i_8] [i_8 + 2] [i_8 + 2]) ? 0 : (arr_40 [i_8] [i_9] [i_9])));
            arr_43 [i_8 - 1] [i_8 - 1] [i_8 + 2] = -1;

            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {
                arr_47 [i_9] [i_10 - 2] [i_10 - 1] [i_9] = ((-((var_2 >> (arr_38 [i_8])))));
                arr_48 [i_10 - 1] = -246;
                var_25 = (arr_39 [i_8 + 1] [i_9]);
            }
            var_26 = 1;
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_27 = (min(var_27, (((1 ? 1 : 127)))));

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_56 [i_8] [i_8] [i_12] = ((var_0 ? -580101872 : (arr_45 [i_8] [i_8 + 2] [i_12])));
                arr_57 [0] |= -1;
                var_28 = ((1 ? 153 : 3429087357645584423));
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
            {
                arr_62 [i_11] [i_11] [i_11] = 73;
                var_29 = (min(var_29, 1));
                var_30 = (min(var_30, (arr_49 [i_8 + 1])));
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                arr_65 [i_8 - 1] [i_11] [i_14] = -32147;
                arr_66 [i_11] [i_8] = 246;
            }
            arr_67 [i_8 - 1] [i_11] |= ((-725989124 ? -1590719558 : 73));
        }
        arr_68 [i_8] = -26607;
        arr_69 [i_8 + 1] = -88;
    }
    var_31 = var_1;
    var_32 = (((min(19, (!var_6)))));
    var_33 = var_6;
    var_34 = var_3;
    #pragma endscop
}
