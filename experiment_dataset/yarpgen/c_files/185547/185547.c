/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1 + 3] = -31606;

            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                var_19 = ((var_3 ? var_10 : var_7));

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_20 += 194570749;
                    arr_11 [i_0] [i_1 - 2] [i_2] [i_0] [i_0] [i_3] = ((arr_2 [0]) ? (~var_7) : 5112090645183981610);
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_4] [i_2] [i_0] [i_0] |= (!var_4);

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_21 = (min(var_21, (((0 ? (arr_16 [i_1 - 1] [i_1 - 3]) : var_16)))));
                        arr_19 [i_0] = ((-121 / ((var_10 ? (arr_18 [i_0] [i_1] [i_1] [i_1]) : var_5))));
                        arr_20 [i_0] [i_1] [i_2] [i_4] [i_5] = (var_5 > var_5);
                    }
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        arr_24 [i_6] [i_4] [5] [i_1] [5] = ((1068184068 ? (14349 > 1) : (arr_5 [i_6])));
                        arr_25 [i_6] [i_4] [i_2] [i_1] [i_0] = var_13;
                    }
                    for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0 + 3] [i_0 + 3] [i_2 - 1] [i_0 + 3] [i_0 + 3] = ((~(arr_8 [i_2] [i_2] [i_1 - 3] [i_0])));
                        arr_29 [i_7] [i_4] [i_2] [i_0] [i_0] = (((((-(arr_22 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 1] [i_7] [i_7])))) ? (~var_13) : 65518));
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_22 = (((((!(arr_21 [i_8] [i_4] [i_2] [i_2] [i_1 - 1] [i_0] [i_0])))) - (255 % var_9)));
                        var_23 = (min(var_23, var_8));
                        arr_32 [i_0] [i_1] [i_2] [i_2] [9] [i_8] [i_8 - 3] = (arr_3 [i_0] [i_0]);
                    }
                    var_24 -= var_13;
                    var_25 = ((!(var_12 % var_4)));
                    arr_33 [i_4] [i_2] [i_0] [i_0] = var_0;
                }
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    var_26 = (((arr_8 [i_0] [i_0] [i_2] [i_0]) % var_5));
                    arr_36 [i_9] [i_9] [i_9] [i_9] [i_1] [i_0] = ((!(~var_0)));
                    var_27 = ((!(arr_34 [i_0] [i_1 - 2] [i_9] [i_9] [i_9])));
                    var_28 = (min(var_28, (arr_23 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 1])));
                    var_29 -= var_1;
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    arr_39 [i_10] [i_1] [i_1] [i_0 + 2] = ((var_4 - (arr_35 [i_2 - 1] [i_1] [i_0 + 2] [i_2])));
                    arr_40 [i_0] [i_2] = (arr_37 [i_0 + 1]);
                    var_30 = (min(var_30, var_4));
                    arr_41 [1] [i_10] [i_2] [i_1 + 4] [i_0] = 592075375;
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_46 [i_2] [i_11] [i_12] = var_18;
                            var_31 = (-9223372036854775807 - 1);
                        }
                    }
                }
                var_32 = ((17921 <= (!237)));
                var_33 *= var_1;
            }
            arr_47 [i_0] [i_1] |= (var_9 ? (arr_4 [14]) : var_6);
            var_34 = -var_15;
        }
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {

            for (int i_14 = 2; i_14 < 17;i_14 += 1)
            {
                var_35 = ((((var_17 ? var_16 : var_7)) - var_16));
                arr_52 [i_13] [2] = (((arr_37 [i_0 - 1]) ? (((var_5 == var_14) ? (var_14 | var_9) : var_0)) : (arr_5 [i_0])));
            }
            arr_53 [i_13] [i_13] = var_17;
            arr_54 [i_13] [i_13] = ((((min((arr_51 [i_13] [i_13 - 1] [i_0 + 3]), var_15))) * -596608541));
            arr_55 [i_13] = (!var_13);
        }
        for (int i_15 = 4; i_15 < 17;i_15 += 1)
        {
            var_36 = (min(var_36, (((-((-((~(arr_1 [i_15] [i_0]))))))))));
            var_37 *= var_0;
            var_38 = (max((((~(arr_5 [i_0 - 1])))), (((arr_16 [i_0 + 2] [i_15 + 1]) - (arr_17 [i_0] [i_15] [i_0] [i_0] [i_15 - 3] [11])))));
        }
        arr_58 [i_0 + 1] [i_0] = (((((65534 ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 + 3])))) ? (((!(arr_5 [i_0 + 2])))) : var_7));
        arr_59 [i_0] = var_3;
    }
    for (int i_16 = 2; i_16 < 17;i_16 += 1)
    {
        arr_62 [i_16] [i_16 + 2] = ((-((-44 ? -0 : (((arr_61 [i_16 + 1]) / (arr_61 [i_16 + 1])))))));
        var_39 = (max(-26, 342565818));
        var_40 = ((-(arr_60 [i_16])));
    }
    var_41 = var_4;
    var_42 = (var_17 > var_5);
    #pragma endscop
}
