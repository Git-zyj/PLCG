/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_4 [1] [i_1] = ((var_11 ? (((var_5 & var_7) ? ((~(arr_3 [i_0] [i_0] [i_0]))) : (arr_3 [i_1 + 1] [i_1 + 1] [15]))) : var_4));
            var_12 = ((170 ? (((var_8 && var_1) ? var_0 : (((var_4 ? var_8 : (arr_3 [i_1] [11] [i_1])))))) : ((max((!-7288), var_8)))));
            var_13 = (((min((((var_3 ? var_6 : 7316))), ((var_8 * (arr_0 [i_0] [i_1 - 1]))))) != ((((var_7 + var_3) + var_11)))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_14 = (!var_11);
            var_15 &= (((-(((arr_5 [i_2] [i_0]) ? 5530590929433320302 : var_10)))) + ((((((-(arr_6 [i_2])))) ? (var_4 < var_1) : (var_8 != -5530590929433320299)))));
            arr_7 [i_0] [i_2] = ((var_4 % (max((arr_5 [i_0] [i_2]), var_6))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_16 = var_6;
            arr_10 [i_0] [i_3] [i_0] = (((arr_5 [i_0] [i_0]) <= var_9));
            var_17 = ((!((((((arr_5 [16] [16]) + 2147483647)) >> (((arr_6 [i_0]) - 12692537458753108136)))))));
            var_18 = ((655314861269694608 ? 0 : var_10));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_19 = (min((arr_1 [1]), -var_0));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_20 = var_7;

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_23 [i_0] [i_4] [i_5] [i_0] [i_7] = (max(-var_0, (((((max(var_2, (arr_18 [i_0] [i_0] [i_6] [i_6] [i_7] [i_0])))) || (arr_17 [i_4]))))));
                            arr_24 [i_0] = ((-((var_2 + (5530590929433320298 | var_8)))));
                            arr_25 [i_0] [14] [14] [12] [i_7] = (min((((((min(var_9, var_7))) || (arr_0 [19] [19])))), 153));
                        }
                        var_21 |= ((((((max((arr_14 [i_0] [i_5] [i_6]), -8397736896257150801)) * (arr_3 [i_4] [i_5] [i_6])))) * ((-5171759636003232372 ? 0 : 8264480890833103940))));
                        var_22 &= (arr_18 [i_0] [0] [i_4] [i_5] [i_5] [i_6]);
                    }
                }
            }
            arr_26 [i_4] = var_10;
        }

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_29 [i_0] [i_8] = (arr_9 [i_8]);
            arr_30 [i_0] [i_0] [i_0] &= ((((!(7288 && var_6)))));
            var_23 = (max(var_23, (2013282524 / 4107370130379981102)));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_34 [i_0] |= (65242 % 7288);

            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                var_24 = (max(var_24, (((-((var_8 >> (2958101669640898639 - 2958101669640898621))))))));
                arr_38 [i_9] = ((-((var_2 ? var_11 : (((!(arr_21 [i_9]))))))));
                var_25 = (max(var_25, (((((max((arr_15 [i_9] [i_9] [13]), var_2))) ? (var_5 / var_4) : var_10)))));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_41 [i_11] = ((((((-9223372036854775807 - 1) / 7144586067847270766))) ? var_1 : (arr_18 [17] [i_0] [i_0] [i_11] [i_11] [i_11])));
            var_26 = var_7;
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_27 ^= var_1;
                        arr_50 [i_13] [i_13] [i_13] [i_13] = (((-9223372036854775803 < var_1) | ((max(var_10, (241 || var_1))))));
                        arr_51 [i_0] [i_0] [i_0] |= min((min(0, -5530590929433320298)), var_0);
                        var_28 = (max(var_28, var_3));
                        arr_52 [i_13] [i_13] [i_13] [i_13] = var_4;
                    }
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 21;i_15 += 1)
    {
        var_29 = (max(var_29, (!-3)));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            {
                                var_30 ^= (max(((var_8 ? (var_0 && 9223372036854775807) : ((max(var_2, var_5))))), -7282));
                                arr_67 [11] [11] [11] [i_18] [i_18] = ((var_2 ? ((var_9 & (min(var_5, var_6)))) : var_11));
                            }
                        }
                    }
                    var_31 ^= (!30943);
                }
            }
        }
        arr_68 [i_15] = var_4;
        arr_69 [i_15] = (arr_61 [i_15] [i_15]);
        arr_70 [i_15 + 1] = var_10;
    }
    var_32 = var_1;
    var_33 = ((88 ? 18446744073709551603 : ((((((var_1 ? var_4 : var_5))) ? var_10 : (8397736896257150800 >= 167))))));
    var_34 = ((-(var_3 / var_1)));
    #pragma endscop
}
