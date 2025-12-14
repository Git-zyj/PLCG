/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = ((((var_1 ? (var_5 / var_4) : (var_9 / var_7)))) ? (((min(var_1, var_2)) / (((min(var_5, var_10)))))) : ((var_5 ? (~var_0) : (!var_9))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (32760 * 32775);
        arr_4 [i_0] = min(var_9, (~var_0));
        arr_5 [1] = ((((var_9 & var_4) & var_0)) | ((-var_8 & (((19366 ? -120 : 88))))));
        arr_6 [i_0] = (((((var_11 || (~var_7))))) & (((((var_5 ? var_9 : var_5))) & var_11)));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = ((!var_3) ? (var_10 % var_8) : (max((max(var_2, var_11)), ((var_9 ? var_5 : var_11)))));
            var_15 ^= var_9;
            var_16 = (max(var_16, ((((var_1 ? ((0 ? 43023 : 0)) : (var_5 * var_10))) >> ((min((max(var_3, var_3)), (!-8570861989031933702))))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 ^= ((((!(((1 ? -110 : 120))))) ? 1 : (max((22 & 32746), -5894088788184586721))));
            arr_14 [i_1] [i_3] [i_3] = (((max(((var_7 ? var_0 : var_4)), var_10)) >= (~var_3)));
            var_18 = var_1;
            var_19 += ((max((min(var_1, var_4)), ((min(var_5, var_6))))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_20 *= var_2;
                            arr_25 [i_1] [i_1] [i_5] [i_6] = (0 | -2662852395606138067);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_9 + 1] = ((~((var_7 << (var_1 + 3087318050737506318)))));
                        var_21 = (var_1 / var_5);
                    }
                }
            }
            arr_31 [i_4] [i_4] &= (((var_7 ? var_11 : var_6)));
        }
        for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((((94 + (-71 ^ 116)))) * -1))));
            arr_35 [i_1] [i_1] = 0;
        }
        var_23 = (max(var_23, (((var_3 & var_5) ? ((var_7 / (var_0 || var_8))) : (((((!1) || (var_8 / var_8)))))))));
        arr_36 [i_1] = (((26666 >= -1) ? ((-2101384335165312041 ? (min(var_11, var_10)) : (var_4 & var_6))) : (((var_2 != var_8) - ((var_0 ? var_11 : var_9))))));
    }
    for (int i_11 = 1; i_11 < 8;i_11 += 1)
    {
        arr_40 [i_11] = ((((1 ? -2495448216363916379 : 0))) ? var_0 : (var_3 || var_11));
        var_24 = (((var_7 | var_8) - var_1));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 9;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 6;i_13 += 1)
            {
                {

                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            var_25 = (!var_0);
                            var_26 += var_6;
                        }
                        arr_53 [i_11] [i_12] [i_11] = ((~((((var_5 ? var_2 : var_0)) + (var_3 - var_3)))));

                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 7;i_16 += 1)
                        {
                            var_27 = ((25 / ((var_3 ? var_8 : var_6))));
                            var_28 = ((((var_0 ? var_4 : var_9)) * (var_6 / var_0)));
                        }
                        for (int i_17 = 1; i_17 < 9;i_17 += 1)
                        {
                            var_29 = ((-((var_5 ? var_2 : var_10))));
                            var_30 = (((((((var_8 ? var_4 : var_8))) ? var_8 : (((var_9 << (var_2 + 21)))))) ^ (max((var_7 & var_0), (min(var_8, var_5))))));
                            var_31 = (max(var_31, (((!(var_10 / var_8))))));
                        }
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            arr_62 [i_11] [i_11] [i_11] [i_14 - 1] [i_18] = (((var_2 ^ var_1) ? var_8 : (min(var_2, var_11))));
                            arr_63 [i_11] [i_11] = ((((min((min(var_4, var_3)), var_0))) ? (var_6 & var_10) : var_9));
                            var_32 = (((var_4 ? ((var_5 ? var_1 : var_3)) : (var_7 / var_2))) ^ (((var_2 ? var_5 : (var_0 && var_10)))));
                            arr_64 [i_11] [i_12] [i_13] [i_14] [i_11] = (((var_1 >= var_4) * ((max(var_7, var_7)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_19 = 2; i_19 < 8;i_19 += 1)
                    {
                        var_33 = var_8;
                        var_34 = (var_6 / var_8);

                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            var_35 *= var_1;
                            arr_70 [i_11] [i_11] [i_11] [i_11] [i_11] = ((var_7 && (var_3 * var_6)));
                        }
                        var_36 = ((var_3 / var_11) >> (var_6 ^ var_3));
                    }
                    var_37 = var_5;
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 4; i_22 < 9;i_22 += 1)
                        {
                            {
                                var_38 &= ((((var_11 ? (var_8 >= var_10) : var_4)) >> (((((var_5 ? var_1 : var_10)) <= var_1)))));
                                arr_78 [i_11] [1] [i_11] [i_11] [i_21] [i_22 - 2] = (((-10 + 6363830890281572228) ? -116 : -1));
                                var_39 |= ((((var_0 / ((var_1 ? var_2 : var_3))))) ? ((((var_0 != (max(var_7, var_8)))))) : ((var_8 ? (43023 / -9058802459147311467) : (((var_8 ? var_5 : var_3))))));
                                arr_79 [i_11] [i_12] [i_11] [i_12] [i_11] [i_11] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_23 = 1; i_23 < 8;i_23 += 1)
    {
        arr_83 [i_23] = ((min(var_4, var_5)));
        arr_84 [i_23] = ((+(((var_5 & var_5) ? (var_4 <= var_4) : ((var_3 ? var_2 : var_7))))));
    }
    var_40 = ((((((var_5 ? var_11 : var_2)) - (var_11 * var_9))) > ((max(var_0, (var_3 + var_7))))));
    #pragma endscop
}
