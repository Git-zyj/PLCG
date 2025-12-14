/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(var_2, (var_6 / var_2))));
    var_11 |= ((~(max((~var_9), ((min(var_4, var_6)))))));
    var_12 = (var_1 ? (!var_8) : (((~var_8) ? (max(var_7, 2691088970)) : 5860)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = var_1;
        var_14 = ((((((117 ? var_8 : (arr_2 [i_0]))))) == (((95 ? 95 : 1)))));
        arr_3 [i_0] [1] = (min(((-95 ? (min((arr_1 [3]), 2147483647)) : (((-(arr_2 [i_0])))))), ((min(-104, 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, 122));
        arr_6 [i_1] [i_1] = (arr_2 [i_1]);
        arr_7 [i_1] = ((~(arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_16 = var_0;
            arr_16 [i_2] [i_2] [i_2] = ((1 ? 6623174790748535255 : var_3));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_17 = (((((32 ? (arr_10 [i_4] [i_2]) : 139))) ? -2147483647 : 2147483647));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_18 = (min((max(var_6, (arr_18 [i_2] [i_2]))), ((min((~var_0), (~var_0))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_19 = ((-(arr_12 [i_2])));
                    arr_26 [i_2] [i_2] = (((var_5 | var_0) & -1));
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_20 = var_6;
                    var_21 = (arr_18 [i_2] [i_2]);
                }
                var_22 = ((-((((arr_5 [i_4]) < 53735)))));
                var_23 = (max(var_23, (((((((arr_2 [i_2]) % (arr_15 [i_5] [i_4] [i_2])))) || ((max((arr_8 [i_4]), (max(var_1, var_3))))))))));

                for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    var_24 = (min((((var_5 < var_4) ? -var_8 : var_7)), (arr_27 [i_2] [11] [i_5] [i_2])));
                    var_25 = (~var_3);
                    var_26 = ((-3982101006940756733 ? ((11 ? ((40 ? 1 : 1122003555)) : 135)) : -461479972));
                }
                for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_27 = ((-var_5 >= (((arr_25 [i_9 + 1] [i_9] [i_9 + 1] [i_9]) ? 2147483647 : 0))));
                    var_28 = ((var_6 > (!9197)));
                    var_29 = (((((~(((arr_9 [i_2]) ? 7184 : var_3))))) ? ((var_9 * (var_8 / var_8))) : (arr_1 [i_4])));
                    var_30 = (arr_33 [i_2] [i_2] [i_2]);
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_31 ^= (((((-((16 ? var_8 : var_8))))) ? (max(var_6, (max(var_9, var_3)))) : (((var_5 ? (arr_12 [i_11]) : 3769532580)))));
                        var_32 = 25035;
                        var_33 = (arr_9 [i_2]);
                        var_34 = (((-127 - 1) | (((113 | var_8) ? (~-855351098) : (~var_1)))));
                    }
                    arr_39 [1] [1] [14] [i_2] = (arr_4 [i_4] [i_5]);
                    arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] = ((59135 ? -28143 : 6398));
                    var_35 = ((-256 ? (((235766903 ? (30 ^ 65516) : var_5))) : ((-(((arr_36 [i_2] [i_2] [i_2] [i_2]) % 115))))));
                }
            }
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                var_36 -= -255;
                var_37 = ((-(!var_0)));
                var_38 = min((((((525434716 ? (arr_11 [i_2] [16]) : 7))) ? (((arr_31 [i_2] [i_2] [i_12 + 2]) ? var_5 : var_9)) : 11890)), -11823569282961016360);
            }
        }
        for (int i_13 = 4; i_13 < 19;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_39 = (((((3 ? (arr_45 [i_2] [i_2] [i_13 - 2] [i_15]) : (arr_45 [i_2] [i_13] [i_13 - 3] [i_15])))) ? 33 : (!-20621)));
                        var_40 = (min(var_40, ((max((((arr_21 [i_2] [i_15]) ? var_4 : -68719472640)), (((2147483647 ? 1 : var_8))))))));
                        arr_49 [i_2] [i_2] [i_14] [i_2] [i_2] = ((-(arr_47 [i_2])));
                        var_41 = (-2147483647 - 1);
                    }
                }
            }
            var_42 *= (min(-12212, (((arr_15 [i_13 - 2] [i_13 + 1] [i_13 - 1]) ? var_0 : 47))));
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 18;i_17 += 1)
                {
                    {
                        var_43 = min(((~(arr_19 [i_2] [i_17 - 1] [i_16 - 1]))), (arr_19 [i_16] [i_17 + 2] [i_16 - 1]));
                        var_44 = 175;
                        arr_55 [i_2] [i_13] [5] [i_17] = ((var_3 && (arr_42 [i_16 + 1] [i_13] [i_17 + 3])));
                    }
                }
            }
        }
        var_45 = ((47 ? 2147483628 : 0));
        var_46 += ((((-(min(var_9, 3577568736)))) / (arr_1 [i_2])));
    }
    #pragma endscop
}
