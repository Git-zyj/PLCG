/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_5 ? ((var_4 ? -1413593093 : var_0)) : var_1))) % 13941779668709830518));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = var_4;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 = (min(var_13, (~var_2)));
            var_14 &= (((arr_0 [i_1]) ? (arr_0 [i_0]) : var_10));
        }

        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_15 = (min(var_15, (((var_6 ? var_8 : (!var_11))))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_16 = ((var_10 ? (arr_12 [i_2 - 1] [i_3] [i_3]) : 1));
                arr_15 [4] [i_2] [4] [i_0] = (((((5272667017301921955 ? (arr_6 [i_0]) : 13941779668709830518))) || var_3));
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0]) ? 140737488289792 : 8362105882296344907));
                var_17 += (((arr_3 [i_0]) ? -8362105882296344908 : (((arr_11 [i_4] [i_4] [i_4] [1]) - -14722))));
            }
            var_18 = (min(var_18, ((((13941779668709830538 ^ var_11) & -1101777960389373464)))));
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_19 = (max(var_19, (((var_0 > (-2388 >= var_7))))));
            arr_21 [i_0] [i_0] [i_5] = 9;

            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                var_20 = arr_9 [i_0];
                arr_24 [i_0] [i_5] [i_5] [i_6] = var_11;
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_21 = var_5;
                var_22 = (((arr_11 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1]) && (arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                var_23 = (max(var_23, var_4));

                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    var_24 = -2797774549686162812;
                    var_25 = (arr_1 [i_8 + 1]);

                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, var_9));
                        var_27 = ((-(((!(arr_17 [i_0] [i_0] [i_5] [i_0]))))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = -2207;
                        arr_37 [i_0] [i_5] [i_7] [i_8] [i_10] = ((((~(arr_33 [i_0] [i_0] [i_5] [i_7] [i_8 - 1] [i_10]))) >> ((((var_0 ? 5272667017301921943 : var_0)) - 5272667017301921883))));
                    }

                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_5] [i_7] [8] [i_5] = (-123 - var_6);
                        var_28 = ((-var_6 ? ((var_8 ? var_7 : var_0)) : ((((var_7 || (arr_7 [i_8])))))));
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_5] = (arr_8 [i_5 - 1] [i_5 - 1]);
                        var_29 = (arr_7 [i_12]);
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_30 = (((arr_34 [i_0] [i_13] [i_7] [i_8] [8] [i_7]) ? (arr_33 [i_0] [i_5 - 1] [i_5] [i_8] [i_0] [i_8 - 1]) : (arr_34 [i_5] [i_8 + 1] [i_8] [i_8] [i_5 - 1] [i_8])));
                        arr_48 [i_0] [i_5] [i_0] [i_0] = (((arr_11 [13] [i_5 - 1] [i_7] [i_8 - 2]) ? (arr_11 [i_0] [i_5 - 1] [i_7] [i_8 - 2]) : (arr_38 [i_0] [i_5 - 1] [i_5] [i_8 + 1] [i_13])));
                        var_31 = -1;
                    }
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_32 = (((arr_20 [i_5 - 1] [i_5 - 1]) ? 1 : 1));

                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_33 = (max(var_33, (((1 == (arr_8 [i_0] [i_5 - 1]))))));
                        arr_54 [i_0] [i_5] [i_7] [i_5] [i_0] = (arr_17 [i_5] [8] [i_5] [i_5]);
                        var_34 = (((((0 ? -31042 : -6894768782353040969))) ? -26564 : 0));
                        var_35 = var_1;
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_36 = ((arr_19 [i_0] [i_5 - 1] [i_7]) ? (arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : var_10);
                        arr_59 [i_0] [i_0] [i_5] [i_5] [i_14] [1] [i_16] = var_8;
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_37 = ((((var_7 ? (arr_0 [i_0]) : 0)) != ((4504964404999721088 ? var_10 : (arr_23 [i_0] [i_7] [i_14])))));
                        arr_64 [i_0] [i_5] [i_5] [i_0] [5] [i_14] [i_17] = var_7;
                        var_38 = (((~var_0) ? (((arr_6 [i_5 - 1]) ? (arr_31 [i_5] [i_14] [i_5] [17] [i_5] [i_0] [i_0]) : (arr_2 [i_0] [i_5 - 1]))) : (arr_51 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                    }
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        arr_67 [i_18] [i_5] [i_5] [i_5] [i_5] [i_0] = -11913;
                        arr_68 [i_0] [i_0] [i_0] [i_5] = (((arr_39 [i_5]) ? (arr_39 [i_18]) : (arr_39 [i_0])));
                    }

                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        var_39 = var_4;
                        arr_71 [i_0] [i_5] [i_5] [i_14] [i_19] = ((127 ? (arr_61 [i_5 - 1] [i_5 - 1] [i_7] [i_19 - 1] [i_14]) : (arr_13 [i_5 - 1])));
                        arr_72 [i_5] [i_7] = -var_3;
                    }
                }
            }
        }
        for (int i_20 = 2; i_20 < 17;i_20 += 1)
        {
            var_40 = (var_0 ? ((var_5 ? var_7 : (arr_65 [i_0] [i_0] [i_0]))) : -var_3);
            arr_77 [i_0] [i_20] [i_20] = ((var_9 ? (arr_16 [i_0]) : -68));
            arr_78 [i_20] [i_20] [i_20] = ((-((var_6 >> (var_8 - 242)))));
        }
        arr_79 [i_0] = ((-(arr_60 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        arr_83 [i_21] [i_21] = -1093864209;
        arr_84 [i_21] = (((-8362105882296344907 ? (arr_28 [0] [0] [i_21] [i_21] [i_21]) : var_8)));
    }
    var_41 = (min(var_41, ((max(var_7, var_3)))));
    var_42 = var_11;
    #pragma endscop
}
